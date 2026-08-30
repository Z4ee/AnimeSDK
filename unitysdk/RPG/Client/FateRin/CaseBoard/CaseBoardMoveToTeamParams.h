#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDMOVETOTEAMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF5310)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardMoveToTeamParams_TypeDefinitionIndex = 79479;

	class CaseBoardMoveToTeamParams : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* BaseInfo; // 0x10
		::RPG::GameCore::FateRinCaseBoardTeamType TeamType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDMOVETOTEAMPARAMS__CTOR_OFFSET))(this);
		}
	};
}
