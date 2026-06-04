#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC86F1D0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS28_0__MERGESAMEUIDCARD_B__0_OFFSET UNITYSDK_OFFSET(0xC873960)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c__DisplayClass28_0_TypeDefinitionIndex = 63442;

	class RogueTournUtils___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaRoomCardInGame* curCard; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MergeSameUIDCard_b__0(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS28_0__MERGESAMEUIDCARD_B__0_OFFSET))(this, a1);
		}
	};
}
