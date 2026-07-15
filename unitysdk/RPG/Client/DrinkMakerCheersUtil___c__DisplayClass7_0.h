#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DRINKMAKERCHEERSUTIL___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17709520)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL___C__DISPLAYCLASS7_0__PLAYTYPEDPERFORMANCEWITHLOCKINPUT_B__0_OFFSET UNITYSDK_OFFSET(0x17709630)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersUtil___c__DisplayClass7_0_TypeDefinitionIndex = 60838;

	class DrinkMakerCheersUtil___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* onPerformanceEnd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTypeDPerformanceWithLockInput_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL___C__DISPLAYCLASS7_0__PLAYTYPEDPERFORMANCEWITHLOCKINPUT_B__0_OFFSET))(this);
		}
	};
}
