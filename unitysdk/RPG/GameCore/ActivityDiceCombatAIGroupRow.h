#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0DD0086A20E51DD0;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EA65B0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA6890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatAIGroupRow_TypeDefinitionIndex = 10543;

	class ActivityDiceCombatAIGroupRow : public ::System::Object
	{
	public:
		::Class_1_0DD0086A20E51DD0* SelectTimeRange; // 0x10
		::System::Single SelectWrongRate; // 0x18
		::System::UInt32 AIGroupID; // 0x1C
		::System::Single Quantile; // 0x20
		::System::Single SpecialRuleWeight; // 0x24
		::System::Single ColorfulDiceWeight; // 0x28
		::System::UInt32 RerollMaxDefend; // 0x2C
		::System::Single SkillWeight; // 0x30
		::System::UInt32 RerollMaxAttack; // 0x34

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
