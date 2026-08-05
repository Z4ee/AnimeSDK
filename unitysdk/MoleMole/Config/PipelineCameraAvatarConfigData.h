#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"

namespace MoleMole { class CameraLockBossConfig; }
namespace MoleMole { class CameraLockTargetConfig; }
namespace MoleMole { class CameraModelSphereData; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_GETCAMERAMODULEAVATARDATACONFIGEXT_OFFSET UNITYSDK_OFFSET(0x1B926580)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9266A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PipelineCameraAvatarConfigData_TypeDefinitionIndex = 51333;

	class PipelineCameraAvatarConfigData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModuleAvatarDataConfigExt*>* cameraAvatarGroup; // 0x58
		::System::Boolean MUTE_LOCKING_TARGET; // 0x60
		::MoleMole::CameraLockTargetConfig* cameraLockTargetConfig; // 0x68
		::System::Boolean MUTE_LOCKING_BOSS; // 0x70
		::MoleMole::CameraLockBossConfig* cameraLockBossConfig; // 0x78
		::System::Single IdleStandByCameraStateTriggerInterval; // 0x80
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::String*>* CameraStateDefaultSphereKeyDict; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModelSphereData*>* cameraAvatarSphereGroup; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::CameraModuleAvatarDataConfigExt* GetCameraModuleAvatarDataConfigExt(::System::String* name)
		{
			return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_GETCAMERAMODULEAVATARDATACONFIGEXT_OFFSET))(this, name);
		}
	};
}
