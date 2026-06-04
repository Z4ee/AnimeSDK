#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC86F1E0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS28_1__MERGESAMEUIDCARD_B__1_OFFSET UNITYSDK_OFFSET(0xC873990)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c__DisplayClass28_1_TypeDefinitionIndex = 63443;

	class RogueTournUtils___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaRoomCardInGame* curCard; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _MergeSameUIDCard_b__1(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS28_1__MERGESAMEUIDCARD_B__1_OFFSET))(this, a1);
		}
	};
}
