#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xE76D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE76A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xE7630)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE7620)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKPENDINGFLYIN_OFFSET UNITYSDK_OFFSET(0xC200)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKPENDINGREMOVE_OFFSET UNITYSDK_OFFSET(0xE7590)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKSKIPLAYOUT_OFFSET UNITYSDK_OFFSET(0xE75B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKSKIPREFLOW_OFFSET UNITYSDK_OFFSET(0xE75D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKUNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x14E10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCEBC340)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCEBC2A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xE7600)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKPENDINGFLYIN_OFFSET UNITYSDK_OFFSET(0xE7580)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKPENDINGREMOVE_OFFSET UNITYSDK_OFFSET(0xE75A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKSKIPLAYOUT_OFFSET UNITYSDK_OFFSET(0xE75C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKSKIPREFLOW_OFFSET UNITYSDK_OFFSET(0xE75E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKUNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x14E20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE75F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEBCE80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0xE7560)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudCardAreaViewModel_CardPresentationFlags_TypeDefinitionIndex = 80888;

	struct alignas(1) FateRinBattleHudCardAreaViewModel_CardPresentationFlags
	{
		static ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags* StaticGet_Leave()
		{
			return (::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudCardAreaViewModel_CardPresentationFlags_TypeDefinitionIndex)->GetStaticField(0x12640);
		}
		static ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags* StaticGet_UninteractableOnly()
		{
			return (::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudCardAreaViewModel_CardPresentationFlags_TypeDefinitionIndex)->GetStaticField(0x12645);
		}
		static ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags* StaticGet_FlyIn()
		{
			return (::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudCardAreaViewModel_CardPresentationFlags_TypeDefinitionIndex)->GetStaticField(0x1264A);
		}
		static ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags* StaticGet_PlayLeave()
		{
			return (::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags*)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudCardAreaViewModel_CardPresentationFlags_TypeDefinitionIndex)->GetStaticField(0x1264F);
		}
		::System::Boolean _MarkPendingFlyIn_k__BackingField; // 0x10
		::System::Boolean _MarkPendingRemove_k__BackingField; // 0x11
		::System::Boolean _MarkSkipLayout_k__BackingField; // 0x12
		::System::Boolean _MarkSkipReflow_k__BackingField; // 0x13
		::System::Boolean _MarkUninteractable_k__BackingField; // 0x14

		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS__CCTOR_OFFSET))();
		}

		::System::Boolean get_MarkPendingFlyIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKPENDINGFLYIN_OFFSET))(this);
		}

		::System::Void set_MarkPendingFlyIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKPENDINGFLYIN_OFFSET))(this, a1);
		}

		::System::Boolean get_MarkPendingRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKPENDINGREMOVE_OFFSET))(this);
		}

		::System::Void set_MarkPendingRemove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKPENDINGREMOVE_OFFSET))(this, a1);
		}

		::System::Boolean get_MarkSkipLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKSKIPLAYOUT_OFFSET))(this);
		}

		::System::Void set_MarkSkipLayout(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKSKIPLAYOUT_OFFSET))(this, a1);
		}

		::System::Boolean get_MarkSkipReflow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKSKIPREFLOW_OFFSET))(this);
		}

		::System::Void set_MarkSkipReflow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKSKIPREFLOW_OFFSET))(this, a1);
		}

		::System::Boolean get_MarkUninteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GET_MARKUNINTERACTABLE_OFFSET))(this);
		}

		::System::Void set_MarkUninteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_SET_MARKUNINTERACTABLE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags, ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags, ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Deconstruct(::System::Boolean& a1, ::System::Boolean& a2, ::System::Boolean& a3, ::System::Boolean& a4, ::System::Boolean& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONFLAGS_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
