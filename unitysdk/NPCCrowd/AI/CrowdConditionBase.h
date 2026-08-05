#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"
#include "unitysdk/NPCCrowd/AI/EConditionType.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_CROWDCONDITIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10B38DE0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdConditionBase_TypeDefinitionIndex = 68842;

	class CrowdConditionBase : public ::System::Object
	{
	public:
		::NPCCrowd::AI::EConditionType condition; // 0x10

		::System::Void _ctor(::NPCCrowd::AI::EConditionType condition)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::EConditionType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDCONDITIONBASE__CTOR_OFFSET))(this, condition);
		}
	};
}
