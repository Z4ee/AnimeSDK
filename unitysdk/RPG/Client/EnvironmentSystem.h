#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/Client/EnvironmentSystem_KeywordGroup.h"
#include "unitysdk/RPG/Client/MainlightSwitchType.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_357;
class Class_1_2404B906981762CA;
class Class_1_24B10CB562F3162A;
class Class_1_303D5A33D1401D59;
class Class_1_990E4282A5D5942A;
class Class_1_A392F01C781E3108;
class Class_1_DA5BEDF62053421B;
class Class_2_D865BB63FE6CF6EB_1;
class SceneLightVolume;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class PPEffectManager; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace RPG::CustomRP { class CustomAdditionalCameraData; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace RPG::CustomRP { class VolumetricFogController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_ENVIRONMENTSYSTEM_ADDDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0x1991B5C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ADJUSTTEMPTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1991AC40)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_APPLYPATCHTOACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1991DB80)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELASYNCINIT_OFFSET UNITYSDK_OFFSET(0x1991CD20)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELTRANSITION_OFFSET UNITYSDK_OFFSET(0x1991DC20)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARENVIROPATCH_OFFSET UNITYSDK_OFFSET(0x1991CDD0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARLOCALVOLUMEOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x1991E090)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARPERLEVEL_OFFSET UNITYSDK_OFFSET(0x1991CEF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1991CE70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CREATEENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1991BDE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVGPUPARTICLE_OFFSET UNITYSDK_OFFSET(0x1991D010)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVPARTICLE_OFFSET UNITYSDK_OFFSET(0x1991D050)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_EXTRACTFILENAME_OFFSET UNITYSDK_OFFSET(0x1991B030)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHALLTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1991DD80)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHTRANSITION_OFFSET UNITYSDK_OFFSET(0x1991D2D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEINITPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x1991D530)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEUPDATESHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x1991CCD0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETACTIVESCENELIGHTVOLUME_OFFSET UNITYSDK_OFFSET(0x1991B420)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETCAPSULEAOMANAGER_OFFSET UNITYSDK_OFFSET(0x1991D490)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETCURRENTACTIVEPROFILENAME_OFFSET UNITYSDK_OFFSET(0x1991AE30)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETDATA_OFFSET UNITYSDK_OFFSET(0x1991DEC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETENVTRANSITMANAGER_OFFSET UNITYSDK_OFFSET(0x1991D450)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETFRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0x1991D290)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETGBUFFERLIGHTINGMATNAME_OFFSET UNITYSDK_OFFSET(0x1991E190)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETINSTANCEBOTH_OFFSET UNITYSDK_OFFSET(0x1991B190)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETISCURSWITCHWORK_OFFSET UNITYSDK_OFFSET(0x1991D320)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETISVALID_OFFSET UNITYSDK_OFFSET(0x1991D630)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETLIGHTQUALITYVERSION_OFFSET UNITYSDK_OFFSET(0x1991DE10)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETLOCALVOLUMEMANAGER_OFFSET UNITYSDK_OFFSET(0x1991CD60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETMATERIALEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x1991D670)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x1991CE20)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETPROFILEASSETS_OFFSET UNITYSDK_OFFSET(0x1991E120)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETTODPROFILE_OFFSET UNITYSDK_OFFSET(0x1991E0E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GET_ACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1991DE00)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1991AD70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_HASPRIORITY_OFFSET UNITYSDK_OFFSET(0x1991DD30)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEMASYNC_OFFSET UNITYSDK_OFFSET(0x1991D3C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1991CF70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITPERLEVEL_OFFSET UNITYSDK_OFFSET(0x1991CEB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITPROFILE_OFFSET UNITYSDK_OFFSET(0x1991DDC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITSHADERKEYWORDPROPERTYSETTING_OFFSET UNITYSDK_OFFSET(0x1991BB00)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x1991D4E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ISNOTFULLENVSYS_OFFSET UNITYSDK_OFFSET(0x1991C970)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ISPATCHUSEENVSYSTEMV2_OFFSET UNITYSDK_OFFSET(0x1991B9D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LATETICK_OFFSET UNITYSDK_OFFSET(0x1991D230)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADBASECONFIG_OFFSET UNITYSDK_OFFSET(0x1991BB60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADGLOBALRESOURCEONINITGAME_OFFSET UNITYSDK_OFFSET(0x1991C9D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNCSIMPLE_OFFSET UNITYSDK_OFFSET(0x1991C2E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNC_OFFSET UNITYSDK_OFFSET(0x1991C6D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOGFILTER_OFFSET UNITYSDK_OFFSET(0x1991AAF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_NOTIFYENVCHANGE_OFFSET UNITYSDK_OFFSET(0x1991B120)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ONSTAGETRANSLATE_OFFSET UNITYSDK_OFFSET(0x1991C580)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RECORDMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1991C5C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEGLOBALRESOURCEONUNINITGAME_OFFSET UNITYSDK_OFFSET(0x1991CBE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITYWITHDURATION_OFFSET UNITYSDK_OFFSET(0x1991D9C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1991DBC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPROFILE_OFFSET UNITYSDK_OFFSET(0x1991C1B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_REMOVEDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0x1991B780)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RENDER_OFFSET UNITYSDK_OFFSET(0x1991DF60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1991D750)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0x1991D6C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0x1991D5F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x1991D410)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x1991C690)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESTOREMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1991C600)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNCWITHDURATION_OFFSET UNITYSDK_OFFSET(0x1991D900)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1991D790)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEWITHDURATION_OFFSET UNITYSDK_OFFSET(0x1991D840)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1991D7F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETBOOLPATCH_OFFSET UNITYSDK_OFFSET(0x1991DB20)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLECHARALIGHT_OFFSET UNITYSDK_OFFSET(0x1991D130)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLELIGHTPRELOAD_OFFSET UNITYSDK_OFFSET(0x1991BD80)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESCENELIGHT_OFFSET UNITYSDK_OFFSET(0x1991D180)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESHADOWLIGHT_OFFSET UNITYSDK_OFFSET(0x1991D0E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESKYBOX_OFFSET UNITYSDK_OFFSET(0x1991CFC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x1991D090)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1991C640)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENVLOCALVOLUMEOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x1991DFB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETFLOATPATCH_OFFSET UNITYSDK_OFFSET(0x1991DA60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETMAINLIGHTSWITCH_OFFSET UNITYSDK_OFFSET(0x1991D370)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETMONSTERLIGHTBYCAMERADIR_OFFSET UNITYSDK_OFFSET(0x1991D700)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETSTAGEVERSION_OFFSET UNITYSDK_OFFSET(0x1991DE60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONRATE_OFFSET UNITYSDK_OFFSET(0x1991DC70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONTARGETPROFILE_OFFSET UNITYSDK_OFFSET(0x1991DCD0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETVECTORPATCH_OFFSET UNITYSDK_OFFSET(0x1991DAC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1991ADA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SET_OFFSET UNITYSDK_OFFSET(0x1991DF10)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0x1991D1D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_TRYGETSENVLOCALVOLUMEOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x1991E020)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_TRYONLYONCEINITPROFILE_OFFSET UNITYSDK_OFFSET(0x1991CC90)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_UNINIT_OFFSET UNITYSDK_OFFSET(0x1991CF30)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_UPDATELIGHTMANAGER_OFFSET UNITYSDK_OFFSET(0x1991B940)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_VERSION_OFFSET UNITYSDK_OFFSET(0x1991B3B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEASSETSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0x1991C400)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEQUALITYSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0x1991C480)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINESHADOWSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0x1991C440)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__CAPTUREORIGINDEFERLIGHTINGMATANDSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1991F580)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1991FCA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1991FC00)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__GETMATERIALDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1991E570)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__LOGGBUFFERLIGHTINGMATDEBUG_OFFSET UNITYSDK_OFFSET(0x1991E850)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__RESTOREDEFERLIGHTINGMATERIALONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1991F7B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__SETGLOBALREFLECTIONPROBECOMMON_OFFSET UNITYSDK_OFFSET(0x1991C4C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROCLIPSBYCOMPONENTCOMMON_OFFSET UNITYSDK_OFFSET(0x1991C500)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROLIGHTCOMMON_OFFSET UNITYSDK_OFFSET(0x1991C540)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEGBUFFERLIGHTINGMATBYKEYWORD_OFFSET UNITYSDK_OFFSET(0x1991E8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystem_TypeDefinitionIndex = 69747;

	class EnvironmentSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::CustomRP::CustomAdditionalCameraData** StaticGet_s_CameraData()
		{
			return (::RPG::CustomRP::CustomAdditionalCameraData**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6DD0);
		}
		static ::Il2CppArray<::RPG::Client::EnvironmentSystem_KeywordGroup>** StaticGet_keywordGroups()
		{
			return (::Il2CppArray<::RPG::Client::EnvironmentSystem_KeywordGroup>**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6DD8);
		}
		static ::UnityEngine::Transform** StaticGet_s_RefProbesSceneRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6DE0);
		}
		static ::System::String** StaticGet_lastLog()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6DE8);
		}
		static ::System::String** StaticGet_GbufferLighingMatPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6DF0);
		}
		static ::System::Text::StringBuilder** StaticGet_localGBufferLightingMatNameSB()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6DF8);
		}
		static ::UnityEngine::Transform** StaticGet_s_GpuParticleRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E00);
		}
		static ::UnityEngine::Transform** StaticGet_s_Special_GpuParticleStencilClear()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E08);
		}
		static ::RPG::Client::EnvironmentSystem** StaticGet_instance()
		{
			return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E10);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEnvironmentSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E18);
		}
		static ::System::String** StaticGet__ReplacedGbufferLightingMatName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E20);
		}
		static ::UnityEngine::Transform** StaticGet_s_ParticleRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E28);
		}
		static ::UnityEngine::Mesh** StaticGet_GpuParticleMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E30);
		}
		static ::UnityEngine::Material** StaticGet__ReplacedGbufferLightingMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E38);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEnvironmentSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E40);
		}
		static ::UnityEngine::Camera** StaticGet_s_Camera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E48);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_keyword_Fog()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E50);
		}
		static ::UnityEngine::Material** StaticGet__OriginPiplineMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E58);
		}
		static ::UnityEngine::ComputeShader** StaticGet_GpuParticleCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E60);
		}
		static ::UnityEngine::Transform** StaticGet_s_PointLightsRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E68);
		}
		static ::UnityEngine::Mesh** StaticGet_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E70);
		}
		static ::UnityEngine::Transform** StaticGet_s_EnviromentSystemRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E78);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_keyword_AdjRefHSV()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E80);
		}
		static ::UnityEngine::Material** StaticGet__OldReplacedGbufferLightingMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x6E88);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet__ENABLE_AO_REFLECTION()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E30);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet__ES_SIMP_RTX()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E34);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_CRP_FOG_V2()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E38);
		}
		static ::System::Int32* StaticGet_EnvShaderQualityLowID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E3C);
		}
		static ::System::Int32* StaticGet_ESGradientAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E40);
		}
		static ::System::Boolean* StaticGet_configLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E44);
		}
		static ::System::Boolean* StaticGet_s_UnloadLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E45);
		}
		static ::System::Boolean* StaticGet_UseSDRReflectionCube()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E46);
		}
		static ::System::Boolean* StaticGet__IsLoadingInitFinish()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E47);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet__MATERIAL_LUT_DEBUG()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E48);
		}
		static ::System::Boolean* StaticGet_s_GlobalSwitchEnableOPT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E4C);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__IsPatchUseEnvSystemV2()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E4D);
		}
		static ::System::Boolean* StaticGet__IsLoadingGbufferLightingMat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E4F);
		}
		static ::System::Int32* StaticGet_ESWispTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E50);
		}
		static ::System::Int32* StaticGet_IndootShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E54);
		}
		static ::System::Int32* StaticGet_ESRandom01ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E58);
		}
		static ::System::Int32* StaticGet_ESGradientColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E5C);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_ADJUST_REFLECTION_HSV()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E60);
		}
		static ::System::Int32* StaticGet_ESPlayerPosID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E64);
		}
		static ::System::Int32* StaticGet_ESMultiWindowCharacterLightDirID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E68);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_CRP_FOG_ATMO()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1E6C);
		}
		// static const ::System::String* ENV_SYS_PREFAB_PATH; // 0x0
		// static const ::System::String* ENV_CONFIG_PATH; // 0x0
		::UnityEngine::Light* IndoorCharaLight; // 0x18
		::UnityEngine::ComputeShader* m_GpuParticleCS; // 0x20
		::UnityEngine::Mesh* m_GpuParticleMesh; // 0x28
		::UnityEngine::Mesh* m_QuadMesh; // 0x30
		::System::Boolean IsSkipInit; // 0x38
		::System::String* EnableCloudLayerKeyWord; // 0x40
		::System::String* EnableParanomaWord; // 0x48
		::System::Boolean UseLevelMainLightRoateOffset; // 0x50
		::Class_1_2404B906981762CA* _ProfileStack; // 0x58
		::Il2CppArray<::UnityEngine::Renderer*>* BakedRenderers; // 0x60
		::Il2CppArray<::UnityEngine::ReflectionProbe*>* BakedReflectionProbes; // 0x68
		::UnityEngine::Vector4 TaskSetMainLightDirVal; // 0x70
		::UnityEngine::Vector4 TimelineKMainLightDirVal; // 0x80
		::System::Int32 CurrentPriority; // 0x90
		::System::String* CurrentProfileName; // 0x98
		::System::Boolean IsTaskSyncShadowAndSceneLight; // 0xA0
		::UnityEngine::Vector4 UIainLightDirVal; // 0xA4
		::System::Int32 SetMainLightOpIndex; // 0xB4
		::UnityEngine::Vector3 MainLightRotateOffset; // 0xB8
		::System::UInt32 MainLightBoolBitSwitch; // 0xC4
		::System::Single TargetGolbalMainIntensity; // 0xC8
		::System::String* CurrentSceneProfilePath; // 0xD0
		::System::Boolean _envlocalOverridePosition; // 0xD8
		::UnityEngine::Vector3 _overridePosition; // 0xDC
		::System::Boolean _IsInitialized; // 0xE8
		::System::Boolean _IsInAsyncInitEnviromentSystem; // 0xE9
		::System::Int32 _TransitionHandleCount; // 0xEC
		::System::Int32 _CurrentTransitionHandle; // 0xF0
		::System::Int32 _LightQualityVersion; // 0xF4
		::RPG::Client::FrameCaptureManager* _FrameCaptureManager; // 0xF8
		::RPG::Client::PPEffectManager* _PPEffectManager; // 0x100
		::Class_1_A392F01C781E3108* _MaterialEffectManager; // 0x108
		::Class_1_990E4282A5D5942A* _CapsuleAOManager; // 0x110
		::Class_1_24B10CB562F3162A* _EnvLocalVolumeManager; // 0x118
		::System::Boolean _MonsterLightDirSyncWithCamera; // 0x120
		::UnityEngine::Object* EnvAsset; // 0x128
		::System::Boolean DebugMode; // 0x130
		::UnityEngine::Light* _SceneLight; // 0x138
		::RPG::CustomRP::CustomAdditionalLightData* _SceneLightAdditionalData; // 0x140
		::UnityEngine::Light* _SceneShadowLight; // 0x148
		::RPG::CustomRP::CustomAdditionalLightData* _ShadowLightAdditionData; // 0x150
		::UnityEngine::Light* _CharaLight; // 0x158
		::RPG::CustomRP::CustomAdditionalLightData* _CharaLightAdditionData; // 0x160
		::UnityEngine::Transform* _SkyBox; // 0x168
		::UnityEngine::Transform* _FakeSkyBox; // 0x170
		::UnityEngine::Renderer* _Atmosphere; // 0x178
		::UnityEngine::Renderer* _CloudLayer; // 0x180
		::UnityEngine::Renderer* _Celestial; // 0x188
		::RPG::CustomRP::VolumetricFogController* _VFController; // 0x190
		::Class_2_D865BB63FE6CF6EB_1* _EnvLocalAtmosphereObj; // 0x198
		::UnityEngine::Transform* _UAtmosphereScatteringSkyBox; // 0x1A0
		::UnityEngine::Transform* _AtmosphereScatteringSkyBox; // 0x1A8
		::UnityEngine::Renderer* _AtmosphereScattering; // 0x1B0
		::UnityEngine::Renderer* _UAtmosphereScattering; // 0x1B8
		::UnityEngine::MaterialPropertyBlock* _AtmosphereScatteringMPB; // 0x1C0
		::UnityEngine::MaterialPropertyBlock* _UAtmosphereScatteringMPB; // 0x1C8
		::UnityEngine::Transform* _AtmophereScatteringSun; // 0x1D0
		::UnityEngine::Transform* _AtmophereScatteringMoon; // 0x1D8
		::UnityEngine::Vector4 RecordMonsterLightDirVal; // 0x1E0
		::UnityEngine::Vector4 RecordMainLightDirVal; // 0x1F0
		::System::Int32 RecordPriority; // 0x200
		::UnityEngine::Vector3 MainLightLevelRoateOffset; // 0x204
		::System::Boolean StartGlobalMainIntensity; // 0x210
		::System::Single GlobalMainIntensityFadeDuration; // 0x214
		::Il2CppArray<::System::Int32>* tempIndices; // 0x218
		::System::Int32 cur_keyword_CRP_FOG_ATMO; // 0x220
		::System::Int32 cur_keyword_CRP_FOG_V2; // 0x224
		::System::Int32 cur_Fog_KeywordID; // 0x228
		::System::Int32 cur_ARHSV_KeywordID; // 0x22C
		::System::String* cur_GbufferLighingMatPath; // 0x230
		::System::String* cur_GbufferLighingMatName; // 0x238
		::System::String* cur_ReplacedGbufferLightingMatPath; // 0x240

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void LogFilter(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOGFILTER_OFFSET))(a1);
		}

		static ::System::Void AdjustTempTextureSize(::System::Int32 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ADJUSTTEMPTEXTURESIZE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::EnvironmentSystem* get_Instance()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::EnvironmentSystem* a1)
		{
			return ((::System::Void(*)(::RPG::Client::EnvironmentSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SET_INSTANCE_OFFSET))(a1);
		}

		static ::System::String* GetCurrentActiveProfileName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETCURRENTACTIVEPROFILENAME_OFFSET))();
		}

		static ::System::Void NotifyEnvChange(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_NOTIFYENVCHANGE_OFFSET))(a1);
		}

		static ::System::String* ExtractFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_EXTRACTFILENAME_OFFSET))(a1);
		}

		static ::RPG::Client::EnvironmentSystem* GetInstanceBoth()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETINSTANCEBOTH_OFFSET))();
		}

		::System::Int32 Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_VERSION_OFFSET))(this);
		}

		::SceneLightVolume* GetActiveSceneLightVolume()
		{
			return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETACTIVESCENELIGHTVOLUME_OFFSET))(this);
		}

		::System::Void AddDynamicBlockLight(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ADDDYNAMICBLOCKLIGHT_OFFSET))(this, a1);
		}

		::System::Void RemoveDynamicBlockLight(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_REMOVEDYNAMICBLOCKLIGHT_OFFSET))(this, a1);
		}

		::System::Void UpdateLightManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_UPDATELIGHTMANAGER_OFFSET))(this);
		}

		static ::System::Boolean IsPatchUseEnvSystemV2()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ISPATCHUSEENVSYSTEMV2_OFFSET))();
		}

		static ::System::Void InitShaderKeyWordPropertySetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITSHADERKEYWORDPROPERTYSETTING_OFFSET))();
		}

		static ::System::Void LoadBaseConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADBASECONFIG_OFFSET))();
		}

		static ::System::Void SetEnableLightPreload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLELIGHTPRELOAD_OFFSET))();
		}

		static ::RPG::Client::EnvironmentSystem* CreateEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CREATEENVIRONMENTSYSTEM_OFFSET))();
		}

		static ::System::Void ReleaseProfile(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPROFILE_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_357* LoadProfileSyncSimple(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_357*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNCSIMPLE_OFFSET))(a1);
		}

		::System::Void _ApplyPipelineAssetSettingsCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEASSETSETTINGSCOMMON_OFFSET))(this);
		}

		::System::Void _ApplyPipelineShadowSettingsCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINESHADOWSETTINGSCOMMON_OFFSET))(this);
		}

		::System::Void _ApplyPipelineQualitySettingsCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEQUALITYSETTINGSCOMMON_OFFSET))(this);
		}

		::System::Void _SetGlobalReflectionProbeCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__SETGLOBALREFLECTIONPROBECOMMON_OFFSET))(this);
		}

		::System::Void _UpdateEnviroClipsByComponentCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROCLIPSBYCOMPONENTCOMMON_OFFSET))(this);
		}

		::System::Void _UpdateEnviroLightCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROLIGHTCOMMON_OFFSET))(this);
		}

		static ::System::Void OnStageTranslate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ONSTAGETRANSLATE_OFFSET))();
		}

		::System::Void RecordMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RECORDMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void RestoreMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESTOREMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void ResetPostProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETPOSTPROCESS_OFFSET))(this);
		}

		static ::Class_0_16E4307DCC419505_357* LoadProfileSync(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_357*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNC_OFFSET))(a1);
		}

		static ::System::Boolean IsNotFullEnvSys()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ISNOTFULLENVSYS_OFFSET))();
		}

		static ::System::Void LoadGlobalResourceOnInitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADGLOBALRESOURCEONINITGAME_OFFSET))();
		}

		static ::System::Void ReleaseGlobalResourceOnUnInitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEGLOBALRESOURCEONUNINITGAME_OFFSET))();
		}

		static ::System::Void TryOnlyOnceInitProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_TRYONLYONCEINITPROFILE_OFFSET))();
		}

		static ::System::Void ForceUpdateShadowCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEUPDATESHADOWCACHE_OFFSET))();
		}

		::System::Void CancelAsyncInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELASYNCINIT_OFFSET))(this);
		}

		::Class_1_24B10CB562F3162A* GetLocalVolumeManager()
		{
			return ((::Class_1_24B10CB562F3162A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETLOCALVOLUMEMANAGER_OFFSET))(this);
		}

		::System::Void ClearEnviroPatch(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARENVIROPATCH_OFFSET))(this, a1);
		}

		::RPG::Client::PPEffectManager* GetPPEffectManager()
		{
			return ((::RPG::Client::PPEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETPPEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEAR_OFFSET))(this);
		}

		::System::Void InitPerLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITPERLEVEL_OFFSET))(this);
		}

		::System::Void ClearPerLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARPERLEVEL_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_UNINIT_OFFSET))(this);
		}

		::System::Void InitEnvironmentSystem(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEM_OFFSET))(this, a1);
		}

		::System::Void SetEnableSkyBox(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESKYBOX_OFFSET))(this, a1);
		}

		::System::Void DisableEnvGPUParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVGPUPARTICLE_OFFSET))(this);
		}

		::System::Void DisableEnvParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVPARTICLE_OFFSET))(this);
		}

		::System::Void SetEnableUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLEUPDATE_OFFSET))(this, a1);
		}

		::System::Void SetEnableShadowLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESHADOWLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetEnableCharaLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLECHARALIGHT_OFFSET))(this, a1);
		}

		::System::Void SetEnableSceneLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESCENELIGHT_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LATETICK_OFFSET))(this, a1);
		}

		::RPG::Client::FrameCaptureManager* GetFrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETFRAMECAPTUREMANAGER_OFFSET))(this);
		}

		::System::Void FinishTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHTRANSITION_OFFSET))(this, a1);
		}

		::System::Boolean GetIsCurSwitchWork(::RPG::Client::MainlightSwitchType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainlightSwitchType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETISCURSWITCHWORK_OFFSET))(this, a1);
		}

		::System::Void SetMainLightSwitch(::RPG::Client::MainlightSwitchType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainlightSwitchType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETMAINLIGHTSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Void InitEnvironmentSystemAsync(::Class_0_16E4307DCC419505_357* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEMASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void ResetMainLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHT_OFFSET))(this);
		}

		::Class_1_DA5BEDF62053421B* GetEnvTransitManager()
		{
			return ((::Class_1_DA5BEDF62053421B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETENVTRANSITMANAGER_OFFSET))(this);
		}

		::Class_1_990E4282A5D5942A* GetCapsuleAOManager()
		{
			return ((::Class_1_990E4282A5D5942A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETCAPSULEAOMANAGER_OFFSET))(this);
		}

		::System::Boolean Init(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INIT_OFFSET))(this, a1);
		}

		::System::Void ForceInitPPEffectManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEINITPPEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void ResetMainLightRoatateOffet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHTROATATEOFFET_OFFSET))(this);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETISVALID_OFFSET))(this);
		}

		::Class_1_A392F01C781E3108* GetMaterialEffectManager()
		{
			return ((::Class_1_A392F01C781E3108*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETMATERIALEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void ResetLevelMainLightRoatateOffet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET))(this);
		}

		::System::Void SetMonsterLightByCameraDir(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETMONSTERLIGHTBYCAMERADIR_OFFSET))(this, a1);
		}

		::System::Void ResetActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void SetActiveProfileAsync(::Class_0_16E4307DCC419505_357* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetActiveProfile(::Class_0_16E4307DCC419505_357* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Void SetActiveProfileWithDuration(::Class_0_16E4307DCC419505_357* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEWITHDURATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetActiveProfileAsyncWithDuration(::Class_0_16E4307DCC419505_357* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNCWITHDURATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReleasePriorityWithDuration(::RPG::GameCore::EnviromentControlPriority a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITYWITHDURATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETFLOATPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVectorPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETVECTORPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBoolPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETBOOLPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ApplyPatchToActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_APPLYPATCHTOACTIVEPROFILE_OFFSET))(this);
		}

		::System::Int32 ReleasePriority(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITY_OFFSET))(this, a1, a2);
		}

		::System::Void CancelTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELTRANSITION_OFFSET))(this, a1);
		}

		::System::Void SetTransitionRate(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONRATE_OFFSET))(this, a1, a2);
		}

		::System::Int32 SetTransitionTargetProfile(::Class_0_16E4307DCC419505_357* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_357*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONTARGETPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasPriority(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_HASPRIORITY_OFFSET))(this, a1);
		}

		::System::Void FinishAllTransitions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHALLTRANSITIONS_OFFSET))(this);
		}

		::System::Void InitProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITPROFILE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_357* get_ActiveProfile()
		{
			return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GET_ACTIVEPROFILE_OFFSET))(this);
		}

		::System::Int32 GetLightQualityVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETLIGHTQUALITYVERSION_OFFSET))(this);
		}

		::System::Void SetStageVersion(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETSTAGEVERSION_OFFSET))(this, a1);
		}

		::System::Void GetData(::UnityEngine::Rendering::AmbientVolumneData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETDATA_OFFSET))(this, a1);
		}

		::System::Void Set(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SET_OFFSET))(this, a1);
		}

		::System::Void Render(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RENDER_OFFSET))(this, a1, a2);
		}

		::System::Void SetEnvLocalVolumeOverridePosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENVLOCALVOLUMEOVERRIDEPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean TryGetSEnvLocalVolumeOverridePosition(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_TRYGETSENVLOCALVOLUMEOVERRIDEPOSITION_OFFSET))(this, a1);
		}

		::System::Void ClearLocalVolumeOverridePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARLOCALVOLUMEOVERRIDEPOSITION_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_357* GetTODProfile()
		{
			return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETTODPROFILE_OFFSET))(this);
		}

		static ::System::Void GetProfileAssets(::EnviromentSystem::EnviromentProfile* a1, ::Il2CppArray<::System::String*>*& a2, ::Il2CppArray<::System::Type*>*& a3)
		{
			return ((::System::Void(*)(::EnviromentSystem::EnviromentProfile*, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETPROFILEASSETS_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetGBufferLightingMatName(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETGBUFFERLIGHTINGMATNAME_OFFSET))(a1);
		}

		static ::System::String* _GetMaterialDebugInfo(::UnityEngine::Material* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__GETMATERIALDEBUGINFO_OFFSET))(a1);
		}

		static ::System::Void _LogGBufferLightingMatDebug(::System::String* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__LOGGBUFFERLIGHTINGMATDEBUG_OFFSET))(a1, a2);
		}

		::System::Void _UpdateGBufferLightingMatByKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEGBUFFERLIGHTINGMATBYKEYWORD_OFFSET))(this);
		}

		static ::System::Void _CaptureOriginDeferLightingMatAndSubscribe(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__CAPTUREORIGINDEFERLIGHTINGMATANDSUBSCRIBE_OFFSET))(a1);
		}

		static ::System::Void _RestoreDeferLightingMaterialOnDispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__RESTOREDEFERLIGHTINGMATERIALONDISPOSE_OFFSET))();
		}
	};
}
