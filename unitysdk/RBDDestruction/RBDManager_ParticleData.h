#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_ParticleData_TypeDefinitionIndex = 29710;

	struct alignas(4) RBDManager_ParticleData
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single scale; // 0x1C
		::UnityEngine::Vector3 velocity; // 0x20
		::System::Single isActive; // 0x2C
		::UnityEngine::Quaternion rotation; // 0x30
		::System::Single groundTimer; // 0x40
		::UnityEngine::Vector3 extents; // 0x44
		::System::Single grounded; // 0x50
		::UnityEngine::Vector3 rotationSpeed; // 0x54
		::System::Single crack; // 0x60
		::UnityEngine::Vector3 prePosition; // 0x64
		::System::Single mass; // 0x70
		::UnityEngine::Quaternion preRotation; // 0x74
		::System::Single hp; // 0x84
		::System::Int32 groupID; // 0x88
	};
}
