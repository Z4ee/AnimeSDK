#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class LaserTurnablePuzzleSwitch; }
namespace RPG::Client::Prop { class LaserTurnableSelectParamData; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C4FF0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH___C__DISPLAYCLASS1_0__INITSWITCH_B__1_OFFSET UNITYSDK_OFFSET(0xA0C5F30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleSwitch___c__DisplayClass1_0_TypeDefinitionIndex = 64125;

	class LaserTurnablePuzzleSwitch___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::LaserTurnablePuzzleSwitch* __4__this; // 0x10
		::RPG::Client::Prop::LaserTurnableSelectParamData* p; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitSwitch_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH___C__DISPLAYCLASS1_0__INITSWITCH_B__1_OFFSET))(this);
		}
	};
}
