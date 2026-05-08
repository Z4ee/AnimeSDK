#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_POPULATIONTIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB52BF40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationTimeConfig_TypeDefinitionIndex = 55727;

	class PopulationTimeConfig : public ::System::Object
	{
	public:
		::System::Int32 maxCount; // 0x10
		::ProtoScript::TimePeriodType timePeriodType; // 0x14
		::System::Collections::Generic::List_1<::System::Int32>* npcPoolIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTIMECONFIG__CTOR_OFFSET))(this);
		}
	};
}
