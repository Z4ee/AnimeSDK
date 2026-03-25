#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }

#define RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA583390)
#define RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS5_0__GETMAINLINETEAM_B__0_OFFSET UNITYSDK_OFFSET(0xA5833A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule___c__DisplayClass5_0_TypeDefinitionIndex = 55617;

	class TeamModule___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMainlineTeam_b__0(::RPG::Client::TeamData* team)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS5_0__GETMAINLINETEAM_B__0_OFFSET))(this, team);
		}
	};
}
