#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MemberData; }

#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA2815E0)
#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_2__GETDEFAULTRAIDTEAMWITHTRIAL_B__2_OFFSET UNITYSDK_OFFSET(0xA2830E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule___c__DisplayClass78_2_TypeDefinitionIndex = 54333;

	class RaidModule___c__DisplayClass78_2 : public ::System::Object
	{
	public:
		::RPG::Client::MemberData* memberData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultRaidTeamWithTrial_b__2(::RPG::Client::IAvatarInfoProvider* trialAvatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_2__GETDEFAULTRAIDTEAMWITHTRIAL_B__2_OFFSET))(this, trialAvatar);
		}
	};
}
