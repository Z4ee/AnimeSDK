#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CINEMACHINE_CAMERACONTROLDATABASE_COPYFROM_OFFSET UNITYSDK_OFFSET(0xAC60E0)
#define CINEMACHINE_CAMERACONTROLDATABASE_RESET_OFFSET UNITYSDK_OFFSET(0xAC60C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CameraControlDataBase_TypeDefinitionIndex = 34782;

	struct alignas(4) CameraControlDataBase
	{
		::System::Boolean isRotateStart; // 0x10
		::System::Boolean isRotating; // 0x11
		::System::Boolean isOrderMoving; // 0x12
		::System::Boolean hasAnyControl; // 0x13
		::UnityEngine::Vector2 CameraRotationDelta; // 0x14

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERACONTROLDATABASE_RESET_OFFSET))(this);
		}

		::System::Void CopyFrom(::Cinemachine::CameraControlDataBase target)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraControlDataBase))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERACONTROLDATABASE_COPYFROM_OFFSET))(this, target);
		}
	};
}
