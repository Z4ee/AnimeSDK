#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace System { class Action; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE8720)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__SHOWHUDPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x9EEDA00)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__SHOWHUDPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x9EEDB00)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameplayContext___c__DisplayClass79_0_TypeDefinitionIndex = 70198;

	class CakeRaceGameplayContext___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Action* onShowHUDPageCompleted; // 0x10
		::RPG::Client::CakeRace::CakeRaceGameplayContext* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowHUDPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__SHOWHUDPAGE_B__0_OFFSET))(this);
		}

		::System::Void _ShowHUDPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__SHOWHUDPAGE_B__1_OFFSET))(this);
		}
	};
}
