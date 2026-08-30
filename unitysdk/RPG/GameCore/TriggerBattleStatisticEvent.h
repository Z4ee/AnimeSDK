#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StatisticEventType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_METHOD_3_0B6D25F2A1C41754_OFFSET UNITYSDK_OFFSET(0x1D5F09F0)
#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_METHOD_3_6DF6C35260A48C09_OFFSET UNITYSDK_OFFSET(0x1D5F0A30)
#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F0A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBattleStatisticEvent_TypeDefinitionIndex = 22976;

	class TriggerBattleStatisticEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StatisticEventType EventType; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B6D25F2A1C41754(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBattleStatisticEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBattleStatisticEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_METHOD_3_0B6D25F2A1C41754_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6DF6C35260A48C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBattleStatisticEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBattleStatisticEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_METHOD_3_6DF6C35260A48C09_OFFSET))(a1, a2);
		}
	};
}
