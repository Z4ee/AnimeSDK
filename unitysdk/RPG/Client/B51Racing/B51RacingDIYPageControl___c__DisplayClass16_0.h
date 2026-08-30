#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDIYPageControl; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC86AB40)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_0___SUBMIT_B__0_OFFSET UNITYSDK_OFFSET(0xC86F810)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYPageControl___c__DisplayClass16_0_TypeDefinitionIndex = 80451;

	class B51RacingDIYPageControl___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDIYPageControl* __4__this; // 0x10
		::System::UInt32 startCarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void __Submit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_0___SUBMIT_B__0_OFFSET))(this);
		}
	};
}
