#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }

namespace RPG::Client
{
	inline static constexpr unsigned int CameraResultData_TypeDefinitionIndex = 66435;

	struct alignas(8) CameraResultData
	{
		::UnityEngine::Vector3 AnchorPosition; // 0x10
		::UnityEngine::Vector3 FollowPosition; // 0x1C
		::UnityEngine::Vector3 UltraDistanceModifiedFollowPosition; // 0x28
		::UnityEngine::Vector3 AimPosition; // 0x34
		::System::Single DollyPosition; // 0x40
		::UnityEngine::Vector3 FollowDamp; // 0x44
		::UnityEngine::Vector2 AimDamp; // 0x50
		::UnityEngine::Vector3 BaseCameraPosition; // 0x58
		::UnityEngine::Vector3 CameraPosition; // 0x64
		::UnityEngine::Quaternion CameraRotation; // 0x70
		::System::Single Fov; // 0x80
		::System::Single Dutch; // 0x84
		::UnityEngine::Vector3 ShotAnimOffset; // 0x88
		::Cinemachine::ICinemachineCamera* ActiveVirtualCamera; // 0x98
		::System::Boolean SkipCutOnce; // 0xA0
	};
}
