#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashCarCamera_PlayStartCamera_TypeDefinitionIndex = 75431;

	struct alignas(8) MonoRoadRashCarCamera_PlayStartCamera
	{
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* Cameras; // 0x10
		::System::Boolean EnableBlendBack; // 0x18
		::System::Single BlendBackTime; // 0x1C
		::System::Single LastCameraBlendStartTime; // 0x20
	};
}
