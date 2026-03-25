#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherRuleTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EA8DB0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA9230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatSpecialRuleRow_TypeDefinitionIndex = 10550;

	class ActivityDiceCombatSpecialRuleRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* GlossaryIDList; // 0x18
		::System::String* SpecialRuleJson; // 0x20
		::Il2CppArray<::System::UInt32>* ParamList; // 0x28
		::Il2CppArray<::System::Single>* AIEffectWeightList; // 0x30
		::RPG::Client::TextID Desc; // 0x38
		::RPG::GameCore::DiceCombatWeatherRuleTag RuleTag; // 0x48
		::System::UInt32 ModifierID; // 0x4C
		::RPG::GameCore::DiceCombatWeatherShowType ShowType; // 0x50
		::System::UInt32 SpecialRuleID; // 0x54
		::RPG::Client::TextID Name; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
