#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAACA60)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS64_0___HANDLESHOWMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x1AAAE140)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow___c__DisplayClass64_0_TypeDefinitionIndex = 72534;

	class CakeRaceGameFlow___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceFieldData* fieldData; // 0x10
		::RPG::Client::CakeRace::CakeRaceGameFlow* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowMatch_b__0(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS64_0___HANDLESHOWMATCH_B__0_OFFSET))(this, a1);
		}
	};
}
