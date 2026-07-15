#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class WolfBroGunPlayRoadMapConfig; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleBoard_RoadTimeline_TypeDefinitionIndex = 65676;

	struct alignas(8) WolfBroGunPlayPuzzleBoard_RoadTimeline
	{
		::RPG::Client::WolfBroGunPlayRoadMapConfig* config; // 0x10
		::System::String* uniqueName; // 0x18
		::System::Boolean enable; // 0x20
		::System::String* wait; // 0x28
		::System::Single waitTime; // 0x30
		::System::Boolean autoFinishWhenAllTargetDeactivated; // 0x34
	};
}
