#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI { class AIActionRefItem; }
namespace NPCCrowd::AI { class CrowdConditionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_CONDITIONACTIONITEM_CHECKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x693350)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ConditionActionItem_TypeDefinitionIndex = 72708;

	struct alignas(8) ConditionActionItem
	{
		::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* conditions; // 0x10
		::Il2CppArray<::NPCCrowd::AI::AIActionRefItem*>* actions; // 0x18

		/*
		::System::Boolean CheckConditions(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CONDITIONACTIONITEM_CHECKCONDITIONS_OFFSET))(this, context);
		}
		*/
	};
}
