#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client { class CakeRaceLobby; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB480360)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS72_0___HANDLEEXITGAME_B__0_OFFSET UNITYSDK_OFFSET(0xB481C90)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS72_0___HANDLEEXITGAME_B__1_OFFSET UNITYSDK_OFFSET(0xB481CC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS72_0___HANDLEEXITGAME_B__2_OFFSET UNITYSDK_OFFSET(0xB481D40)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow___c__DisplayClass72_0_TypeDefinitionIndex = 71024;

	class CakeRaceGameFlow___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceFieldData* fieldData; // 0x10
		::RPG::Client::CakeRaceLobby* lobby; // 0x18
		::RPG::Client::CakeRace::CakeRaceGameFlow* __4__this; // 0x20
		::RPG::Client::CakeRace::CakeRaceUIType targetUIType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleExitGame_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS72_0___HANDLEEXITGAME_B__0_OFFSET))(this);
		}

		::System::Void __HandleExitGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS72_0___HANDLEEXITGAME_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleExitGame_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS72_0___HANDLEEXITGAME_B__2_OFFSET))(this);
		}
	};
}
