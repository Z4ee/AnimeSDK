#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherRuleTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAE2D90)
#define RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE3200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatSpecialRuleRow_TypeDefinitionIndex = 10879;

	class ActivityDiceCombatSpecialRuleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* AIEffectWeightList; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* SpecialRuleJson; // 0x28
		::Il2CppArray<::System::UInt32>* GlossaryIDList; // 0x30
		::RPG::Client::TextID Desc; // 0x38
		::RPG::GameCore::DiceCombatWeatherShowType ShowType; // 0x48
		::RPG::GameCore::DiceCombatWeatherRuleTag RuleTag; // 0x4C
		::RPG::Client::TextID Name; // 0x50
		::System::UInt32 ModifierID; // 0x60
		::System::UInt32 SpecialRuleID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
