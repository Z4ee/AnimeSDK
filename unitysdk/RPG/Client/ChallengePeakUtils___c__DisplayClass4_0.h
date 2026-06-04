#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB577B20)
#define RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS4_0__STARTGAME_B__0_OFFSET UNITYSDK_OFFSET(0xB5781F0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS4_0__STARTGAME_B__1_OFFSET UNITYSDK_OFFSET(0xB5782D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakUtils___c__DisplayClass4_0_TypeDefinitionIndex = 59142;

	class ChallengePeakUtils___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 blockID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartGame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS4_0__STARTGAME_B__0_OFFSET))(this);
		}

		::System::Void _StartGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS4_0__STARTGAME_B__1_OFFSET))(this);
		}
	};
}
