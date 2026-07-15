#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class FateRinSingleDeckEditViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A376B40)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__DISPLAYCLASS7_0___SETCURRENTDECK_B__0_OFFSET UNITYSDK_OFFSET(0x1A379250)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__DISPLAYCLASS7_0___SETCURRENTDECK_B__1_OFFSET UNITYSDK_OFFSET(0x1A3792C0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinSingleDeckEditViewModel___c__DisplayClass7_0_TypeDefinitionIndex = 76218;

	class FateRinSingleDeckEditViewModel___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel* __4__this; // 0x10
		::System::UInt32 blockUID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void __SetCurrentDeck_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__DISPLAYCLASS7_0___SETCURRENTDECK_B__0_OFFSET))(this);
		}

		::System::Void __SetCurrentDeck_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__DISPLAYCLASS7_0___SETCURRENTDECK_B__1_OFFSET))(this);
		}
	};
}
