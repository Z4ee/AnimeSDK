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
class Class_1_5B0B78CFE6F65A6A;
class Class_1_6F1D8C3500555B80;
class Class_1_7AAD789E4D195BDB;
class Class_1_9B3591E177CAF203;
class Class_1_C991F2628C937838;
class Class_2_064E3E42E5FDBEE0;
class Class_2_898DC1EA1181F3B8;
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

#define RPG_CLIENT_PIPELINECAMERAENGINE_ABORTCLOSEUPSHOTTIMELINE_OFFSET UNITYSDK_OFFSET(0xC3ABF50)
#define RPG_CLIENT_PIPELINECAMERAENGINE_CLEARCLOSEUPSHOT_OFFSET UNITYSDK_OFFSET(0xC3AA1A0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_CLEARORTHOGRAPHICLOCK_OFFSET UNITYSDK_OFFSET(0xC3A9D40)
#define RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSEOVERRIDECONFIGS_OFFSET UNITYSDK_OFFSET(0xC3ABC90)
#define RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSEPIPELINELOOKDEV_OFFSET UNITYSDK_OFFSET(0xC3A6DB0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3A9DA0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_FORCEREFRESHPIPELINEMODULE_OFFSET UNITYSDK_OFFSET(0xC3AB010)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETCAMERADATA_OFFSET UNITYSDK_OFFSET(0xC384C40)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETCAMERAMODULEFIGHTMODULE_OFFSET UNITYSDK_OFFSET(0xC3A9530)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETFREELOOK3RDMODULECHANGEBLEND_OFFSET UNITYSDK_OFFSET(0xC3A9C80)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETINHERITMONODELEGATEACTIONS_OFFSET UNITYSDK_OFFSET(0xC3ABCF0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETREALMODULECONFIGBYTYPE_OFFSET UNITYSDK_OFFSET(0xC3A9370)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GETVCAMCONTROLMODULE_OFFSET UNITYSDK_OFFSET(0xC3AA410)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ADVENTURECAMERALOOKATTEMPLATE_OFFSET UNITYSDK_OFFSET(0xC3ACB20)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0xC3ACBE0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_CRPVIRTUALCAMERATEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xC3ACB80)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_CURRENTCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xC3ACC50)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_GLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xC3ACBC0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_INITFOV_OFFSET UNITYSDK_OFFSET(0xC3ACA50)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xC3ACBF0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISFIRSTREFRESHPIPELINEAFTERINIT_OFFSET UNITYSDK_OFFSET(0xC3ACC00)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISFREELOOK3RDLIVE_OFFSET UNITYSDK_OFFSET(0xC3ACC80)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC3ACD00)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xC38A540)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_LOADEDMODULECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC3ACD10)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_MODULECONFIG_OFFSET UNITYSDK_OFFSET(0xC3ACBD0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_SHAKESOURCEMGR_OFFSET UNITYSDK_OFFSET(0xC3ACBA0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_SKIPONEFRAME_OFFSET UNITYSDK_OFFSET(0xC3ACA10)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_TEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xC3ACAE0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_UPDATECOUNT_OFFSET UNITYSDK_OFFSET(0xC3ACC20)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_USECINEMACHINEZOOM_OFFSET UNITYSDK_OFFSET(0xC3ACC30)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET UNITYSDK_OFFSET(0xC3ACB00)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERAFREELOOK3RDTEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xC3ACB60)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERATEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xC3ACB40)
#define RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMINSTANCEPOOL_OFFSET UNITYSDK_OFFSET(0xC3ACA30)
#define RPG_CLIENT_PIPELINECAMERAENGINE_HASOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xC3A9300)
#define RPG_CLIENT_PIPELINECAMERAENGINE_INITPIPELINELOOKDEV_OFFSET UNITYSDK_OFFSET(0xC3A6EC0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_INITPIPELINE_OFFSET UNITYSDK_OFFSET(0xC3A7710)
#define RPG_CLIENT_PIPELINECAMERAENGINE_MANUALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC3ABA00)
#define RPG_CLIENT_PIPELINECAMERAENGINE_ONLOGICUPDATE_OFFSET UNITYSDK_OFFSET(0xC3A8D90)
#define RPG_CLIENT_PIPELINECAMERAENGINE_OVERRIDEMODULECONFIG_OFFSET UNITYSDK_OFFSET(0xC3A9400)
#define RPG_CLIENT_PIPELINECAMERAENGINE_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0xC3ABA70)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHALL_OFFSET UNITYSDK_OFFSET(0xC3A8CF0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHHIDEENTITYMODULE_OFFSET UNITYSDK_OFFSET(0xC3AAC80)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHPIPELINELOOKDEV_OFFSET UNITYSDK_OFFSET(0xC3A7620)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHPIPELINEMODULE_OFFSET UNITYSDK_OFFSET(0xC3AAD60)
#define RPG_CLIENT_PIPELINECAMERAENGINE_REGISTERMONODELEGATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC3ABAD0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_RELEASEMONODELEGATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC3ABB40)
#define RPG_CLIENT_PIPELINECAMERAENGINE_RELOADMODULECONFIG_OFFSET UNITYSDK_OFFSET(0xC3ABBB0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_RESETFREELOOK3RDMODULE_OFFSET UNITYSDK_OFFSET(0xC3AA4C0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_RESETOVERRIDEMODULECONFIG_OFFSET UNITYSDK_OFFSET(0xC3A94D0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDFINISH_OFFSET UNITYSDK_OFFSET(0xC3A9BC0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPEBYCURVE_OFFSET UNITYSDK_OFFSET(0xC3A98C0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPE_1_OFFSET UNITYSDK_OFFSET(0xC3A9950)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPE_OFFSET UNITYSDK_OFFSET(0xC3A9720)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETCONTROLLERAXISVALUEBYTARGETROTATION_OFFSET UNITYSDK_OFFSET(0xC3AA860)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETFREELOOKLOOKAT_OFFSET UNITYSDK_OFFSET(0xC3AAB00)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETINHERITMONODELEGATEACTIONS_OFFSET UNITYSDK_OFFSET(0xC3ABDA0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SETPIPELINE_OFFSET UNITYSDK_OFFSET(0xC3A76C0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_ADVENTURECAMERALOOKATTEMPLATE_OFFSET UNITYSDK_OFFSET(0xC3ACB30)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_CRPVIRTUALCAMERATEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xC3ACB90)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_ISFIRSTREFRESHPIPELINEAFTERINIT_OFFSET UNITYSDK_OFFSET(0xC3ACC10)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_SHAKESOURCEMGR_OFFSET UNITYSDK_OFFSET(0xC3ACBB0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_SKIPONEFRAME_OFFSET UNITYSDK_OFFSET(0xC3ACA20)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_TEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xC3ACAF0)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_USECINEMACHINEZOOM_OFFSET UNITYSDK_OFFSET(0xC3ACC40)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET UNITYSDK_OFFSET(0xC3ACB10)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERAFREELOOK3RDTEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xC3ACB70)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERATEMPLATEASSET_OFFSET UNITYSDK_OFFSET(0xC3ACB50)
#define RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMINSTANCEPOOL_OFFSET UNITYSDK_OFFSET(0xC3ACA40)
#define RPG_CLIENT_PIPELINECAMERAENGINE_TRYLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xC3A6680)
#define RPG_CLIENT_PIPELINECAMERAENGINE_TRYRESETCAMERAAXISIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xC3AAA00)
#define RPG_CLIENT_PIPELINECAMERAENGINE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xC3A69D0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__BACKUPINPUTDATA_OFFSET UNITYSDK_OFFSET(0xC3AB7A0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__CREATECAMERALOOKATTEMPLATE_OFFSET UNITYSDK_OFFSET(0xC3A6C60)
#define RPG_CLIENT_PIPELINECAMERAENGINE__CREATEVCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET UNITYSDK_OFFSET(0xC3A6B30)
#define RPG_CLIENT_PIPELINECAMERAENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0xC3ACD20)
#define RPG_CLIENT_PIPELINECAMERAENGINE__DOREFRESHPIPELINEMODULE_OFFSET UNITYSDK_OFFSET(0xC3AAE00)
#define RPG_CLIENT_PIPELINECAMERAENGINE__INSPECTBATTLEFINISHFALLBACK_OFFSET UNITYSDK_OFFSET(0xC3AB170)
#define RPG_CLIENT_PIPELINECAMERAENGINE__INTERVALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC3A8E10)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONACTIVEENTITYCHANGE_OFFSET UNITYSDK_OFFSET(0xC3AC0C0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONLATEUPDATEAFTERRESETTOFIGHTNORMAL_OFFSET UNITYSDK_OFFSET(0xC3AB2B0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONREALCAMERACHANGE_OFFSET UNITYSDK_OFFSET(0xC3AC1D0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONTEAMLEADERSWITCHED_OFFSET UNITYSDK_OFFSET(0xC3AC170)
#define RPG_CLIENT_PIPELINECAMERAENGINE__ONWORLDSHIFTING_OFFSET UNITYSDK_OFFSET(0xC3AC230)
#define RPG_CLIENT_PIPELINECAMERAENGINE__REGIST_OFFSET UNITYSDK_OFFSET(0xC3A8B90)
#define RPG_CLIENT_PIPELINECAMERAENGINE__RESETTOFIGHTNORMALMODE_OFFSET UNITYSDK_OFFSET(0xC3AB0B0)
#define RPG_CLIENT_PIPELINECAMERAENGINE__UNREGIST_OFFSET UNITYSDK_OFFSET(0xC3AA040)

namespace RPG::Client
{
	inline static constexpr unsigned int PipelineCameraEngine_TypeDefinitionIndex = 65175;

	class PipelineCameraEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _TryLoadConfigLog3; // 0x0
		::System::Action* EndOfLateUpdateCallback; // 0x18
		::System::Int32 _SkipOneFrame_k__BackingField; // 0x20
		::Class_1_C991F2628C937838* _VCamInstancePool_k__BackingField; // 0x28
		::RPG::Client::CameraNormalConfigTemplateList* _TemplateConfig_k__BackingField; // 0x30
		::RPG::Client::VCameraFreelook3rdConfigTemplate* _VCameraFreelook3rdConfigChangeTemplate_k__BackingField; // 0x38
		::RPG::Client::AdventureCameraLookAtConfigTemplate* _AdventureCameraLookAtTemplate_k__BackingField; // 0x40
		::UnityEngine::Object* _VCameraTemplateAsset_k__BackingField; // 0x48
		::UnityEngine::Object* _VCameraFreelook3rdTemplateAsset_k__BackingField; // 0x50
		::UnityEngine::Object* _CRPVirtualCameraTemplateAsset_k__BackingField; // 0x58
		::Class_1_9B3591E177CAF203* _ShakeSourceMgr_k__BackingField; // 0x60
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

		::System::Void TryLoadAllConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_TRYLOADALLCONFIG_OFFSET))(this, a1);
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

		::System::Void SetPipeline(::Il2CppArray<::Class_1_5B0B78CFE6F65A6A*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_5B0B78CFE6F65A6A*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETPIPELINE_OFFSET))(this, a1);
		}

		::System::Void InitPipeline(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_INITPIPELINE_OFFSET))(this, a1);
		}

		::System::Void RefreshAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_REFRESHALL_OFFSET))(this);
		}

		::RPG::Client::CameraDataAndFlags* GetCameraData()
		{
			return ((::RPG::Client::CameraDataAndFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETCAMERADATA_OFFSET))(this);
		}

		::System::Boolean HasOverrideConfig(::RPG::Client::CameraModuleType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_HASOVERRIDECONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::CameraModuleConfigBase* GetRealModuleConfigByType(::RPG::Client::CameraModuleType a1)
		{
			return ((::RPG::Client::CameraModuleConfigBase*(*)(::PVOID, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETREALMODULECONFIGBYTYPE_OFFSET))(this, a1);
		}

		::System::Void OverrideModuleConfig(::RPG::Client::CameraModuleType a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraModuleType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_OVERRIDEMODULECONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetOverrideModuleConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_RESETOVERRIDEMODULECONFIG_OFFSET))(this);
		}

		::Class_2_898DC1EA1181F3B8* GetCameraModuleFightModule()
		{
			return ((::Class_2_898DC1EA1181F3B8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETCAMERAMODULEFIGHTMODULE_OFFSET))(this);
		}

		::System::Void SetCinemachineBrainBlendType(::Cinemachine::CinemachineBlendDefinition_Style a1, ::System::Single a2, ::RPG::GameCore::VCameraBlend* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::System::Single, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCinemachineBrainBlendType_1(::Cinemachine::CinemachineBlendDefinition_Style a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCinemachineBrainBlendTypeByCurve(::Cinemachine::CinemachineBlendDefinition_Style a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCINEMACHINEBRAINBLENDTYPEBYCURVE_OFFSET))(this, a1, a2, a3);
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

		::System::Void SetControllerAxisValueByTargetRotation(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETCONTROLLERAXISVALUEBYTARGETROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void TryResetCameraAxisImmediately(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_TRYRESETCAMERAAXISIMMEDIATELY_OFFSET))(this, a1, a2);
		}

		::System::Void SetFreelookLookAt(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETFREELOOKLOOKAT_OFFSET))(this, a1, a2);
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

		::System::Void PauseCameraUpdate(::System::Boolean a1, ::RPG::Client::PauseMainCameraUpdateReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::PauseMainCameraUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_PAUSECAMERAUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Int32 RegisterMonoDelegateUpdate(::System::Action* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_REGISTERMONODELEGATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void ReleaseMonoDelegateUpdate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_RELEASEMONODELEGATEUPDATE_OFFSET))(this, a1);
		}

		::Class_1_6F1D8C3500555B80* GetFreelook3rdModuleChangeBlend()
		{
			return ((::Class_1_6F1D8C3500555B80*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETFREELOOK3RDMODULECHANGEBLEND_OFFSET))(this);
		}

		::System::Void ReloadModuleConfig(::Class_1_30B5FE4AA7ABAB8C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_RELOADMODULECONFIG_OFFSET))(this, a1);
		}

		::System::Void DisposeOverrideConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_DISPOSEOVERRIDECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* GetInheritMonoDelegateActions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GETINHERITMONODELEGATEACTIONS_OFFSET))(this);
		}

		::System::Void SetInheritMonoDelegateActions(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SETINHERITMONODELEGATEACTIONS_OFFSET))(this, a1);
		}

		::System::Void AbortCloseupShotTimeline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_ABORTCLOSEUPSHOTTIMELINE_OFFSET))(this, a1);
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

		::System::Void _OnActiveEntityChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONACTIVEENTITYCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONTEAMLEADERSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _OnRealCameraChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONREALCAMERACHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnWorldShifting(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE__ONWORLDSHIFTING_OFFSET))(this, a1);
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

		::System::Void set_SkipOneFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_SKIPONEFRAME_OFFSET))(this, a1);
		}

		::Class_1_C991F2628C937838* get_VCamInstancePool()
		{
			return ((::Class_1_C991F2628C937838*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMINSTANCEPOOL_OFFSET))(this);
		}

		::System::Void set_VCamInstancePool(::Class_1_C991F2628C937838* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C991F2628C937838*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMINSTANCEPOOL_OFFSET))(this, a1);
		}

		::System::Single get_InitFOV()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_INITFOV_OFFSET))(this);
		}

		::RPG::Client::CameraNormalConfigTemplateList* get_TemplateConfig()
		{
			return ((::RPG::Client::CameraNormalConfigTemplateList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_TEMPLATECONFIG_OFFSET))(this);
		}

		::System::Void set_TemplateConfig(::RPG::Client::CameraNormalConfigTemplateList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraNormalConfigTemplateList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_TEMPLATECONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::VCameraFreelook3rdConfigTemplate* get_VCameraFreelook3rdConfigChangeTemplate()
		{
			return ((::RPG::Client::VCameraFreelook3rdConfigTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET))(this);
		}

		::System::Void set_VCameraFreelook3rdConfigChangeTemplate(::RPG::Client::VCameraFreelook3rdConfigTemplate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraFreelook3rdConfigTemplate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERAFREELOOK3RDCONFIGCHANGETEMPLATE_OFFSET))(this, a1);
		}

		::RPG::Client::AdventureCameraLookAtConfigTemplate* get_AdventureCameraLookAtTemplate()
		{
			return ((::RPG::Client::AdventureCameraLookAtConfigTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_ADVENTURECAMERALOOKATTEMPLATE_OFFSET))(this);
		}

		::System::Void set_AdventureCameraLookAtTemplate(::RPG::Client::AdventureCameraLookAtConfigTemplate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureCameraLookAtConfigTemplate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_ADVENTURECAMERALOOKATTEMPLATE_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_VCameraTemplateAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERATEMPLATEASSET_OFFSET))(this);
		}

		::System::Void set_VCameraTemplateAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERATEMPLATEASSET_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_VCameraFreelook3rdTemplateAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_VCAMERAFREELOOK3RDTEMPLATEASSET_OFFSET))(this);
		}

		::System::Void set_VCameraFreelook3rdTemplateAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_VCAMERAFREELOOK3RDTEMPLATEASSET_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_CRPVirtualCameraTemplateAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_CRPVIRTUALCAMERATEMPLATEASSET_OFFSET))(this);
		}

		::System::Void set_CRPVirtualCameraTemplateAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_CRPVIRTUALCAMERATEMPLATEASSET_OFFSET))(this, a1);
		}

		::Class_1_9B3591E177CAF203* get_ShakeSourceMgr()
		{
			return ((::Class_1_9B3591E177CAF203*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_SHAKESOURCEMGR_OFFSET))(this);
		}

		::System::Void set_ShakeSourceMgr(::Class_1_9B3591E177CAF203* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9B3591E177CAF203*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_SHAKESOURCEMGR_OFFSET))(this, a1);
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

		::System::Void set_IsFirstRefreshPipelineAfterInit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_ISFIRSTREFRESHPIPELINEAFTERINIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_UpdateCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_UPDATECOUNT_OFFSET))(this);
		}

		::System::Boolean get_UseCinemachineZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_GET_USECINEMACHINEZOOM_OFFSET))(this);
		}

		::System::Void set_UseCinemachineZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE_SET_USECINEMACHINEZOOM_OFFSET))(this, a1);
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
