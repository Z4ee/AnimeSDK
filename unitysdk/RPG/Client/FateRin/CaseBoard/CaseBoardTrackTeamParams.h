#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDTRACKTEAMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF7FF0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardTrackTeamParams_TypeDefinitionIndex = 79483;

	class CaseBoardTrackTeamParams : public ::System::Object
	{
	public:
		::System::Boolean IsTrack; // 0x10
		::RPG::GameCore::FateRinCaseBoardTeamType TeamType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDTRACKTEAMPARAMS__CTOR_OFFSET))(this);
		}
	};
}
