#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/RandomSelectType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PopulationTimeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_POPULATIONCONFIG_GETTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xD22EE10)
#define NPCCROWD_AI_POPULATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD22EF60)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationConfig_TypeDefinitionIndex = 67512;

	class PopulationConfig : public ::System::Object
	{
	public:
		::System::Int32 populationID; // 0x10
		::NPCCrowd::AI::RandomSelectType randomSelectType; // 0x14
		::System::Int32 npcCommonTagID; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PopulationTimeConfig*>* timeConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONCONFIG__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PopulationTimeConfig* GetTimeConfig(::ProtoScript::TimePeriodType timePeriodID)
		{
			return ((::NPCCrowd::AI::PopulationTimeConfig*(*)(::PVOID, ::ProtoScript::TimePeriodType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONCONFIG_GETTIMECONFIG_OFFSET))(this, timePeriodID);
		}
	};
}
