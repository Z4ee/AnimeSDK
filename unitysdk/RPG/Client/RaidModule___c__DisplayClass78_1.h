#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19851D30)
#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_1__GETDEFAULTRAIDTEAMWITHTRIAL_B__1_OFFSET UNITYSDK_OFFSET(0x19851D40)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule___c__DisplayClass78_1_TypeDefinitionIndex = 63794;

	class RaidModule___c__DisplayClass78_1 : public ::System::Object
	{
	public:
		::System::UInt32 realID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultRaidTeamWithTrial_b__1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS78_1__GETDEFAULTRAIDTEAMWITHTRIAL_B__1_OFFSET))(this, a1);
		}
	};
}
