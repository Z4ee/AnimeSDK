#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MonoTriggerRegion; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChasePuzzleArea_AreaTriggerInfo_TypeDefinitionIndex = 77751;

	struct alignas(8) ChasePuzzleArea_AreaTriggerInfo
	{
		::UnityEngine::Collider* trigger; // 0x10
		::System::String* triggerUniqueName; // 0x18
		::System::String* customString; // 0x20
		::System::String* cameraAnchorName; // 0x28
		::System::String* nextAreaName; // 0x30
		::System::String* nextForbidTriggerName; // 0x38
		::RPG::Client::MonoTriggerRegion* triggerRegion; // 0x40
	};
}
