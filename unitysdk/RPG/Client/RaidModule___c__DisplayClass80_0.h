#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MemberData; }

#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6417C0)
#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS80_0__GETDEFAULTRAIDTEAMWITHTRIAL_B__0_OFFSET UNITYSDK_OFFSET(0x1B6417D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule___c__DisplayClass80_0_TypeDefinitionIndex = 66778;

	class RaidModule___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::RPG::Client::MemberData* memberData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultRaidTeamWithTrial_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS80_0__GETDEFAULTRAIDTEAMWITHTRIAL_B__0_OFFSET))(this, a1);
		}
	};
}
