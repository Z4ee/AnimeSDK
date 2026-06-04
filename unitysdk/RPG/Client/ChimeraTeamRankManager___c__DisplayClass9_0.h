#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamTalkRowWrapper; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C40E0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS9_0__GETTEAMTALKROWDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB6C4E30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c__DisplayClass9_0_TypeDefinitionIndex = 59383;

	class ChimeraTeamRankManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 talkID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTeamTalkRowData_b__0(::RPG::Client::ChimeraTeamTalkRowWrapper* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamTalkRowWrapper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS9_0__GETTEAMTALKROWDATA_B__0_OFFSET))(this, a1);
		}
	};
}
