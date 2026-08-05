#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/NPCCrowd/AI/RandomSelectType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PopulationTimeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_POPULATIONCONFIG_GETTIMECONFIG_1_OFFSET UNITYSDK_OFFSET(0xF84FF20)
#define NPCCROWD_AI_POPULATIONCONFIG_GETTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xF84FDD0)
#define NPCCROWD_AI_POPULATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF8500D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationConfig_TypeDefinitionIndex = 71131;

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

		::NPCCrowd::AI::PopulationTimeConfig* GetTimeConfig_1(::ProtoScript::TimePeriodType timePeriodID, ::MoleMole::Config::WeatherType weatherType, ::System::Boolean& weatherMatched)
		{
			return ((::NPCCrowd::AI::PopulationTimeConfig*(*)(::PVOID, ::ProtoScript::TimePeriodType, ::MoleMole::Config::WeatherType, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONCONFIG_GETTIMECONFIG_1_OFFSET))(this, timePeriodID, weatherType, weatherMatched);
		}
	};
}
