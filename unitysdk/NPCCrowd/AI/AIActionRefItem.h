#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class IAIActionConfig; }

#define NPCCROWD_AI_AIACTIONREFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC9A03F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRefItem_TypeDefinitionIndex = 61278;

	class AIActionRefItem : public ::System::Object
	{
	public:
		::System::Int32 actionID; // 0x10
		::System::Boolean overrideParam; // 0x14
		::NPCCrowd::AI::IAIActionConfig* overridedConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONREFITEM__CTOR_OFFSET))(this);
		}
	};
}
