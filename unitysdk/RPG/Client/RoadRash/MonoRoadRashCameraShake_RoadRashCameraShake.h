#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashCameraShake_RoadRashCameraShake_TypeDefinitionIndex = 75428;

	struct alignas(8) MonoRoadRashCameraShake_RoadRashCameraShake
	{
		::System::String* Comment; // 0x10
		::System::Int32 Priority; // 0x18
		::UnityEngine::Vector3 PivotOffset; // 0x1C
		::System::Single Amplitude; // 0x28
		::System::Single Frequency; // 0x2C
		::System::Single Duration; // 0x30
	};
}
