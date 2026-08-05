#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_FATTRACTORBASE_GETENABLE_OFFSET UNITYSDK_OFFSET(0x72A230)
#define NPCCROWD_AI_FATTRACTORBASE_QUERYENABLE_OFFSET UNITYSDK_OFFSET(0x72A280)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FAttractorBase_TypeDefinitionIndex = 60944;

	struct alignas(4) FAttractorBase
	{
		::System::Int32 handler; // 0x10
		::System::Boolean externalEnable; // 0x14
		::System::Single queryCDTimer; // 0x18
		::System::Boolean conditionEnable; // 0x1C

		::System::Boolean GetEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FATTRACTORBASE_GETENABLE_OFFSET))(this);
		}

		::System::Boolean QueryEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FATTRACTORBASE_QUERYENABLE_OFFSET))(this);
		}
	};
}
