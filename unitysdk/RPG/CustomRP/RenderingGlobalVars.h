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

#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDACTOR_OFFSET UNITYSDK_OFFSET(0x16C27690)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x16C27AA0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x16C27870)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ATTACHRENDERS_OFFSET UNITYSDK_OFFSET(0x16C27950)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CHECKSPRBATCHOPT_OFFSET UNITYSDK_OFFSET(0x16C26940)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CLEANUPSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x16C27D80)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_DECDITHER_OFFSET UNITYSDK_OFFSET(0x16C27C80)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ENDUIPP_OFFSET UNITYSDK_OFFSET(0x16C280A0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_FORCEUPDATESCENESHADOW_OFFSET UNITYSDK_OFFSET(0x16C27D90)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GETCAMERAVERISON_OFFSET UNITYSDK_OFFSET(0x16C27CF0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_SHADOWCENTERGO_OFFSET UNITYSDK_OFFSET(0x16C280F0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USESRPBATCH_OFFSET UNITYSDK_OFFSET(0x16C281E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_VALIDLOCALREFLECTION_OFFSET UNITYSDK_OFFSET(0x16C281F0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_HIDEACTOR_OFFSET UNITYSDK_OFFSET(0x16C27820)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCDITHER_OFFSET UNITYSDK_OFFSET(0x16C27C50)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCREASECAMERAVERSION_OFFSET UNITYSDK_OFFSET(0x16C27D20)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ISFORCECSMPERFRAME_OFFSET UNITYSDK_OFFSET(0x16C28180)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x16C27590)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x16C270D0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x16C271A0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONQUIT_OFFSET UNITYSDK_OFFSET(0x16C27660)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_QUERYACTOR_OFFSET UNITYSDK_OFFSET(0x16C27A90)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTORRENDER_OFFSET UNITYSDK_OFFSET(0x16C278C0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTOR_OFFSET UNITYSDK_OFFSET(0x16C27890)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REGISTERCRPDATA_OFFSET UNITYSDK_OFFSET(0x16C28340)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x16C27A30)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEACTOR_OFFSET UNITYSDK_OFFSET(0x16C277B0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x16C27BA0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x16C27880)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x16C27760)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETCACHEPOSITION_OFFSET UNITYSDK_OFFSET(0x16C279E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETENABLEINDOORCHARACTERSHADOW_OFFSET UNITYSDK_OFFSET(0x16C27E60)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETOBJLOCALLIGHT_OFFSET UNITYSDK_OFFSET(0x16C27A70)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETSHADOWPROBEBLEND_OFFSET UNITYSDK_OFFSET(0x16C27D50)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SET_SHADOWCENTERGO_OFFSET UNITYSDK_OFFSET(0x16C28120)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_STARTUIPP_OFFSET UNITYSDK_OFFSET(0x16C27E90)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_UNREGISTERCRPDATA_OFFSET UNITYSDK_OFFSET(0x16C28580)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_UPDATEALLCRPDATA_OFFSET UNITYSDK_OFFSET(0x16C285F0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C26960)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__CLEARCRPDATA_OFFSET UNITYSDK_OFFSET(0x16C27460)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__INIT_OFFSET UNITYSDK_OFFSET(0x16C26930)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x16C26950)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x16C288E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x16C28910)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RenderingGlobalVars_TypeDefinitionIndex = 36099;

	class RenderingGlobalVars : public ::System::Object
	{
	public:
		static ::UnityEngine::PassTagID* StaticGet__Scene_Lux_Emission_()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>** StaticGet__CRPDisableDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36B0);
		}
		static ::RPG::CustomRP::IEngineEnvSystem** StaticGet_engienEnvSystem()
		{
			return (::RPG::CustomRP::IEngineEnvSystem**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36B8);
		}
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>** StaticGet_localReflection()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36C0);
		}
		static ::UnityEngine::RenderTexture** StaticGet__UIPPRT()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36C8);
		}
		static ::PlaneReflectionProxy** StaticGet_PlaneReflectionProxy()
		{
			return (::PlaneReflectionProxy**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36D0);
		}
		static ::UnityEngine::PassTagID* StaticGet_LightingGBufferEyeHair()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36D8);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomRPTransparent()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36E8);
		}
		static ::UnityEngine::GameObject** StaticGet__shadowCenterGo()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x36F8);
		}
		static ::RPG::CustomRP::BlackboardMgr** StaticGet_blackboardMgr()
		{
			return (::RPG::CustomRP::BlackboardMgr**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x3700);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomForwardOpaque()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x3708);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_capsules()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x3718);
		}
		static ::UnityEngine::PassTagID* StaticGet_ForwardEmission()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x3720);
		}
		static ::RPG::CustomRP::AvatarEffectInfo** StaticGet_AvatarEffectsHalfRes()
		{
			return (::RPG::CustomRP::AvatarEffectInfo**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x3730);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>** StaticGet__CRPDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x3738);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomRPTransparent2()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x3740);
		}
		static ::RPG::CustomRP::AvatarEffectInfo** StaticGet_AvatarEffects()
		{
			return (::RPG::CustomRP::AvatarEffectInfo**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x3750);
		}
		static ::System::Boolean* StaticGet_EnablePostProcessing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2620);
		}
		static ::System::Boolean* StaticGet_DisablePOSMOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2621);
		}
		static ::System::Boolean* StaticGet_EnableSkillRadial()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2622);
		}
		static ::System::Boolean* StaticGet_EnableIndoorCharacterShadow()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2623);
		}
		static ::System::Int32* StaticGet_DisableLocalMainLight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2624);
		}
		static ::UnityEngine::Vector4* StaticGet_capsuleColor()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2628);
		}
		static ::RPG::CustomRP::EProbeResOverride* StaticGet_ProbeResOverride()
		{
			return (::RPG::CustomRP::EProbeResOverride*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2638);
		}
		static ::System::Single* StaticGet_PlanarReflectionRTScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x263C);
		}
		static ::System::Boolean* StaticGet_CSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2640);
		}
		static ::System::Boolean* StaticGet_needForceUpdateEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2641);
		}
		static ::System::Boolean* StaticGet_EnableSSR()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2642);
		}
		static ::System::Boolean* StaticGet_DrawRefectorPass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2643);
		}
		static ::System::Int32* StaticGet_AdvCharaStencilFace()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2644);
		}
		static ::System::Int32* StaticGet_CameraChangedVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2648);
		}
		static ::System::Int32* StaticGet_capsuleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x264C);
		}
		static ::System::UInt32* StaticGet_ShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2650);
		}
		static ::System::UInt32* StaticGet_TransparentPreDapthLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2654);
		}
		static ::System::Boolean* StaticGet_RTSupported_ARGBFloat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2658);
		}
		static ::System::Boolean* StaticGet_DisableLocalLightLerp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2659);
		}
		static ::System::Boolean* StaticGet_RTSupported_R10G11B11UF()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x265A);
		}
		static ::System::Boolean* StaticGet_EnableDetachable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x265B);
		}
		static ::System::Int32* StaticGet_StencilMonsterStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x265C);
		}
		static ::System::UInt32* StaticGet_LocalShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2660);
		}
		static ::System::Boolean* StaticGet_DebugNewResolutionConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2664);
		}
		static ::System::Boolean* StaticGet_DebugForceCSMPerFrame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2665);
		}
		static ::System::Boolean* StaticGet_DisableMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2666);
		}
		static ::System::Boolean* StaticGet_DisableLowQualityEyeHairStencil()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2667);
		}
		static ::RPG::CustomRP::EPlaneReflectionMode* StaticGet_PlaneReflectionMode()
		{
			return (::RPG::CustomRP::EPlaneReflectionMode*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2668);
		}
		static ::System::UInt32* StaticGet_DynamicShadowRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x266C);
		}
		static ::System::UInt32* StaticGet_ReflectorCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2670);
		}
		static ::System::Boolean* StaticGet_ForceNoCSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2674);
		}
		static ::System::Boolean* StaticGet_RTSupported_R10G10B10A2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2675);
		}
		static ::System::Boolean* StaticGet_AlwaysUpdateReflection()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2676);
		}
		static ::System::Boolean* StaticGet_DeferProbe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2677);
		}
		static ::System::UInt32* StaticGet_ExclusiveShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2678);
		}
		static ::System::UInt32* StaticGet_MotionVectorsRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x267C);
		}
		static ::System::UInt32* StaticGet_AvatarEffectPropExRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2680);
		}
		static ::System::Boolean* StaticGet_Enable_Update_Bounds()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2684);
		}
		static ::System::Boolean* StaticGet_capsuleAOUseHizMip()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2685);
		}
		static ::System::Boolean* StaticGet_MaskCSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2686);
		}
		static ::System::Boolean* StaticGet_LockShadowCenterGo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2687);
		}
		static ::System::UInt32* StaticGet_DisableCullingRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2688);
		}
		static ::System::UInt32* StaticGet_DefaultRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x268C);
		}
		static ::System::UInt32* StaticGet_ReflectorRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2690);
		}
		static ::UnityEngine::Color* StaticGet_IndoorSceneLightColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2694);
		}
		static ::System::Boolean* StaticGet_EnableSkipDraw()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26A4);
		}
		static ::System::Boolean* StaticGet_EnableViewportMask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26A5);
		}
		static ::System::Boolean* StaticGet_WaterMarkEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26A6);
		}
		static ::System::UInt32* StaticGet_AddtionalDepthRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26A8);
		}
		static ::System::Int32* StaticGet_CharacterDitherCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26AC);
		}
		static ::System::UInt32* StaticGet_AdditionalReflectionCasterRLM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26B0);
		}
		static ::System::Single* StaticGet_ignoreMainLightLimit()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26B4);
		}
		static ::System::Int32* StaticGet__LastLightLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26B8);
		}
		static ::System::Int32* StaticGet_StencilCharacterStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26BC);
		}
		static ::System::Boolean* StaticGet_IsStoryMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26C0);
		}
		static ::System::Boolean* StaticGet_RenderAddLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26C1);
		}
		static ::System::Boolean* StaticGet_EnableShadowProbeBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26C2);
		}
		static ::System::Boolean* StaticGet_FlushEnvCmdNoMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26C3);
		}
		static ::System::UInt32* StaticGet_SSRReflactorRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26C4);
		}
		static ::System::Int32* StaticGet_DisableUpdate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26C8);
		}
		static ::RPG::CustomRP::BlurParam* StaticGet_PlaneBlurParam()
		{
			return (::RPG::CustomRP::BlurParam*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26CC);
		}
		static ::System::Int32* StaticGet_CharacterDefaultStencil()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26D4);
		}
		static ::System::Single* StaticGet_GaussBlurScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26D8);
		}
		static ::System::Int32* StaticGet_Bounds_Upd_Frequecy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26DC);
		}
		static ::System::Boolean* StaticGet_DebugDisableVSM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E0);
		}
		static ::System::Boolean* StaticGet_DrawTransparentObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E1);
		}
		static ::System::Boolean* StaticGet_ForwardUpdateShadow()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E2);
		}
		static ::System::Boolean* StaticGet_IsUnLimitShadowCount()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E3);
		}
		static ::System::Boolean* StaticGet_DrawOutline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E4);
		}
		static ::System::Boolean* StaticGet_OnePassShadowOnlyResolve()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E5);
		}
		static ::System::Boolean* StaticGet_DrawOpaqueObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E6);
		}
		static ::System::Boolean* StaticGet_RTSupported_ARGBHalf()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E7);
		}
		static ::System::UInt32* StaticGet_PreDepthAlphaTestLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26E8);
		}
		static ::System::Int32* StaticGet_StoryCharacterCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26EC);
		}
		static ::System::Single* StaticGet_PerObjectShadowHighQulityRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26F0);
		}
		static ::System::UInt32* StaticGet_ShadowReceiverRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x26F4);
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
