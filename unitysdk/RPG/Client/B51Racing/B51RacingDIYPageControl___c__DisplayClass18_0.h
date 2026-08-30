#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1416;
namespace RPG::Client::B51Racing { class B51RacingDIYPageControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF38E0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS18_0___SUBMITCHALLENGEDIY_B__0_OFFSET UNITYSDK_OFFSET(0x19EF84E0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYPageControl___c__DisplayClass18_0_TypeDefinitionIndex = 80452;

	class B51RacingDIYPageControl___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1416* challengeService; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* equippedPartIds; // 0x18
		::RPG::Client::B51Racing::B51RacingDIYPageControl* __4__this; // 0x20
		::System::UInt32 number; // 0x28
		::System::Boolean isManualExit; // 0x2C
		::System::UInt32 paintID; // 0x30
		::System::UInt32 selectedCarID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __SubmitChallengeDIY_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS18_0___SUBMITCHALLENGEDIY_B__0_OFFSET))(this);
		}
	};
}
