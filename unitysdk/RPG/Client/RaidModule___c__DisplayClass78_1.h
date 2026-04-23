#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAF6FFB0)
#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_1__GETDEFAULTRAIDTEAMWITHTRIAL_B__1_OFFSET UNITYSDK_OFFSET(0xAF71A20)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule___c__DisplayClass78_1_TypeDefinitionIndex = 61495;

	class RaidModule___c__DisplayClass78_1 : public ::System::Object
	{
	public:
		::System::UInt32 realID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultRaidTeamWithTrial_b__1(::RPG::Client::IAvatarInfoProvider* trialAvatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_1__GETDEFAULTRAIDTEAMWITHTRIAL_B__1_OFFSET))(this, trialAvatar);
		}
	};
}
