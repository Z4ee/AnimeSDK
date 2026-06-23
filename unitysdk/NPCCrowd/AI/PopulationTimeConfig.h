#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/NPCCrowd/AI/PopulationPoolRef.h"
#include "unitysdk/NPCCrowd/NPCCrowdUtils_CrowdWeatherTypeFlag.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_POPULATIONTIMECONFIG_GETPOOLREFS_OFFSET UNITYSDK_OFFSET(0xFF821F0)
#define NPCCROWD_AI_POPULATIONTIMECONFIG_ISWEATHERMATCHED_OFFSET UNITYSDK_OFFSET(0xFF82290)
#define NPCCROWD_AI_POPULATIONTIMECONFIG_TRYGETOVERRIDEMOVEMENTSTYLE_OFFSET UNITYSDK_OFFSET(0xFF82320)
#define NPCCROWD_AI_POPULATIONTIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFF82390)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationTimeConfig_TypeDefinitionIndex = 59467;

	class PopulationTimeConfig : public ::System::Object
	{
	public:
		::System::Int32 maxCount; // 0x10
		::ProtoScript::TimePeriodType timePeriodType; // 0x14
		::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag weatherFlags; // 0x18
		::System::Boolean overrideMovementStyle; // 0x1C
		::System::String* movementStyle; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PopulationPoolRef>* npcPools; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTIMECONFIG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::AI::PopulationPoolRef>* GetPoolRefs()
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::PopulationPoolRef>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTIMECONFIG_GETPOOLREFS_OFFSET))(this);
		}

		::System::Boolean IsWeatherMatched(::MoleMole::Config::WeatherType weatherType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTIMECONFIG_ISWEATHERMATCHED_OFFSET))(this, weatherType);
		}

		::System::Boolean TryGetOverrideMovementStyle(::System::String*& style)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTIMECONFIG_TRYGETOVERRIDEMOVEMENTSTYLE_OFFSET))(this, style);
		}
	};
}
