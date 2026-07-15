#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4557C77922A20D8C;
class Class_1_C85C4DAB350DD5FC_2;

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49E0C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1B49EEA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1B49EF10)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0x1B49EF80)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardDeckViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 76177;

	class FateRinCardDeckViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Class_1_4557C77922A20D8C* cardService; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::Class_1_C85C4DAB350DD5FC_2* __ctor_b__0(::System::UInt32 a1)
		{
			return ((::Class_1_C85C4DAB350DD5FC_2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET))(this, a1);
		}

		::Class_1_C85C4DAB350DD5FC_2* __ctor_b__1(::System::UInt32 a1)
		{
			return ((::Class_1_C85C4DAB350DD5FC_2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__1_OFFSET))(this, a1);
		}

		::Class_1_C85C4DAB350DD5FC_2* __ctor_b__2(::System::UInt32 a1)
		{
			return ((::Class_1_C85C4DAB350DD5FC_2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__2_OFFSET))(this, a1);
		}
	};
}
