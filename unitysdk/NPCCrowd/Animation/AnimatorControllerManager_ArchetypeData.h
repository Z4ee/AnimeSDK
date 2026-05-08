#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParamEntry.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateEntry.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerManager_ArchetypeData_TypeDefinitionIndex = 65824;

	struct alignas(8) AnimatorControllerManager_ArchetypeData
	{
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamEntry> Params; // 0x10
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateEntry> States; // 0x20
	};
}
