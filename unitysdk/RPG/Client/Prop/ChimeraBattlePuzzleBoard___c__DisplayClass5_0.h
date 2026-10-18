#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDC45C30)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS5_0__GOTONEXTSTREET_B__0_OFFSET UNITYSDK_OFFSET(0xDC49C70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleBoard___c__DisplayClass5_0_TypeDefinitionIndex = 78427;

	class ChimeraBattlePuzzleBoard___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoNextStreet_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS5_0__GOTONEXTSTREET_B__0_OFFSET))(this);
		}
	};
}
