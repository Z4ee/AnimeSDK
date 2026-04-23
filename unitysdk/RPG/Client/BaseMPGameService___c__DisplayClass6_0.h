#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LobbyMemberData; }

#define RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDA370)
#define RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS6_0__REMINDPREPARE_B__0_OFFSET UNITYSDK_OFFSET(0x9DDB820)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseMPGameService___c__DisplayClass6_0_TypeDefinitionIndex = 62937;

	class BaseMPGameService___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 memberUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemindPrepare_b__0(::RPG::Client::LobbyMemberData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS6_0__REMINDPREPARE_B__0_OFFSET))(this, x);
		}
	};
}
