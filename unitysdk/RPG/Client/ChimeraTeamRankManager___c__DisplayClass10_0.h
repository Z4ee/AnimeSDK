#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamRankManager; }
namespace RPG::Client { class ChimeraTeamTalkRowWrapper; }
namespace RPG::Client { class ChimeraWorkRoundData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF1FC0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS10_0__GETCURRENTROUNDTEAMTALKROWDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1BBF28C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c__DisplayClass10_0_TypeDefinitionIndex = 63501;

	class ChimeraTeamRankManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraTeamRankManager* __4__this; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::Client::ChimeraTeamTalkRowWrapper*>* promise; // 0x18
		::System::UInt32 teamID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCurrentRoundTeamTalkRowData_b__0(::RPG::Client::ChimeraWorkRoundData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS10_0__GETCURRENTROUNDTEAMTALKROWDATA_B__0_OFFSET))(this, a1);
		}
	};
}
