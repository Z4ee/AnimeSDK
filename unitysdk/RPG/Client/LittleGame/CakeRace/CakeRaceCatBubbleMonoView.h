#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceImageBubbleMonoView.h"

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x9986AB0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_1_OFFSET UNITYSDK_OFFSET(0x9986B30)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_OFFSET UNITYSDK_OFFSET(0x9986AC0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9986B10)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatBubbleMonoView_TypeDefinitionIndex = 63594;

	class CakeRaceCatBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceImageBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_7_EF185F49BB791B59()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_7_EF185F49BB791B59_1()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_METHOD_7_EF185F49BB791B59_1_OFFSET))(this);
		}
	};
}
