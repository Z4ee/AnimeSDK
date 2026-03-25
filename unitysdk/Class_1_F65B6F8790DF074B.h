#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBattleAbilityNodeState.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define CLASS_1_F65B6F8790DF074B_METHOD_1_14D958B8F9D7CDC6_OFFSET UNITYSDK_OFFSET(0xA212DF0)
#define CLASS_1_F65B6F8790DF074B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA212E10)
#define CLASS_1_F65B6F8790DF074B__CTOR_OFFSET UNITYSDK_OFFSET(0xA212E00)

inline static constexpr unsigned int Class_1_F65B6F8790DF074B_TypeDefinitionIndex = 63321;

class Class_1_F65B6F8790DF074B : public ::System::Object
{
public:
	::Class_1_36006FC25F5DDC69* Field_1_1; // 0x10
	::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* Field_1_0; // 0x18
	::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_F65B6F8790DF074B__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState Method_1_14D958B8F9D7CDC6()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65B6F8790DF074B_METHOD_1_14D958B8F9D7CDC6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65B6F8790DF074B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
