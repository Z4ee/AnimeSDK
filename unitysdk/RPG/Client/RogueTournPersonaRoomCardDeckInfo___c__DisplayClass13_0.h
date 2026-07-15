#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA6E850)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO___C__DISPLAYCLASS13_0___GETCARDSBYPILE_B__0_OFFSET UNITYSDK_OFFSET(0x1AA6E9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardDeckInfo___c__DisplayClass13_0_TypeDefinitionIndex = 64735;

	class RogueTournPersonaRoomCardDeckInfo___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaRoomCardPile pile; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCardsByPile_b__0(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO___C__DISPLAYCLASS13_0___GETCARDSBYPILE_B__0_OFFSET))(this, a1);
		}
	};
}
