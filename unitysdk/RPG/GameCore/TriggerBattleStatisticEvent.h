#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StatisticEventType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_METHOD_3_558BC0438E10478C_OFFSET UNITYSDK_OFFSET(0x178BFB80)
#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_METHOD_3_6DF6C35260A48C09_OFFSET UNITYSDK_OFFSET(0x178BFC00)
#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x178BFBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBattleStatisticEvent_TypeDefinitionIndex = 21466;

	class TriggerBattleStatisticEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StatisticEventType EventType; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_558BC0438E10478C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBattleStatisticEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBattleStatisticEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_METHOD_3_558BC0438E10478C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6DF6C35260A48C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBattleStatisticEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBattleStatisticEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_METHOD_3_6DF6C35260A48C09_OFFSET))(a1, a2);
		}
	};
}
