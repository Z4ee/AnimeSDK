#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleBoard_AirwallConfig_TypeDefinitionIndex = 73085;

	struct alignas(8) DronesPuzzleBoard_AirwallConfig
	{
		::System::String* path; // 0x10
		::UnityEngine::Vector3 localPosition; // 0x18
		::UnityEngine::Quaternion localRotation; // 0x24
	};
}
