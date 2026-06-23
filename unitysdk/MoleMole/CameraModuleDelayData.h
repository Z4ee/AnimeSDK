#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERAMODULEDELAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBF250)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleDelayData_TypeDefinitionIndex = 65324;

	class CameraModuleDelayData : public ::System::Object
	{
	public:
		::System::Single RATIO_CAMERA_FOLLOW_RETURN_STATE_IDLE; // 0x10
		::System::Single RATIO_CAMERA_FOLLOW_RETURN_STATE_WALK; // 0x14
		::System::Single RATIO_CAMERA_FOLLOW_RETURN_STATE_RUN; // 0x18
		::System::Single RATIO_CAMERA_FOLLOW_RETURN_STATE_EVADE; // 0x1C
		::System::Single RATIO_CAMERA_FOLLOW_RETURN_DIRECTION_SIDE; // 0x20
		::System::Single RATIO_CAMERA_FOLLOW_RETURN_DIRECTION_FORWARD; // 0x24
		::System::Single RATIO_CAMERA_FOLLOW_RETURN_DIRECTION_BACKWARD; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEDELAYDATA__CTOR_OFFSET))(this);
		}
	};
}
