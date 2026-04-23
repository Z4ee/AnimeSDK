#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }

namespace RPG::Client
{
	inline static constexpr unsigned int CameraResultData_TypeDefinitionIndex = 64109;

	struct alignas(8) CameraResultData
	{
		::System::Single Dutch; // 0x10
		::UnityEngine::Vector3 AnchorPosition; // 0x14
		::UnityEngine::Vector3 FollowPosition; // 0x20
		::UnityEngine::Vector3 UltraDistanceModifiedFollowPosition; // 0x2C
		::UnityEngine::Vector3 AimPosition; // 0x38
		::System::Single DollyPosition; // 0x44
		::UnityEngine::Vector3 FollowDamp; // 0x48
		::UnityEngine::Vector2 AimDamp; // 0x54
		::UnityEngine::Vector3 BaseCameraPosition; // 0x5C
		::UnityEngine::Vector3 CameraPosition; // 0x68
		::UnityEngine::Quaternion CameraRotation; // 0x74
		::System::Single Fov; // 0x84
		::UnityEngine::Vector3 ShotAnimOffset; // 0x88
		::Cinemachine::ICinemachineCamera* ActiveVirtualCamera; // 0x98
	};
}
