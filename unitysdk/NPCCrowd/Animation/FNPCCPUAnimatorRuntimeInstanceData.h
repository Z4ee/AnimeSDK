#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCAnimatorRuntimeInstanceAnimClipData.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCPUAnimatorRuntimeInstanceData_TypeDefinitionIndex = 44076;

	struct alignas(4) FNPCCPUAnimatorRuntimeInstanceData
	{
		::System::Boolean bHasAnimation; // 0x10
		::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData mainAnim; // 0x14
		::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData blend1; // 0x28
		::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData blend2; // 0x3C
		::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData blend3; // 0x50
	};
}
