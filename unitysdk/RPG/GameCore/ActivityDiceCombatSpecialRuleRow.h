#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherRuleTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193DA290)
#define RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193DA700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatSpecialRuleRow_TypeDefinitionIndex = 10829;

	class ActivityDiceCombatSpecialRuleRow : public ::System::Object
	{
	public:
		::System::String* SpecialRuleJson; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::Il2CppArray<::System::UInt32>* GlossaryIDList; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::Single>* AIEffectWeightList; // 0x30
		::System::UInt32 SpecialRuleID; // 0x38
		::RPG::GameCore::DiceCombatWeatherShowType ShowType; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::RPG::GameCore::DiceCombatWeatherRuleTag RuleTag; // 0x60
		::System::UInt32 ModifierID; // 0x64

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
