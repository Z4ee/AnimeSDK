#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }

#define RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE19C0C0)
#define RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS7_0__GETMAINLINETEAM_B__0_OFFSET UNITYSDK_OFFSET(0xE1A90A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule___c__DisplayClass7_0_TypeDefinitionIndex = 68125;

	class TeamModule___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMainlineTeam_b__0(::RPG::Client::TeamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS7_0__GETMAINLINETEAM_B__0_OFFSET))(this, a1);
		}
	};
}
