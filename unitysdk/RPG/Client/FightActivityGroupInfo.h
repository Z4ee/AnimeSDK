#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityFightGroupRow; }

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityGroupInfo_TypeDefinitionIndex = 61251;

	struct alignas(8) FightActivityGroupInfo
	{
		::RPG::GameCore::ActivityFightGroupRow* GroupRow; // 0x10
		::RPG::Client::ScheduleData* ScheduleData; // 0x18
	};
}
