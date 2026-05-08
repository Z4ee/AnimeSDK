#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"

#define NPCCROWD_AI_TRUECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0xF4E8990)
#define NPCCROWD_AI_TRUECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xF4E8980)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TrueCondition_TypeDefinitionIndex = 73926;

	class TrueCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_TRUECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_TRUECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
