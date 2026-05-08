#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_GET_POINTERDRAGDELTAMULTIPLATFORM_OFFSET UNITYSDK_OFFSET(0x5B39B0)
#define MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_METHOD_2_3787E7B8A3FA157C_OFFSET UNITYSDK_OFFSET(0x5B39C0)
#define MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x5B3A70)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraControlFlag_TypeDefinitionIndex = 52374;

	struct alignas(4) CameraControlFlag
	{
		::System::Boolean isRotateStart; // 0x10
		::System::Boolean isRotating; // 0x11
		::System::Boolean isOrderMoving; // 0x12
		::System::Boolean hasAnyControl; // 0x13
		::System::Boolean isControllerStateEnable; // 0x14
		::UnityEngine::Vector2 pointerDragDelta; // 0x18
		::System::Boolean isRecoveringFromLock; // 0x20

		::UnityEngine::Vector2 get_pointerDragDeltaMultiPlatform()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_GET_POINTERDRAGDELTAMULTIPLATFORM_OFFSET))(this);
		}

		::System::Void Method_2_3787E7B8A3FA157C(::MoleMole::Cameras::CameraControlFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraControlFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_METHOD_2_3787E7B8A3FA157C_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERACONTROLFLAG_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
