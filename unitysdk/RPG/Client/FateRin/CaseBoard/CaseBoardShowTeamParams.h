#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWTEAMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A37CB40)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardShowTeamParams_TypeDefinitionIndex = 75848;

	class CaseBoardShowTeamParams : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* EffectList; // 0x10
		::RPG::Client::FateRin::CaseBoard::TeamViewModel* Team; // 0x18
		::System::Boolean IsShow; // 0x20
		::System::Boolean NeedWaitFinish; // 0x21
		::RPG::GameCore::FateRinCaseBoardTeamType TeamType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWTEAMPARAMS__CTOR_OFFSET))(this);
		}
	};
}
