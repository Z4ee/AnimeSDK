#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceStartGameData; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE3580)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS70_0___HANDLESTARTGAME_B__0_OFFSET UNITYSDK_OFFSET(0x9EE4DC0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow___c__DisplayClass70_0_TypeDefinitionIndex = 70211;

	class CakeRaceGameFlow___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRace::CakeRaceGameFlow* __4__this; // 0x10
		::RPG::Client::CakeRaceStartGameData* startGameData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleStartGame_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS70_0___HANDLESTARTGAME_B__0_OFFSET))(this);
		}
	};
}
