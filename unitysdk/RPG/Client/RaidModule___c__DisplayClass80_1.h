#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS80_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDDFF870)
#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS80_1__GETDEFAULTRAIDTEAMWITHTRIAL_B__1_OFFSET UNITYSDK_OFFSET(0xDE018F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule___c__DisplayClass80_1_TypeDefinitionIndex = 66779;

	class RaidModule___c__DisplayClass80_1 : public ::System::Object
	{
	public:
		::System::UInt32 realID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS80_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultRaidTeamWithTrial_b__1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS80_1__GETDEFAULTRAIDTEAMWITHTRIAL_B__1_OFFSET))(this, a1);
		}
	};
}
