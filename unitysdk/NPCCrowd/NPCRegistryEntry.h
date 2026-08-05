#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/System/ValueType.h"

class Class_3_19291F68B291BF8F;
class Class_3_F66EF797857EB737;

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCRegistryEntry_TypeDefinitionIndex = 67002;

	struct alignas(8) NPCRegistryEntry
	{
		::Foundation::ViewObject::ViewObjectHandle viewObjectHandle; // 0x10
		::NPCCrowd::EDynamicUnloadPriority dynamicUnloadPriority; // 0x20
		::System::Boolean bIsBackStage; // 0x24
		::System::UInt32 groupID; // 0x28
		::System::Single registerTime; // 0x2C
		::System::Single backStageStartTime; // 0x30
		::System::Single accumulatedFrontStageTime; // 0x34
		::System::Single frontStageEnterTime; // 0x38
		::System::UInt64 registerOrderSeq; // 0x40
		::System::UInt64 backStageOrderSeq; // 0x48
		::Class_3_19291F68B291BF8F* cachedBuilderComp; // 0x50
		::Class_3_F66EF797857EB737* cachedMemberComp; // 0x58
	};
}
