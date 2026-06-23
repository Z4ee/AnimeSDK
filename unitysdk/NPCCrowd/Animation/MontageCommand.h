#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageClipDataIndex.h"
#include "unitysdk/NPCCrowd/Animation/MontageClipType.h"
#include "unitysdk/NPCCrowd/Animation/MontageTimeEventType.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageCommand_TypeDefinitionIndex = 53675;

	struct alignas(4) MontageCommand
	{
		::NPCCrowd::Animation::MontageClipType clipType; // 0x10
		::NPCCrowd::Animation::MontageTimeEventType timeEvent; // 0x11
		::NPCCrowd::Animation::MontageClipDataIndex clipDataIndex; // 0x14
		::System::UInt32 ownerEntityId; // 0x1C
		::System::Int32 sourceMontageKey; // 0x20
		::System::Int32 sourcePriorityLayer; // 0x24
	};
}
