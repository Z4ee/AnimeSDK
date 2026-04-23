#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/Client/PauseMainCameraUpdateReason.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_30B5FE4AA7ABAB8C;
class Class_1_3DB4F2939925691A;
class Class_1_59A9DE327C950886;
class Class_1_5B0B78CFE6F65A6A;
class Class_1_7AAD789E4D195BDB;
class Class_1_7C0A6A60765B387C;
class Class_1_CED0702510CFFDAF;
class Class_2_064E3E42E5FDBEE0;
class Class_2_5D178EC982C80153;
class Class_2_AD7DDABF71A10F42_2;
class Class_2_CD8BE261AAA192C9;
namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class AdventureCameraLookAtConfigTemplate; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigBase; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class CameraNormalConfigTemplateList; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class VCameraFreelook3rdConfigTemplate; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_PIPELINECAMERAENGINE_ABORTCLOSEUPSHOTTIMELINE_OFFSET UNITYSDK_OFFSET(0xAC99500)
#define RPG_CLIENT_PIPELINECAMERAENGINE_CLEARCLOSEUPSHOT_OFFSET UNITYSDK_OFFSET(0xAC976E0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_CLEARORTHOGRAPHICLOCK_OFFSET UNITYSDK_OFFSET(0xAC972D0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSEOVERRIDECONFIGS_OFFSET UNITYSDK_OFFSET(0xAC99250)
#define RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSEPIPELINELOOKDEV_OFFSET UNITYSDK_OFFSET(0xAC941E0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC97330)
#define RPG_CLIENT_PIPELINECAMERAENGINE_FORCEREFRESHPIPELINEMODULE_OFFSET UNITYSDK_OFFSET(0xAC985B0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETCAMERADATA_OFFSET UNITYSDK_OFFSET(0xAC715F0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETCAMERAMODULEFIGHTMODULE_OFFSET UNITYSDK_OFFSET(0xAC96B50)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETFREELOOK3RDMODULECHANGEBLEND_OFFSET UNITYSDK_OFFSET(0xAC97220)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETINHERITMONODELEGATEACTIONS_OFFSET UNITYSDK_OFFSET(0xAC992B0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETREALMODULECONFIGBYTYPE_OFFSET UNITYSDK_OFFSET(0xAC96990)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETVCAMCONTROLMODULE_OFFSET UNITYSDK_OFFSET(0xAC97970)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ADVENTURECAMERALOOKATTEMPLATE_OFFSET UNITYSDK_OFFSET(0xAC9A0B0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0xAC9A170)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_CRPVIRTUALCAMERATEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xAC9A110)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_CURRENTCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xAC9A1E0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_GLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xAC9A150)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_INITFOV_OFFSET UNITYSDK_OFFSET(0xAC99FF0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xAC9A180)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISFIRSTREFRESHPIPELINEAFTERINIT_OFFSET UNITYSDK_OFFSET(0xAC9A190)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISFREELOOK3RDLIVE_OFFSET UNITYSDK_OFFSET(0xAC9A210)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC9A290)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xAC77160)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_LOADEDMODULECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xAC9A2A0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_MODULECONFIG_OFFSET UNITYSDK_OFFSET(0xAC9A160)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_SHAKESOURCEMGR_OFFSET UNITYSDK_OFFSET(0xAC9A130)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_SKIPONEFRAME_OFFSET UNITYSDK_OFFSET(0xAC99FB0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_TEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xAC9A070)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_UPDATECOUNT_OFFSET UNITYSDK_OFFSET(0xAC9A1B0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_USECINEMACHINEZOOM_OFFSET UNITYSDK_OFFSET(0xAC9A1C0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET UNITYSDK_OFFSET(0xAC9A090)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERAFREELOOK3RDTEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xAC9A0F0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERATEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xAC9A0D0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMINSTANCEPOOL_OFFSET UNITYSDK_OFFSET(0xAC99FD0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_HASOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xAC96920)
#define RPG_CLIENT_PIPELINECAMERAENGINE_INITPIPELINELOOKDEV_OFFSET UNITYSDK_OFFSET(0xAC94300)
#define RPG_CLIENT_PIPELINECAMERAENGINE_INITPIPELINE_OFFSET UNITYSDK_OFFSET(0xAC94BA0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_MANUALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC98FC0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_ONLOGICUPDATE_OFFSET UNITYSDK_OFFSET(0xAC963D0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_OVERRIDEMODULECONFIG_OFFSET UNITYSDK_OFFSET(0xAC96A20)
#define RPG_CLIENT_PIPELINECAMERAENGINE_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0xAC99030)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHALL_OFFSET UNITYSDK_OFFSET(0xAC96330)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHHIDEENTITYMODULE_OFFSET UNITYSDK_OFFSET(0xAC98200)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHPIPELINELOOKDEV_OFFSET UNITYSDK_OFFSET(0xAC94AB0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHPIPELINEMODULE_OFFSET UNITYSDK_OFFSET(0xAC982E0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REGISTERMONODELEGATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC99090)
#define RPG_CLIENT_PIPELINECAMERAENGINE_RELEASEMONODELEGATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC99100)
#define RPG_CLIENT_PIPELINECAMERAENGINE_RELOADMODULECONFIG_OFFSET UNITYSDK_OFFSET(0xAC99170)
#define RPG_CLIENT_PIPELINECAMERAENGINE_RESETFREELOOK3RDMODULE_OFFSET UNITYSDK_OFFSET(0xAC97A20)
#define RPG_CLIENT_PIPELINECAMERAENGINE_RESETOVERRIDEMODULECONFIG_OFFSET UNITYSDK_OFFSET(0xAC96AF0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDFINISH_OFFSET UNITYSDK_OFFSET(0xAC97160)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPEBYCURVE_OFFSET UNITYSDK_OFFSET(0xAC96EC0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPE_1_OFFSET UNITYSDK_OFFSET(0xAC96F50)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPE_OFFSET UNITYSDK_OFFSET(0xAC96D30)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCONTROLLERAXISVALUEBYTARGETROTATION_OFFSET UNITYSDK_OFFSET(0xAC97DF0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETFREELOOKLOOKAT_OFFSET UNITYSDK_OFFSET(0xAC98090)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETINHERITMONODELEGATEACTIONS_OFFSET UNITYSDK_OFFSET(0xAC99360)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETPIPELINE_OFFSET UNITYSDK_OFFSET(0xAC94B50)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_ADVENTURECAMERALOOKATTEMPLATE_OFFSET UNITYSDK_OFFSET(0xAC9A0C0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_CRPVIRTUALCAMERATEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xAC9A120)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_ISFIRSTREFRESHPIPELINEAFTERINIT_OFFSET UNITYSDK_OFFSET(0xAC9A1A0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_SHAKESOURCEMGR_OFFSET UNITYSDK_OFFSET(0xAC9A140)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_SKIPONEFRAME_OFFSET UNITYSDK_OFFSET(0xAC99FC0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_TEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xAC9A080)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_USECINEMACHINEZOOM_OFFSET UNITYSDK_OFFSET(0xAC9A1D0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET UNITYSDK_OFFSET(0xAC9A0A0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERAFREELOOK3RDTEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xAC9A100)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERATEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xAC9A0E0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMINSTANCEPOOL_OFFSET UNITYSDK_OFFSET(0xAC99FE0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_TRYLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xAC93B10)
#define RPG_CLIENT_PIPELINECAMERAENGINE_TRYRESETCAMERAAXISIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xAC97F90)
#define RPG_CLIENT_PIPELINECAMERAENGINE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xAC93E40)
#define RPG_CLIENT_PIPELINECAMERAENGINE__BACKUPINPUTDATA_OFFSET UNITYSDK_OFFSET(0xAC98D60)
#define RPG_CLIENT_PIPELINECAMERAENGINE__CREATECAMERALOOKATTEMPLATE_OFFSET UNITYSDK_OFFSET(0xAC940B0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__CREATEVCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET UNITYSDK_OFFSET(0xAC93FA0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC9A2B0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__DOREFRESHPIPELINEMODULE_OFFSET UNITYSDK_OFFSET(0xAC98380)
#define RPG_CLIENT_PIPELINECAMERAENGINE__INSPECTBATTLEFINISHFALLBACK_OFFSET UNITYSDK_OFFSET(0xAC98710)
#define RPG_CLIENT_PIPELINECAMERAENGINE__INTERVALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC96450)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONACTIVEENTITYCHANGE_OFFSET UNITYSDK_OFFSET(0xAC99670)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONLATEUPDATEAFTERRESETTOFIGHTNORMAL_OFFSET UNITYSDK_OFFSET(0xAC98850)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONREALCAMERACHANGE_OFFSET UNITYSDK_OFFSET(0xAC99760)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONTEAMLEADERSWITCHED_OFFSET UNITYSDK_OFFSET(0xAC99700)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONWORLDSHIFTING_OFFSET UNITYSDK_OFFSET(0xAC997C0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__REGIST_OFFSET UNITYSDK_OFFSET(0xAC96220)
#define RPG_CLIENT_PIPELINECAMERAENGINE__RESETTOFIGHTNORMALMODE_OFFSET UNITYSDK_OFFSET(0xAC98650)
#define RPG_CLIENT_PIPELINECAMERAENGINE__UNREGIST_OFFSET UNITYSDK_OFFSET(0xAC975D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PipelineCameraEngine_TypeDefinitionIndex = 64254;

	class PipelineCameraEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _TryLoadConfigLog3; // 0x0
		::System::Action* EndOfLateUpdateCallback; // 0x18
		::System::Int32 _SkipOneFrame_k__BackingField; // 0x20
		::Class_1_59A9DE327C950886* _VCamInstancePool_k__BackingField; // 0x28
		::RPG::Client::CameraNormalConfigTemplateList* _TemplateConfig_k__BackingField; // 0x30
		::RPG::Client::VCameraFreelook3rdConfigTemplate* _VCameraFreelook3rdConfigChangeTemplate_k__BackingField; // 0x38
		::RPG::Client::AdventureCameraLookAtConfigTemplate* _AdventureCameraLookAtTemplate_k__BackingField; // 0x40
		::UnityEngine::Object* _VCameraTemplateAsset_k__BackingField; // 0x48
		::UnityEngine::Object* _VCameraFreelook3rdTemplateAsset_k__BackingField; // 0x50
		::UnityEngine::Object* _CRPVirtualCameraTemplateAsset_k__BackingField; // 0x58
		::Class_1_CED0702510CFFDAF* _ShakeSourceMgr_k__BackingField; // 0x60
		::System::Boolean _IsFirstRefreshPipelineAfterInit_k__BackingField; // 0x68
		::System::Boolean _UseCinemachineZoom_k__BackingField; // 0x69
		::Class_1_7AAD789E4D195BDB* CurveLoadCache; // 0x70
		::System::UInt32 PauseLateUpdateCount; // 0x78
		::System::Boolean _Initialized; // 0x7C
		::RPG::Client::PipelineCameraGlobalConfig* _GlobalConfig; // 0x80
		::RPG::Client::CameraModuleConfigCollection* _ModuleConfig; // 0x88
		::RPG::Client::CameraDataAndFlags* _CameraData; // 0x90
		::Il2CppArray<::Class_1_5B0B78CFE6F65A6A*>* _Pipeline; // 0x98
		::Cinemachine::CinemachineBrain* _CinemachineBrainRef; // 0xA0
		::Class_2_064E3E42E5FDBEE0* _CloseupShotModuleRef; // 0xA8
		::Class_2_CD8BE261AAA192C9* _MonoDelegateModuleRef; // 0xB0
		::Class_1_3DB4F2939925691A* _ModuleConfigOverride; // 0xB8
		::System::UInt32 _UpdateCount; // 0xC0
		::System::Boolean _IsLateUpdate; // 0xC4
		::System::Boolean _TriggerResetToFightNormal; // 0xC5
		::System::Boolean _HasRealCameraChangeFromLastFrame; // 0xC6
		::System::Int32 _RealCameraChangeFrame; // 0xC8
		::System::String* _LoadedModuleConfigPath; // 0xD0
		::System::Text::StringBuilder* ApmErrorLogCollect; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__CTOR_OFFSET))(this);
		}

		::System::Void TryLoadAllConfig(::System::String* moduleConfigPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_TRYLOADALLCONFIG_OFFSET))(this, moduleConfigPath);
		}

		::System::Void UnloadAllConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_UNLOADALLCONFIG_OFFSET))(this);
		}

		::System::Void DisposePipelineLookDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSEPIPELINELOOKDEV_OFFSET))(this);
		}

		::System::Void InitPipelineLookDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_INITPIPELINELOOKDEV_OFFSET))(this);
		}

		::System::Void RefreshPipelineLookDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHPIPELINELOOKDEV_OFFSET))(this);
		}

		::System::Void SetPipeline(::Il2CppArray<::Class_1_5B0B78CFE6F65A6A*>* InPipeline)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_5B0B78CFE6F65A6A*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETPIPELINE_OFFSET))(this, InPipeline);
		}

		::System::Void InitPipeline(::System::String* moduleConfigPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_INITPIPELINE_OFFSET))(this, moduleConfigPath);
		}

		::System::Void RefreshAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHALL_OFFSET))(this);
		}

		::RPG::Client::CameraDataAndFlags* GetCameraData()
		{
			return ((::RPG::Client::CameraDataAndFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETCAMERADATA_OFFSET))(this);
		}

		::System::Boolean HasOverrideConfig(::RPG::Client::CameraModuleType moduleType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_HASOVERRIDECONFIG_OFFSET))(this, moduleType);
		}

		::RPG::Client::CameraModuleConfigBase* GetRealModuleConfigByType(::RPG::Client::CameraModuleType moduleType)
		{
			return ((::RPG::Client::CameraModuleConfigBase*(*)(::PVOID, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETREALMODULECONFIGBYTYPE_OFFSET))(this, moduleType);
		}

		::System::Void OverrideModuleConfig(::RPG::Client::CameraModuleType moduleType, ::System::String* path, ::System::Boolean clearWhenResetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraModuleType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_OVERRIDEMODULECONFIG_OFFSET))(this, moduleType, path, clearWhenResetCamera);
		}

		::System::Void ResetOverrideModuleConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_RESETOVERRIDEMODULECONFIG_OFFSET))(this);
		}

		::Class_2_5D178EC982C80153* GetCameraModuleFightModule()
		{
			return ((::Class_2_5D178EC982C80153*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETCAMERAMODULEFIGHTMODULE_OFFSET))(this);
		}

		::System::Void SetCinemachineBrainBlendType(::Cinemachine::CinemachineBlendDefinition_Style style, ::System::Single blendTime, ::RPG::GameCore::VCameraBlend* blendConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::System::Single, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPE_OFFSET))(this, style, blendTime, blendConfig);
		}

		::System::Void SetCinemachineBrainBlendType_1(::Cinemachine::CinemachineBlendDefinition_Style style, ::System::String* customCurveName, ::System::Single blendTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPE_1_OFFSET))(this, style, customCurveName, blendTime);
		}

		::System::Void SetCinemachineBrainBlendTypeByCurve(::Cinemachine::CinemachineBlendDefinition_Style style, ::UnityEngine::AnimationCurve* customCurve, ::System::Single blendTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPEBYCURVE_OFFSET))(this, style, customCurve, blendTime);
		}

		::System::Void SetCinemachineBrainBlendFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDFINISH_OFFSET))(this);
		}

		::System::Void ClearOrthographicLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_CLEARORTHOGRAPHICLOCK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearCloseupShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_CLEARCLOSEUPSHOT_OFFSET))(this);
		}

		::Class_2_AD7DDABF71A10F42_2* GetVCamControlModule()
		{
			return ((::Class_2_AD7DDABF71A10F42_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETVCAMCONTROLMODULE_OFFSET))(this);
		}

		::System::Void ResetFreelook3rdModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_RESETFREELOOK3RDMODULE_OFFSET))(this);
		}

		::System::Void SetControllerAxisValueByTargetRotation(::UnityEngine::Quaternion currentRotation, ::UnityEngine::Quaternion targetRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCONTROLLERAXISVALUEBYTARGETROTATION_OFFSET))(this, currentRotation, targetRotation);
		}

		::System::Void TryResetCameraAxisImmediately(::System::Single axisX, ::System::Single axisY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_TRYRESETCAMERAAXISIMMEDIATELY_OFFSET))(this, axisX, axisY);
		}

		::System::Void SetFreelookLookAt(::UnityEngine::Vector3 lookAtPos, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETFREELOOKLOOKAT_OFFSET))(this, lookAtPos, duration);
		}

		::System::Void RefreshHideEntityModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHHIDEENTITYMODULE_OFFSET))(this);
		}

		::System::Void RefreshPipelineModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHPIPELINEMODULE_OFFSET))(this);
		}

		::System::Void ForceRefreshPipelineModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_FORCEREFRESHPIPELINEMODULE_OFFSET))(this);
		}

		::System::Void _DoRefreshPipelineModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__DOREFRESHPIPELINEMODULE_OFFSET))(this);
		}

		::System::Void OnLogicUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_ONLOGICUPDATE_OFFSET))(this);
		}

		::System::Void ManualLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_MANUALLATEUPDATE_OFFSET))(this);
		}

		::System::Void PauseCameraUpdate(::System::Boolean pause, ::RPG::Client::PauseMainCameraUpdateReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::PauseMainCameraUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_PAUSECAMERAUPDATE_OFFSET))(this, pause, reason);
		}

		::System::Int32 RegisterMonoDelegateUpdate(::System::Action* updateOperate)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_REGISTERMONODELEGATEUPDATE_OFFSET))(this, updateOperate);
		}

		::System::Void ReleaseMonoDelegateUpdate(::System::Int32 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_RELEASEMONODELEGATEUPDATE_OFFSET))(this, token);
		}

		::Class_1_7C0A6A60765B387C* GetFreelook3rdModuleChangeBlend()
		{
			return ((::Class_1_7C0A6A60765B387C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETFREELOOK3RDMODULECHANGEBLEND_OFFSET))(this);
		}

		::System::Void ReloadModuleConfig(::Class_1_30B5FE4AA7ABAB8C* param)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_RELOADMODULECONFIG_OFFSET))(this, param);
		}

		::System::Void DisposeOverrideConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSEOVERRIDECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* GetInheritMonoDelegateActions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETINHERITMONODELEGATEACTIONS_OFFSET))(this);
		}

		::System::Void SetInheritMonoDelegateActions(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* monoDelegateActions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETINHERITMONODELEGATEACTIONS_OFFSET))(this, monoDelegateActions);
		}

		::System::Void AbortCloseupShotTimeline(::System::Boolean onlyFromPrepareAbility)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_ABORTCLOSEUPSHOTTIMELINE_OFFSET))(this, onlyFromPrepareAbility);
		}

		::System::Void _IntervalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__INTERVALLATEUPDATE_OFFSET))(this);
		}

		::System::Void _BackupInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__BACKUPINPUTDATA_OFFSET))(this);
		}

		::System::Void _ResetToFightNormalMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__RESETTOFIGHTNORMALMODE_OFFSET))(this);
		}

		::System::Void _OnLateUpdateAfterResetToFightNormal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONLATEUPDATEAFTERRESETTOFIGHTNORMAL_OFFSET))(this);
		}

		::System::Void _InspectBattleFinishFallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__INSPECTBATTLEFINISHFALLBACK_OFFSET))(this);
		}

		::System::Void _Regist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__REGIST_OFFSET))(this);
		}

		::System::Void _Unregist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__UNREGIST_OFFSET))(this);
		}

		::System::Void _OnActiveEntityChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONACTIVEENTITYCHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnTeamLeaderSwitched(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONTEAMLEADERSWITCHED_OFFSET))(this, arg);
		}

		::System::Void _OnRealCameraChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONREALCAMERACHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnWorldShifting(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONWORLDSHIFTING_OFFSET))(this, arg);
		}

		::System::Void _CreateVCameraFreelook3rdConfigChangeTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__CREATEVCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET))(this);
		}

		::System::Void _CreateCameraLookAtTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__CREATECAMERALOOKATTEMPLATE_OFFSET))(this);
		}

		::System::Int32 get_SkipOneFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_SKIPONEFRAME_OFFSET))(this);
		}

		::System::Void set_SkipOneFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_SKIPONEFRAME_OFFSET))(this, value);
		}

		::Class_1_59A9DE327C950886* get_VCamInstancePool()
		{
			return ((::Class_1_59A9DE327C950886*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMINSTANCEPOOL_OFFSET))(this);
		}

		::System::Void set_VCamInstancePool(::Class_1_59A9DE327C950886* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_59A9DE327C950886*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMINSTANCEPOOL_OFFSET))(this, value);
		}

		::System::Single get_InitFOV()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_INITFOV_OFFSET))(this);
		}

		::RPG::Client::CameraNormalConfigTemplateList* get_TemplateConfig()
		{
			return ((::RPG::Client::CameraNormalConfigTemplateList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_TEMPLATECONFIG_OFFSET))(this);
		}

		::System::Void set_TemplateConfig(::RPG::Client::CameraNormalConfigTemplateList* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraNormalConfigTemplateList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_TEMPLATECONFIG_OFFSET))(this, value);
		}

		::RPG::Client::VCameraFreelook3rdConfigTemplate* get_VCameraFreelook3rdConfigChangeTemplate()
		{
			return ((::RPG::Client::VCameraFreelook3rdConfigTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET))(this);
		}

		::System::Void set_VCameraFreelook3rdConfigChangeTemplate(::RPG::Client::VCameraFreelook3rdConfigTemplate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraFreelook3rdConfigTemplate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET))(this, value);
		}

		::RPG::Client::AdventureCameraLookAtConfigTemplate* get_AdventureCameraLookAtTemplate()
		{
			return ((::RPG::Client::AdventureCameraLookAtConfigTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_ADVENTURECAMERALOOKATTEMPLATE_OFFSET))(this);
		}

		::System::Void set_AdventureCameraLookAtTemplate(::RPG::Client::AdventureCameraLookAtConfigTemplate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureCameraLookAtConfigTemplate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_ADVENTURECAMERALOOKATTEMPLATE_OFFSET))(this, value);
		}

		::UnityEngine::Object* get_VCameraTemplateAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERATEMPLATEASSET_OFFSET))(this);
		}

		::System::Void set_VCameraTemplateAsset(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERATEMPLATEASSET_OFFSET))(this, value);
		}

		::UnityEngine::Object* get_VCameraFreelook3rdTemplateAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERAFREELOOK3RDTEMPLATEASSET_OFFSET))(this);
		}

		::System::Void set_VCameraFreelook3rdTemplateAsset(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERAFREELOOK3RDTEMPLATEASSET_OFFSET))(this, value);
		}

		::UnityEngine::Object* get_CRPVirtualCameraTemplateAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_CRPVIRTUALCAMERATEMPLATEASSET_OFFSET))(this);
		}

		::System::Void set_CRPVirtualCameraTemplateAsset(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_CRPVIRTUALCAMERATEMPLATEASSET_OFFSET))(this, value);
		}

		::Class_1_CED0702510CFFDAF* get_ShakeSourceMgr()
		{
			return ((::Class_1_CED0702510CFFDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_SHAKESOURCEMGR_OFFSET))(this);
		}

		::System::Void set_ShakeSourceMgr(::Class_1_CED0702510CFFDAF* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CED0702510CFFDAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_SHAKESOURCEMGR_OFFSET))(this, value);
		}

		::RPG::Client::PipelineCameraGlobalConfig* get_GlobalConfig()
		{
			return ((::RPG::Client::PipelineCameraGlobalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_GLOBALCONFIG_OFFSET))(this);
		}

		::RPG::Client::CameraModuleConfigCollection* get_ModuleConfig()
		{
			return ((::RPG::Client::CameraModuleConfigCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_MODULECONFIG_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrainRef()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_CINEMACHINEBRAINREF_OFFSET))(this);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_INITIALIZED_OFFSET))(this);
		}

		::System::Boolean get_IsFirstRefreshPipelineAfterInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISFIRSTREFRESHPIPELINEAFTERINIT_OFFSET))(this);
		}

		::System::Void set_IsFirstRefreshPipelineAfterInit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_ISFIRSTREFRESHPIPELINEAFTERINIT_OFFSET))(this, value);
		}

		::System::UInt32 get_UpdateCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_UPDATECOUNT_OFFSET))(this);
		}

		::System::Boolean get_UseCinemachineZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_USECINEMACHINEZOOM_OFFSET))(this);
		}

		::System::Void set_UseCinemachineZoom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_USECINEMACHINEZOOM_OFFSET))(this, value);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISPAUSE_OFFSET))(this);
		}

		::RPG::GameCore::CameraMode get_CurrentCameraMode()
		{
			return ((::RPG::GameCore::CameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_CURRENTCAMERAMODE_OFFSET))(this);
		}

		::System::Boolean get_IsFreeLook3rdLive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISFREELOOK3RDLIVE_OFFSET))(this);
		}

		::System::Boolean get_IsLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISLATEUPDATE_OFFSET))(this);
		}

		::System::String* get_LoadedModuleConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_LOADEDMODULECONFIGPATH_OFFSET))(this);
		}
	};
}
