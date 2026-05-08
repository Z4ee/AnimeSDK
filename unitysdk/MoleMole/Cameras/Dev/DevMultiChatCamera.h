#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_DEV_DEVMULTICHATCAMERA_SYNC_OFFSET UNITYSDK_OFFSET(0xECE9FB0)
#define MOLEMOLE_CAMERAS_DEV_DEVMULTICHATCAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0xECE9F60)
#define MOLEMOLE_CAMERAS_DEV_DEVMULTICHATCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xECEA470)

namespace MoleMole::Cameras::Dev
{
	inline static constexpr unsigned int DevMultiChatCamera_TypeDefinitionIndex = 38119;

	class DevMultiChatCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* chatTargets; // 0x18
		::System::Single targetRadius; // 0x20
		::System::Int32 minDesiredYaw; // 0x24
		::System::Int32 maxDesiredYaw; // 0x28
		::System::Single minExtentRadius; // 0x2C
		::System::Single desiredAngle; // 0x30
		::System::Single deviationPenalty; // 0x34
		::System::Single overlapPenalty; // 0x38
		::System::Single variancePenalty; // 0x3C
		::System::Int32 sampleStep; // 0x40
		::System::Single fieldOfView; // 0x44
		::System::Single heightOffset; // 0x48
		::System::Single pitch; // 0x4C
		::System::Boolean sync; // 0x50
		::PipelineCamera::FinalCameraData CameraData; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVMULTICHATCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVMULTICHATCAMERA_UPDATE_OFFSET))(this);
		}

		::System::Void Sync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVMULTICHATCAMERA_SYNC_OFFSET))(this);
		}
	};
}
