#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamData; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C3E10)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS6_0__GETCHIMERATEAMDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB6C4DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c__DisplayClass6_0_TypeDefinitionIndex = 59380;

	class ChimeraTeamRankManager___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 teamID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChimeraTeamData_b__0(::RPG::Client::ChimeraTeamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS6_0__GETCHIMERATEAMDATA_B__0_OFFSET))(this, a1);
		}
	};
}
