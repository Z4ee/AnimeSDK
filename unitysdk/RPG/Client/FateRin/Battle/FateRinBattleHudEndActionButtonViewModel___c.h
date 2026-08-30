#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF78170)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCF781B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__5_1_OFFSET UNITYSDK_OFFSET(0xCF781C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__5_2_OFFSET UNITYSDK_OFFSET(0xCF781F0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEndActionButtonViewModel___c_TypeDefinitionIndex = 79580;

	class FateRinBattleHudEndActionButtonViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudEndActionButtonViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66F10);
		}
		static ::RPG::Client::FateRin::Battle::FateRinBattleHudEndActionButtonViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Battle::FateRinBattleHudEndActionButtonViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudEndActionButtonViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66F18);
		}
		static ::System::Action** StaticGet___9__5_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudEndActionButtonViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void __EndPlayerAction_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__5_1_OFFSET))(this);
		}

		::System::Void __EndPlayerAction_b__5_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__5_2_OFFSET))(this);
		}
	};
}
