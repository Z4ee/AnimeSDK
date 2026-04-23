#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceImageBubbleMonoView.h"

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA6787E0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_1_OFFSET UNITYSDK_OFFSET(0xA678850)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_OFFSET UNITYSDK_OFFSET(0xA6787F0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA678840)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceFoodBubbleMonoView_TypeDefinitionIndex = 71635;

	class CakeRaceFoodBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceImageBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_7_EF185F49BB791B59()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_7_EF185F49BB791B59_1()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_1_OFFSET))(this);
		}
	};
}
