#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_CARDLAYOUTENTRY_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_CARDLAYOUTENTRY_GET_CARD_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_CARDLAYOUTENTRY_GET_SPREADOFFSET_OFFSET UNITYSDK_OFFSET(0x26390)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_CARDLAYOUTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF10)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinBattleHudHandCardLayout_CardLayoutEntry_TypeDefinitionIndex = 79346;

	struct alignas(8) FateRinBattleHudHandCardLayout_CardLayoutEntry
	{
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* _Card_k__BackingField; // 0x10
		::System::Single _Angle_k__BackingField; // 0x18
		::UnityEngine::Vector2 _SpreadOffset_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Single a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_CARDLAYOUTENTRY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* get_Card()
		{
			return ((::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_CARDLAYOUTENTRY_GET_CARD_OFFSET))(this);
		}

		::System::Single get_Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_CARDLAYOUTENTRY_GET_ANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_SpreadOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDHANDCARDLAYOUT_CARDLAYOUTENTRY_GET_SPREADOFFSET_OFFSET))(this);
		}
	};
}
