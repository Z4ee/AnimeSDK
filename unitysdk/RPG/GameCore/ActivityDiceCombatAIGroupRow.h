#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0DD0086A20E51DD0;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18606E70)
#define RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18607270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatAIGroupRow_TypeDefinitionIndex = 10767;

	class ActivityDiceCombatAIGroupRow : public ::System::Object
	{
	public:
		::Class_1_0DD0086A20E51DD0* ExchangeWaitTimeRange; // 0x10
		::Class_1_0DD0086A20E51DD0* PrepareCancelWaitTimeRange; // 0x18
		::Class_1_0DD0086A20E51DD0* PrepareFinishWaitTimeRange; // 0x20
		::Class_1_0DD0086A20E51DD0* SelectTimeRange; // 0x28
		::Class_1_0DD0086A20E51DD0* BuyTacticsCardWaitTimeRange; // 0x30
		::Class_1_0DD0086A20E51DD0* UseTacticsCardWaitTimeRange; // 0x38
		::System::Single SelectWrongRate; // 0x40
		::System::UInt32 AIGroupID; // 0x44
		::System::Single ColorfulDiceWeight; // 0x48
		::System::UInt32 RerollMaxDefend; // 0x4C
		::System::UInt32 RerollMaxAttack; // 0x50
		::System::Boolean CanUseTactics; // 0x54
		::System::Single SpecialRuleWeight; // 0x58
		::System::Single SkillWeight; // 0x5C
		::System::Single Quantile; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
