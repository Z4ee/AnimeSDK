#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ActivityHipplenStatConfigRow; }

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int StatusViewData_TypeDefinitionIndex = 75189;

	struct alignas(8) StatusViewData
	{
		::RPG::GameCore::HipplenStatType StatType; // 0x10
		::RPG::GameCore::ActivityHipplenStatConfigRow* StatConfigRow; // 0x18
		::System::Int32 Value; // 0x20
	};
}
