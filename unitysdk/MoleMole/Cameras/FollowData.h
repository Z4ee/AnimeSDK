#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int FollowData_TypeDefinitionIndex = 87245;

	struct alignas(4) FollowData
	{
		::UnityEngine::Vector3 anchorPosition; // 0x10
		::UnityEngine::Vector3 cameraPosition; // 0x1C
		::UnityEngine::Vector3 cameraForward; // 0x28
		::UnityEngine::Vector3 followCenterPosition; // 0x34
		::UnityEngine::Vector3 followOffset; // 0x40
	};
}
