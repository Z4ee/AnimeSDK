#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceTextBubbleMonoView.h"

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xBDC4A00)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_1_OFFSET UNITYSDK_OFFSET(0xBDC4A80)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_OFFSET UNITYSDK_OFFSET(0xBDC4A10)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC4A60)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceSkillTextBubbleMonoView_TypeDefinitionIndex = 72661;

	class CakeRaceSkillTextBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceTextBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_7_EF185F49BB791B59()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_7_EF185F49BB791B59_1()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_1_OFFSET))(this);
		}
	};
}
