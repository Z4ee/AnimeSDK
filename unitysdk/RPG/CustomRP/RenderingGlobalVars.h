#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BlurParam.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/RPG/CustomRP/EPlaneReflectionMode.h"
#include "unitysdk/RPG/CustomRP/EProbeResOverride.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Rendering/CRPActor.h"
#include "unitysdk/UnityEngine/Rendering/CRPRenderObjectFlag.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class PlaneReflectionProxy;
namespace RPG::CustomRP { class AvatarEffectInfo; }
namespace RPG::CustomRP { class BlackboardMgr; }
namespace RPG::CustomRP { class IAmbientVolumne; }
namespace RPG::CustomRP { class IEngineEnvSystem; }
namespace RPG::CustomRP { class IPlaneReflection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class IRPData; }

#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDACTOR_OFFSET UNITYSDK_OFFSET(0x1CC40010)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x1CC40420)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x1CC401F0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ATTACHRENDERS_OFFSET UNITYSDK_OFFSET(0x1CC402D0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CHECKSPRBATCHOPT_OFFSET UNITYSDK_OFFSET(0x1CC3F260)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CLEANUPSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x1CC40700)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_DECDITHER_OFFSET UNITYSDK_OFFSET(0x1CC40600)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ENDUIPP_OFFSET UNITYSDK_OFFSET(0x1CC40A20)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_FORCEUPDATESCENESHADOW_OFFSET UNITYSDK_OFFSET(0x1CC40710)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GETCAMERAVERISON_OFFSET UNITYSDK_OFFSET(0x1CC40670)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_SHADOWCENTERGO_OFFSET UNITYSDK_OFFSET(0x1CC40A70)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USEMPB_OFFSET UNITYSDK_OFFSET(0x1CC40B60)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USESRPBATCH_OFFSET UNITYSDK_OFFSET(0x1CC3FF00)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_VALIDLOCALREFLECTION_OFFSET UNITYSDK_OFFSET(0x1CC40BD0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_HIDEACTOR_OFFSET UNITYSDK_OFFSET(0x1CC401A0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCDITHER_OFFSET UNITYSDK_OFFSET(0x1CC405D0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCREASECAMERAVERSION_OFFSET UNITYSDK_OFFSET(0x1CC406A0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ISFORCECSMPERFRAME_OFFSET UNITYSDK_OFFSET(0x1CC40B00)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x1CC3FF10)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x1CC3FA10)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x1CC3FAE0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONQUIT_OFFSET UNITYSDK_OFFSET(0x1CC3FFE0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_QUERYACTOR_OFFSET UNITYSDK_OFFSET(0x1CC40410)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTORRENDER_OFFSET UNITYSDK_OFFSET(0x1CC40240)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTOR_OFFSET UNITYSDK_OFFSET(0x1CC40210)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REGISTERCRPDATA_OFFSET UNITYSDK_OFFSET(0x1CC40D20)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1CC403B0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEACTOR_OFFSET UNITYSDK_OFFSET(0x1CC40130)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x1CC40520)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x1CC40200)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1CC400E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETCACHEPOSITION_OFFSET UNITYSDK_OFFSET(0x1CC40360)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETENABLEINDOORCHARACTERSHADOW_OFFSET UNITYSDK_OFFSET(0x1CC407E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETOBJLOCALLIGHT_OFFSET UNITYSDK_OFFSET(0x1CC403F0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETSHADOWPROBEBLEND_OFFSET UNITYSDK_OFFSET(0x1CC406D0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETUSEMPB_OFFSET UNITYSDK_OFFSET(0x1CC40BA0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SET_SHADOWCENTERGO_OFFSET UNITYSDK_OFFSET(0x1CC40AA0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_STARTUIPP_OFFSET UNITYSDK_OFFSET(0x1CC40810)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_UNREGISTERCRPDATA_OFFSET UNITYSDK_OFFSET(0x1CC40F60)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_UPDATEALLCRPDATA_OFFSET UNITYSDK_OFFSET(0x1CC40FD0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC3F280)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__CLEARCRPDATA_OFFSET UNITYSDK_OFFSET(0x1CC3FDD0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__INIT_OFFSET UNITYSDK_OFFSET(0x1CC3F250)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x1CC3F270)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x1CC412C0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1CC412F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RenderingGlobalVars_TypeDefinitionIndex = 37643;

	class RenderingGlobalVars : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::BlackboardMgr** StaticGet_blackboardMgr()
		{
			return (::RPG::CustomRP::BlackboardMgr**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2A70);
		}
		static ::RPG::CustomRP::IEngineEnvSystem** StaticGet_engienEnvSystem()
		{
			return (::RPG::CustomRP::IEngineEnvSystem**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2A78);
		}
		static ::UnityEngine::RenderTexture** StaticGet__UIPPRT()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2A80);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomRPTransparent()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2A88);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>** StaticGet__CRPDisableDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2A98);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>** StaticGet__CRPDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AA0);
		}
		static ::PlaneReflectionProxy** StaticGet_PlaneReflectionProxy()
		{
			return (::PlaneReflectionProxy**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AA8);
		}
		static ::UnityEngine::PassTagID* StaticGet_ForwardEmission()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AB0);
		}
		static ::UnityEngine::PassTagID* StaticGet__Scene_Lux_Emission_()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AC0);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_capsules()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AD0);
		}
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>** StaticGet_localReflection()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AD8);
		}
		static ::UnityEngine::GameObject** StaticGet__shadowCenterGo()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AE0);
		}
		static ::RPG::CustomRP::AvatarEffectInfo** StaticGet_AvatarEffectsHalfRes()
		{
			return (::RPG::CustomRP::AvatarEffectInfo**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AE8);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomForwardOpaque()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2AF0);
		}
		static ::UnityEngine::PassTagID* StaticGet_LightingGBufferEyeHair()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2B00);
		}
		static ::RPG::CustomRP::AvatarEffectInfo** StaticGet_AvatarEffects()
		{
			return (::RPG::CustomRP::AvatarEffectInfo**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2B10);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomRPTransparent2()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2B18);
		}
		static ::System::Boolean* StaticGet_RTSupported_R10G10B10A2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21A0);
		}
		static ::System::Boolean* StaticGet_ForwardUpdateShadow()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21A1);
		}
		static ::System::Boolean* StaticGet_DisableLowQualityEyeHairStencil()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21A2);
		}
		static ::System::Boolean* StaticGet_Enable_Update_Bounds()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21A3);
		}
		static ::System::UInt32* StaticGet_DefaultRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21A4);
		}
		static ::System::Boolean* StaticGet_DisableLocalLightLerp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21A8);
		}
		static ::System::Boolean* StaticGet_AlwaysUpdateReflection()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21A9);
		}
		static ::System::Boolean* StaticGet_CSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21AA);
		}
		static ::System::Boolean* StaticGet_EnableSkillRadial()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21AB);
		}
		static ::System::Int32* StaticGet_Bounds_Upd_Frequecy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21AC);
		}
		static ::UnityEngine::Vector4* StaticGet_capsuleColor()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21B0);
		}
		static ::System::Int32* StaticGet_CameraChangedVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21C0);
		}
		static ::System::UInt32* StaticGet_ShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21C4);
		}
		static ::System::Int32* StaticGet_StencilMonsterStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21C8);
		}
		static ::System::Boolean* StaticGet_EnableShadowProbeBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21CC);
		}
		static ::System::Boolean* StaticGet_DrawRefectorPass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21CD);
		}
		static ::System::Boolean* StaticGet__UseMPB()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21CE);
		}
		static ::System::Boolean* StaticGet_DebugForceCSMPerFrame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21CF);
		}
		static ::System::Boolean* StaticGet_IsUnLimitShadowCount()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21D0);
		}
		static ::System::Boolean* StaticGet_DebugNewResolutionConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21D1);
		}
		static ::System::Boolean* StaticGet_MaskCSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21D2);
		}
		static ::System::Boolean* StaticGet_DeferProbe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21D3);
		}
		static ::System::UInt32* StaticGet_ShadowReceiverRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21D4);
		}
		static ::RPG::CustomRP::EPlaneReflectionMode* StaticGet_PlaneReflectionMode()
		{
			return (::RPG::CustomRP::EPlaneReflectionMode*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21D8);
		}
		static ::System::Int32* StaticGet_CharacterDitherCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21DC);
		}
		static ::System::UInt32* StaticGet_ExclusiveShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21E0);
		}
		static ::System::UInt32* StaticGet_TransparentPreDapthLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21E4);
		}
		static ::System::Single* StaticGet_PerObjectShadowHighQulityRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21E8);
		}
		static ::System::Boolean* StaticGet_ForceNoCSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21EC);
		}
		static ::System::Boolean* StaticGet_EnableSkipDraw()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21ED);
		}
		static ::System::Boolean* StaticGet_capsuleAOUseHizMip()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21EE);
		}
		static ::System::Boolean* StaticGet_DrawOpaqueObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21EF);
		}
		static ::System::UInt32* StaticGet_ReflectorRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21F0);
		}
		static ::System::UInt32* StaticGet_AvatarEffectPropExRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21F4);
		}
		static ::System::Int32* StaticGet_capsuleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21F8);
		}
		static ::System::Single* StaticGet_PlanarReflectionRTScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x21FC);
		}
		static ::System::Int32* StaticGet_DisableUpdate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2200);
		}
		static ::System::UInt32* StaticGet_PreDepthAlphaTestLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2204);
		}
		static ::System::Boolean* StaticGet_DrawOutline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2208);
		}
		static ::System::Boolean* StaticGet_IsStoryMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2209);
		}
		static ::System::Boolean* StaticGet_RTSupported_ARGBFloat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x220A);
		}
		static ::System::Boolean* StaticGet_EnableIndoorCharacterShadow()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x220B);
		}
		static ::RPG::CustomRP::EProbeResOverride* StaticGet_ProbeResOverride()
		{
			return (::RPG::CustomRP::EProbeResOverride*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x220C);
		}
		static ::System::UInt32* StaticGet_MotionVectorsRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2210);
		}
		static ::RPG::CustomRP::BlurParam* StaticGet_PlaneBlurParam()
		{
			return (::RPG::CustomRP::BlurParam*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2214);
		}
		static ::System::Int32* StaticGet_AdvCharaStencilFace()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x221C);
		}
		static ::System::Boolean* StaticGet_DisableMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2220);
		}
		static ::System::Boolean* StaticGet_DisablePOSMOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2221);
		}
		static ::System::Boolean* StaticGet_DrawTransparentObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2222);
		}
		static ::System::Boolean* StaticGet_RenderAddLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2223);
		}
		static ::System::UInt32* StaticGet_SSRReflactorRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2224);
		}
		static ::System::UInt32* StaticGet_AdditionalReflectionCasterRLM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2228);
		}
		static ::System::UInt32* StaticGet_AddtionalDepthRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x222C);
		}
		static ::UnityEngine::Color* StaticGet_IndoorSceneLightColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2230);
		}
		static ::System::Boolean* StaticGet_EnablePostProcessing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2240);
		}
		static ::System::Boolean* StaticGet_EnableViewportMask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2241);
		}
		static ::System::Boolean* StaticGet_EnableDetachable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2242);
		}
		static ::System::Boolean* StaticGet_LockShadowCenterGo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2243);
		}
		static ::System::Int32* StaticGet_StoryCharacterCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2244);
		}
		static ::System::Single* StaticGet_ignoreMainLightLimit()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2248);
		}
		static ::System::Int32* StaticGet_DisableLocalMainLight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x224C);
		}
		static ::System::Int32* StaticGet__LastLightLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2250);
		}
		static ::System::UInt32* StaticGet_DynamicShadowRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2254);
		}
		static ::System::UInt32* StaticGet_DisableCullingRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2258);
		}
		static ::System::Int32* StaticGet_CharacterDefaultStencil()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x225C);
		}
		static ::System::UInt32* StaticGet_LocalShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2260);
		}
		static ::System::Boolean* StaticGet_needForceUpdateEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2264);
		}
		static ::System::Boolean* StaticGet_RTSupported_R10G11B11UF()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2265);
		}
		static ::System::Boolean* StaticGet_DebugDisableVSM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2266);
		}
		static ::System::Boolean* StaticGet_EnableSSR()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2267);
		}
		static ::System::Int32* StaticGet_StencilCharacterStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2268);
		}
		static ::System::Boolean* StaticGet_WaterMarkEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x226C);
		}
		static ::System::Boolean* StaticGet_RTSupported_ARGBHalf()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x226D);
		}
		static ::System::Boolean* StaticGet_OnePassShadowOnlyResolve()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x226E);
		}
		static ::System::Boolean* StaticGet_FlushEnvCmdNoMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x226F);
		}
		static ::System::UInt32* StaticGet_ReflectorCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2270);
		}
		// static const ::System::Single PROBE_OFFSET_Y; // 0x0
		// static const ::System::Single BattleShadowHightQulityRange; // 0x0
		// static const ::System::Single AdventureShadowHightQulityRange; // 0x0
		// static const ::System::Single StoryShadowHightQulityRange; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__CCTOR_OFFSET))();
		}

		static ::System::Void _Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__INIT_OFFSET))();
		}

		static ::System::Void CheckSPRBatchOpt()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_CHECKSPRBATCHOPT_OFFSET))();
		}

		static ::System::Void _OnLeaveScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONLEAVESCENE_OFFSET))();
		}

		static ::System::Void OnEnterScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONENTERSCENE_OFFSET))();
		}

		static ::System::Void OnLeaveScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONLEAVESCENE_OFFSET))();
		}

		static ::System::Void OnChangeEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONCHANGEENV_OFFSET))();
		}

		static ::System::Void OnQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONQUIT_OFFSET))();
		}

		static ::System::Void AddActor(::UnityEngine::GameObject* a1, ::RPG::CustomRP::EObjectFeature a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::CustomRP::EObjectFeature, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDACTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveActor(::UnityEngine::GameObject* a1, ::RPG::CustomRP::EObjectFeature a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::CustomRP::EObjectFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void HideActor(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_HIDEACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void RefreshActor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTOR_OFFSET))(a1);
		}

		static ::System::Void RefreshActorRender(::UnityEngine::GameObject* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTORRENDER_OFFSET))(a1, a2);
		}

		static ::System::Void AttachRenders(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ATTACHRENDERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetCachePosition(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETCACHEPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void SetAboveOffset(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETABOVEOFFSET_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveAboveOffset(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEABOVEOFFSET_OFFSET))(a1);
		}

		static ::System::Void AddFlag(::UnityEngine::GameObject* a1, ::UnityEngine::Rendering::CRPRenderObjectFlag a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPRenderObjectFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveFlag(::UnityEngine::GameObject* a1, ::UnityEngine::Rendering::CRPRenderObjectFlag a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPRenderObjectFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void SetObjLocalLight(::UnityEngine::GameObject* a1, ::UnityEngine::Light* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETOBJLOCALLIGHT_OFFSET))(a1, a2);
		}

		static ::System::Boolean QueryActor(::UnityEngine::GameObject* a1, ::UnityEngine::Rendering::CRPActor& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPActor&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_QUERYACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void AddAmbientVolumne(::RPG::CustomRP::IAmbientVolumne* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::IAmbientVolumne*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDAMBIENTVOLUMNE_OFFSET))(a1);
		}

		static ::System::Void RemoveAmbientVolumne(::RPG::CustomRP::IAmbientVolumne* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::IAmbientVolumne*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEAMBIENTVOLUMNE_OFFSET))(a1);
		}

		static ::System::Void IncDither()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCDITHER_OFFSET))();
		}

		static ::System::Void DecDither()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_DECDITHER_OFFSET))();
		}

		static ::System::Int32 GetCameraVerison()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GETCAMERAVERISON_OFFSET))();
		}

		static ::System::Void IncreaseCameraVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCREASECAMERAVERSION_OFFSET))();
		}

		static ::System::Void SetShadowProbeBlend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETSHADOWPROBEBLEND_OFFSET))(a1);
		}

		static ::System::Void CleanupShadowCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_CLEANUPSHADOWCACHE_OFFSET))();
		}

		static ::System::Void ForceUpdateSceneShadow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_FORCEUPDATESCENESHADOW_OFFSET))();
		}

		static ::System::Void SetEnableIndoorCharacterShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETENABLEINDOORCHARACTERSHADOW_OFFSET))(a1);
		}

		static ::UnityEngine::RenderTexture* StartUIPP()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_STARTUIPP_OFFSET))();
		}

		static ::System::Void EndUIPP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ENDUIPP_OFFSET))();
		}

		static ::UnityEngine::GameObject* get_ShadowCenterGo()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_SHADOWCENTERGO_OFFSET))();
		}

		static ::System::Void set_ShadowCenterGo(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SET_SHADOWCENTERGO_OFFSET))(a1);
		}

		static ::System::Boolean IsForceCSMPerFrame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ISFORCECSMPERFRAME_OFFSET))();
		}

		static ::System::Boolean get_UseSRPBatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USESRPBATCH_OFFSET))();
		}

		static ::System::Boolean get_UseMPB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USEMPB_OFFSET))();
		}

		static ::System::Void SetUseMPB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETUSEMPB_OFFSET))(a1);
		}

		static ::RPG::CustomRP::IPlaneReflection* get_validLocalReflection()
		{
			return ((::RPG::CustomRP::IPlaneReflection*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_VALIDLOCALREFLECTION_OFFSET))();
		}

		static ::System::Void RegisterCRPData(::UnityEngine::Behaviour* a1, ::UnityEngine::Rendering::IRPData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REGISTERCRPDATA_OFFSET))(a1, a2);
		}

		static ::System::Void UnRegisterCRPData(::UnityEngine::Behaviour* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_UNREGISTERCRPDATA_OFFSET))(a1);
		}

		static ::System::Void UpdateAllCRPData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_UPDATEALLCRPDATA_OFFSET))();
		}

		static ::System::Void _ClearCRPData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__CLEARCRPDATA_OFFSET))();
		}

		static ::System::Void _OnSceneLoaded(::UnityEngine::SceneManagement::Scene a1, ::UnityEngine::SceneManagement::LoadSceneMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENELOADED_OFFSET))(a1, a2);
		}

		static ::System::Void _OnSceneUnloaded(::UnityEngine::SceneManagement::Scene a1)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENEUNLOADED_OFFSET))(a1);
		}
	};
}
