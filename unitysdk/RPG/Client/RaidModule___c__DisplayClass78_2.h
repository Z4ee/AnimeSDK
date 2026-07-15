#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MemberData; }

#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19851D60)
#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_2__GETDEFAULTRAIDTEAMWITHTRIAL_B__2_OFFSET UNITYSDK_OFFSET(0x19851D70)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule___c__DisplayClass78_2_TypeDefinitionIndex = 63795;

	class RaidModule___c__DisplayClass78_2 : public ::System::Object
	{
	public:
		::RPG::Client::MemberData* memberData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultRaidTeamWithTrial_b__2(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_2__GETDEFAULTRAIDTEAMWITHTRIAL_B__2_OFFSET))(this, a1);
		}
	};
}
