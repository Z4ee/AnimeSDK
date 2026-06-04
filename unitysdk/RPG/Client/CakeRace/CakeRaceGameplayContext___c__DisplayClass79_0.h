#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace System { class Action; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4856A0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__SHOWHUDPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB48ACC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS79_0__SHOWHUDPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xB48ADC0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameplayContext___c__DisplayClass79_0_TypeDefinitionIndex = 71010;

	class CakeRaceGameplayContext___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRace::CakeRaceGameplayContext* __4__this; // 0x10
		::System::Action* onShowHUDPageCompleted; // 0x18

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
