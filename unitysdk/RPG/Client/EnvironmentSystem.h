#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/Client/MainlightSwitchType.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_299;
class Class_1_24B10CB562F3162A;
class Class_1_303D5A33D1401D59;
class Class_1_990E4282A5D5942A;
class Class_1_A392F01C781E3108;
class Class_1_A54F56057EAC4982;
class Class_1_DA5BEDF62053421B;
class Class_2_D865BB63FE6CF6EB_1;
class SceneLightVolume;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class PPEffectManager; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::CustomRP { class CustomAdditionalCameraData; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace RPG::CustomRP { class VolumetricFogController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_ENVIRONMENTSYSTEM_ADDDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0xA292F90)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ADJUSTTEMPTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA292770)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_APPLYPATCHTOACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xA2952B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELASYNCINIT_OFFSET UNITYSDK_OFFSET(0xA294410)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELTRANSITION_OFFSET UNITYSDK_OFFSET(0xA295350)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARENVIROPATCH_OFFSET UNITYSDK_OFFSET(0xA294500)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARPERLEVEL_OFFSET UNITYSDK_OFFSET(0xA294620)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2945A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CREATEENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA2934C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVGPUPARTICLE_OFFSET UNITYSDK_OFFSET(0xA294740)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVPARTICLE_OFFSET UNITYSDK_OFFSET(0xA294780)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_EXTRACTFILENAME_OFFSET UNITYSDK_OFFSET(0xA292AA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHALLTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA2954B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHTRANSITION_OFFSET UNITYSDK_OFFSET(0xA294A00)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEINITPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0xA294C60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEUPDATESHADOWCACHE_OFFSET UNITYSDK_OFFSET(0xA2943C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETACTIVESCENELIGHTVOLUME_OFFSET UNITYSDK_OFFSET(0xA292EA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETCAPSULEAOMANAGER_OFFSET UNITYSDK_OFFSET(0xA294BC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETCURRENTACTIVEPROFILENAME_OFFSET UNITYSDK_OFFSET(0xA292960)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETDATA_OFFSET UNITYSDK_OFFSET(0xA2955F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETENVTRANSITMANAGER_OFFSET UNITYSDK_OFFSET(0xA294B80)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETFRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0xA2949C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETINSTANCEBOTH_OFFSET UNITYSDK_OFFSET(0xA292C10)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETISCURSWITCHWORK_OFFSET UNITYSDK_OFFSET(0xA294A50)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETISVALID_OFFSET UNITYSDK_OFFSET(0xA294D60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETLIGHTQUALITYVERSION_OFFSET UNITYSDK_OFFSET(0xA295540)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETLOCALVOLUMEMANAGER_OFFSET UNITYSDK_OFFSET(0xA294450)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETMATERIALEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0xA294DA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0xA294550)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETPROFILEASSETS_OFFSET UNITYSDK_OFFSET(0xA295720)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETTODPROFILE_OFFSET UNITYSDK_OFFSET(0xA2956E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GET_ACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xA295530)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA2928A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_HASPRIORITY_OFFSET UNITYSDK_OFFSET(0xA295460)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEMASYNC_OFFSET UNITYSDK_OFFSET(0xA294AF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA2946A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITPERLEVEL_OFFSET UNITYSDK_OFFSET(0xA2945E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITPROFILE_OFFSET UNITYSDK_OFFSET(0xA2954F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITSHADERKEYWORDPROPERTYSETTING_OFFSET UNITYSDK_OFFSET(0xA2932C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xA294C10)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ISNOTFULLENVSYS_OFFSET UNITYSDK_OFFSET(0xA294060)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ISPATCHUSEENVSYSTEMV2_OFFSET UNITYSDK_OFFSET(0xA293190)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LATETICK_OFFSET UNITYSDK_OFFSET(0xA294960)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADBASECONFIG_OFFSET UNITYSDK_OFFSET(0xA293320)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADGLOBALRESOURCEONINITGAME_OFFSET UNITYSDK_OFFSET(0xA2940C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNCSIMPLE_OFFSET UNITYSDK_OFFSET(0xA2939D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNC_OFFSET UNITYSDK_OFFSET(0xA293DC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOGFILTER_OFFSET UNITYSDK_OFFSET(0xA292620)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_NOTIFYENVCHANGE_OFFSET UNITYSDK_OFFSET(0xA292B90)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ONSTAGETRANSLATE_OFFSET UNITYSDK_OFFSET(0xA293C70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RECORDMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xA293CB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEGLOBALRESOURCEONUNINITGAME_OFFSET UNITYSDK_OFFSET(0xA2942D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITYWITHDURATION_OFFSET UNITYSDK_OFFSET(0xA2950F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITY_OFFSET UNITYSDK_OFFSET(0xA2952F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPROFILE_OFFSET UNITYSDK_OFFSET(0xA2938A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_REMOVEDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0xA293090)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RENDER_OFFSET UNITYSDK_OFFSET(0xA295690)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xA294E80)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0xA294DF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0xA294D20)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xA294B40)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xA293D80)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESTOREMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xA293CF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNCWITHDURATION_OFFSET UNITYSDK_OFFSET(0xA295030)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNC_OFFSET UNITYSDK_OFFSET(0xA294EC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEWITHDURATION_OFFSET UNITYSDK_OFFSET(0xA294F70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xA294F20)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETBOOLPATCH_OFFSET UNITYSDK_OFFSET(0xA295250)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLECHARALIGHT_OFFSET UNITYSDK_OFFSET(0xA294860)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESCENELIGHT_OFFSET UNITYSDK_OFFSET(0xA2948B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESHADOWLIGHT_OFFSET UNITYSDK_OFFSET(0xA294810)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESKYBOX_OFFSET UNITYSDK_OFFSET(0xA2946F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xA2947C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLE_OFFSET UNITYSDK_OFFSET(0xA293D30)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETFLOATPATCH_OFFSET UNITYSDK_OFFSET(0xA295190)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETMAINLIGHTSWITCH_OFFSET UNITYSDK_OFFSET(0xA294AA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETMONSTERLIGHTBYCAMERADIR_OFFSET UNITYSDK_OFFSET(0xA294E30)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETSTAGEVERSION_OFFSET UNITYSDK_OFFSET(0xA295590)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONRATE_OFFSET UNITYSDK_OFFSET(0xA2953A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONTARGETPROFILE_OFFSET UNITYSDK_OFFSET(0xA295400)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETVECTORPATCH_OFFSET UNITYSDK_OFFSET(0xA2951F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA2928D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SET_OFFSET UNITYSDK_OFFSET(0xA295640)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0xA294900)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_TRYONLYONCEINITPROFILE_OFFSET UNITYSDK_OFFSET(0xA294380)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_UNINIT_OFFSET UNITYSDK_OFFSET(0xA294660)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_VERSION_OFFSET UNITYSDK_OFFSET(0xA292E30)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEASSETSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0xA293AF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEQUALITYSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0xA293B70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINESHADOWSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0xA293B30)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2957C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA295790)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__SETGLOBALREFLECTIONPROBECOMMON_OFFSET UNITYSDK_OFFSET(0xA293BB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROCLIPSBYCOMPONENTCOMMON_OFFSET UNITYSDK_OFFSET(0xA293BF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROLIGHTCOMMON_OFFSET UNITYSDK_OFFSET(0xA293C30)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystem_TypeDefinitionIndex = 64318;

	class EnvironmentSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_GpuParticleMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1EF0);
		}
		static ::UnityEngine::Camera** StaticGet_s_Camera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1EF8);
		}
		static ::RPG::Client::EnvironmentSystem** StaticGet_instance()
		{
			return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F00);
		}
		static ::UnityEngine::Transform** StaticGet_s_RefProbesSceneRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F08);
		}
		static ::RPG::CustomRP::CustomAdditionalCameraData** StaticGet_s_CameraData()
		{
			return (::RPG::CustomRP::CustomAdditionalCameraData**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F10);
		}
		static ::UnityEngine::Transform** StaticGet_s_EnviromentSystemRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F18);
		}
		static ::UnityEngine::Transform** StaticGet_s_PointLightsRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F20);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEnvironmentSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F28);
		}
		static ::UnityEngine::Transform** StaticGet_s_Special_GpuParticleStencilClear()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F30);
		}
		static ::UnityEngine::Transform** StaticGet_s_GpuParticleRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F38);
		}
		static ::UnityEngine::Mesh** StaticGet_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F40);
		}
		static ::System::String** StaticGet_lastLog()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F48);
		}
		static ::UnityEngine::Transform** StaticGet_s_ParticleRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F50);
		}
		static ::UnityEngine::ComputeShader** StaticGet_GpuParticleCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F58);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEnvironmentSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1F60);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet__MATERIAL_LUT_DEBUG()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2410);
		}
		static ::System::Int32* StaticGet_ESPlayerPosID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2414);
		}
		static ::System::Int32* StaticGet_ESGradientAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2418);
		}
		static ::System::Int32* StaticGet_ESMultiWindowCharacterLightDirID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x241C);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet__ENABLE_AO_REFLECTION()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2420);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_ADJUST_REFLECTION_HSV()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2424);
		}
		static ::System::Int32* StaticGet_IndootShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2428);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_CRP_FOG_V2()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x242C);
		}
		static ::System::Int32* StaticGet_ESRandom01ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2430);
		}
		static ::System::Int32* StaticGet_ESWispTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2434);
		}
		static ::System::Boolean* StaticGet_s_UnloadLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2438);
		}
		static ::System::Boolean* StaticGet_configLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2439);
		}
		static ::System::Int32* StaticGet_EnvShaderQualityLowID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x243C);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__IsPatchUseEnvSystemV2()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2440);
		}
		static ::System::Boolean* StaticGet_UseSDRReflectionCube()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2442);
		}
		static ::System::Boolean* StaticGet__IsLoadingInitFinish()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2443);
		}
		static ::System::Int32* StaticGet_ESGradientColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2444);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_CRP_FOG_ATMO()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x2448);
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
		::Class_1_A54F56057EAC4982* _ProfileStack; // 0x58
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
		::System::Boolean _IsInitialized; // 0xD8
		::System::Boolean _IsInAsyncInitEnviromentSystem; // 0xD9
		::System::Int32 _TransitionHandleCount; // 0xDC
		::System::Int32 _CurrentTransitionHandle; // 0xE0
		::System::Int32 _LightQualityVersion; // 0xE4
		::RPG::Client::FrameCaptureManager* _FrameCaptureManager; // 0xE8
		::RPG::Client::PPEffectManager* _PPEffectManager; // 0xF0
		::Class_1_A392F01C781E3108* _MaterialEffectManager; // 0xF8
		::Class_1_990E4282A5D5942A* _CapsuleAOManager; // 0x100
		::Class_1_24B10CB562F3162A* _EnvLocalVolumeManager; // 0x108
		::System::Boolean _MonsterLightDirSyncWithCamera; // 0x110
		::UnityEngine::Object* EnvAsset; // 0x118
		::System::Boolean DebugMode; // 0x120
		::UnityEngine::Light* _SceneLight; // 0x128
		::RPG::CustomRP::CustomAdditionalLightData* _SceneLightAdditionalData; // 0x130
		::UnityEngine::Light* _SceneShadowLight; // 0x138
		::RPG::CustomRP::CustomAdditionalLightData* _ShadowLightAdditionData; // 0x140
		::UnityEngine::Light* _CharaLight; // 0x148
		::RPG::CustomRP::CustomAdditionalLightData* _CharaLightAdditionData; // 0x150
		::UnityEngine::Transform* _SkyBox; // 0x158
		::UnityEngine::Transform* _FakeSkyBox; // 0x160
		::UnityEngine::Renderer* _Atmosphere; // 0x168
		::UnityEngine::Renderer* _CloudLayer; // 0x170
		::UnityEngine::Renderer* _Celestial; // 0x178
		::RPG::CustomRP::VolumetricFogController* _VFController; // 0x180
		::Class_2_D865BB63FE6CF6EB_1* _EnvLocalAtmosphereObj; // 0x188
		::UnityEngine::Transform* _UAtmosphereScatteringSkyBox; // 0x190
		::UnityEngine::Transform* _AtmosphereScatteringSkyBox; // 0x198
		::UnityEngine::Renderer* _AtmosphereScattering; // 0x1A0
		::UnityEngine::Renderer* _UAtmosphereScattering; // 0x1A8
		::UnityEngine::MaterialPropertyBlock* _AtmosphereScatteringMPB; // 0x1B0
		::UnityEngine::MaterialPropertyBlock* _UAtmosphereScatteringMPB; // 0x1B8
		::UnityEngine::Transform* _AtmophereScatteringSun; // 0x1C0
		::UnityEngine::Transform* _AtmophereScatteringMoon; // 0x1C8
		::UnityEngine::Vector4 RecordMonsterLightDirVal; // 0x1D0
		::UnityEngine::Vector4 RecordMainLightDirVal; // 0x1E0
		::System::Int32 RecordPriority; // 0x1F0
		::UnityEngine::Vector3 MainLightLevelRoateOffset; // 0x1F4
		::System::Boolean StartGlobalMainIntensity; // 0x200
		::System::Single GlobalMainIntensityFadeDuration; // 0x204

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void LogFilter(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOGFILTER_OFFSET))(log);
		}

		static ::System::Void AdjustTempTextureSize(::System::Int32 w, ::System::Int32 h, ::System::Int32& ow, ::System::Int32& oh)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ADJUSTTEMPTEXTURESIZE_OFFSET))(w, h, ow, oh);
		}

		static ::RPG::Client::EnvironmentSystem* get_Instance()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::EnvironmentSystem* value)
		{
			return ((::System::Void(*)(::RPG::Client::EnvironmentSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SET_INSTANCE_OFFSET))(value);
		}

		static ::System::String* GetCurrentActiveProfileName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETCURRENTACTIVEPROFILENAME_OFFSET))();
		}

		static ::System::Void NotifyEnvChange(::System::String* newProfilName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_NOTIFYENVCHANGE_OFFSET))(newProfilName);
		}

		static ::System::String* ExtractFileName(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_EXTRACTFILENAME_OFFSET))(input);
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

		::System::Void AddDynamicBlockLight(::Class_1_303D5A33D1401D59* dynamicBlock)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ADDDYNAMICBLOCKLIGHT_OFFSET))(this, dynamicBlock);
		}

		::System::Void RemoveDynamicBlockLight(::Class_1_303D5A33D1401D59* dynamicBlockID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_REMOVEDYNAMICBLOCKLIGHT_OFFSET))(this, dynamicBlockID);
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

		static ::RPG::Client::EnvironmentSystem* CreateEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CREATEENVIRONMENTSYSTEM_OFFSET))();
		}

		static ::System::Void ReleaseProfile(::Class_0_16E4307DCC419505_299* profile)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_299*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPROFILE_OFFSET))(profile);
		}

		static ::Class_0_16E4307DCC419505_299* LoadProfileSyncSimple(::System::String* profilePath)
		{
			return ((::Class_0_16E4307DCC419505_299*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNCSIMPLE_OFFSET))(profilePath);
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

		::System::Void SetEnable(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLE_OFFSET))(this, v);
		}

		::System::Void ResetPostProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETPOSTPROCESS_OFFSET))(this);
		}

		static ::Class_0_16E4307DCC419505_299* LoadProfileSync(::System::String* profilePath)
		{
			return ((::Class_0_16E4307DCC419505_299*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNC_OFFSET))(profilePath);
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

		::System::Void ClearEnviroPatch(::RPG::GameCore::EnviromentControlPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARENVIROPATCH_OFFSET))(this, priority);
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

		::System::Void InitEnvironmentSystem(::System::String* profilePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEM_OFFSET))(this, profilePath);
		}

		::System::Void SetEnableSkyBox(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESKYBOX_OFFSET))(this, enable);
		}

		::System::Void DisableEnvGPUParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVGPUPARTICLE_OFFSET))(this);
		}

		::System::Void DisableEnvParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVPARTICLE_OFFSET))(this);
		}

		::System::Void SetEnableUpdate(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLEUPDATE_OFFSET))(this, enable);
		}

		::System::Void SetEnableShadowLight(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESHADOWLIGHT_OFFSET))(this, enable);
		}

		::System::Void SetEnableCharaLight(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLECHARALIGHT_OFFSET))(this, enable);
		}

		::System::Void SetEnableSceneLight(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESCENELIGHT_OFFSET))(this, enable);
		}

		::System::Void Tick(::System::Single elapsedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_TICK_OFFSET))(this, elapsedTime);
		}

		::System::Void LateTick(::System::Single elapsedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LATETICK_OFFSET))(this, elapsedTime);
		}

		::RPG::Client::FrameCaptureManager* GetFrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETFRAMECAPTUREMANAGER_OFFSET))(this);
		}

		::System::Void FinishTransition(::System::Int32 handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHTRANSITION_OFFSET))(this, handle);
		}

		::System::Boolean GetIsCurSwitchWork(::RPG::Client::MainlightSwitchType pType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainlightSwitchType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETISCURSWITCHWORK_OFFSET))(this, pType);
		}

		::System::Void SetMainLightSwitch(::RPG::Client::MainlightSwitchType pType, ::System::Boolean bIsOn)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainlightSwitchType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETMAINLIGHTSWITCH_OFFSET))(this, pType, bIsOn);
		}

		::System::Void InitEnvironmentSystemAsync(::Class_0_16E4307DCC419505_299* asyncProfile, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEMASYNC_OFFSET))(this, asyncProfile, onFinish);
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

		::System::Boolean Init(::System::Boolean force)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INIT_OFFSET))(this, force);
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

		::System::Void SetMonsterLightByCameraDir(::System::Boolean isSync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETMONSTERLIGHTBYCAMERADIR_OFFSET))(this, isSync);
		}

		::System::Void ResetActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void SetActiveProfileAsync(::Class_0_16E4307DCC419505_299* targetProfile, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onFinish, ::RPG::GameCore::EnviromentControlPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNC_OFFSET))(this, targetProfile, onFinish, priority);
		}

		::System::Void SetActiveProfile(::Class_0_16E4307DCC419505_299* targetProfile, ::RPG::GameCore::EnviromentControlPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILE_OFFSET))(this, targetProfile, priority);
		}

		::System::Void SetActiveProfileWithDuration(::Class_0_16E4307DCC419505_299* targetProfile, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onFinish, ::RPG::GameCore::EnviromentControlPriority priority, ::System::Single du)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEWITHDURATION_OFFSET))(this, targetProfile, onFinish, priority, du);
		}

		::System::Void SetActiveProfileAsyncWithDuration(::Class_0_16E4307DCC419505_299* targetProfile, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onFinish, ::RPG::GameCore::EnviromentControlPriority priority, ::System::Single du)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNCWITHDURATION_OFFSET))(this, targetProfile, onFinish, priority, du);
		}

		::System::Void ReleasePriorityWithDuration(::RPG::GameCore::EnviromentControlPriority priority, ::System::Single du)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITYWITHDURATION_OFFSET))(this, priority, du);
		}

		::System::Void SetFloatPatch(::EnviromentSystem::EnviromentPropertiesID id, ::System::Single value, ::RPG::GameCore::EnviromentControlPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETFLOATPATCH_OFFSET))(this, id, value, priority);
		}

		::System::Void SetVectorPatch(::EnviromentSystem::EnviromentPropertiesID id, ::UnityEngine::Vector4 value, ::RPG::GameCore::EnviromentControlPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETVECTORPATCH_OFFSET))(this, id, value, priority);
		}

		::System::Void SetBoolPatch(::EnviromentSystem::EnviromentPropertiesID id, ::System::Boolean value, ::RPG::GameCore::EnviromentControlPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETBOOLPATCH_OFFSET))(this, id, value, priority);
		}

		::System::Void ApplyPatchToActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_APPLYPATCHTOACTIVEPROFILE_OFFSET))(this);
		}

		::System::Int32 ReleasePriority(::RPG::GameCore::EnviromentControlPriority prirorty, ::System::Boolean skipTransition)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITY_OFFSET))(this, prirorty, skipTransition);
		}

		::System::Void CancelTransition(::System::Int32 handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELTRANSITION_OFFSET))(this, handle);
		}

		::System::Void SetTransitionRate(::System::Single t, ::System::Int32 handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONRATE_OFFSET))(this, t, handle);
		}

		::System::Int32 SetTransitionTargetProfile(::Class_0_16E4307DCC419505_299* targetProfile, ::RPG::GameCore::EnviromentControlPriority priority)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_299*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONTARGETPROFILE_OFFSET))(this, targetProfile, priority);
		}

		::System::Boolean HasPriority(::RPG::GameCore::EnviromentControlPriority prirorty)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_HASPRIORITY_OFFSET))(this, prirorty);
		}

		::System::Void FinishAllTransitions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHALLTRANSITIONS_OFFSET))(this);
		}

		::System::Void InitProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITPROFILE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_299* get_ActiveProfile()
		{
			return ((::Class_0_16E4307DCC419505_299*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GET_ACTIVEPROFILE_OFFSET))(this);
		}

		::System::Int32 GetLightQualityVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETLIGHTQUALITYVERSION_OFFSET))(this);
		}

		::System::Void SetStageVersion(::System::Int32 stageVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETSTAGEVERSION_OFFSET))(this, stageVersion);
		}

		::System::Void GetData(::UnityEngine::Rendering::AmbientVolumneData& avd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETDATA_OFFSET))(this, avd);
		}

		::System::Void Set(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SET_OFFSET))(this, cmd);
		}

		::System::Void Render(::RPG::CustomRP::GameCameraType cameraType, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RENDER_OFFSET))(this, cameraType, cmd);
		}

		::Class_0_16E4307DCC419505_299* GetTODProfile()
		{
			return ((::Class_0_16E4307DCC419505_299*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETTODPROFILE_OFFSET))(this);
		}

		static ::System::Void GetProfileAssets(::EnviromentSystem::EnviromentProfile* profile, ::Il2CppArray<::System::String*>*& assetPaths, ::Il2CppArray<::System::Type*>*& assetTypes)
		{
			return ((::System::Void(*)(::EnviromentSystem::EnviromentProfile*, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETPROFILEASSETS_OFFSET))(profile, assetPaths, assetTypes);
		}
	};
}
