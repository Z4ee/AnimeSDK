#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class LaserTurnablePuzzleRing; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x148408F0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH___C__DISPLAYCLASS11_0__ONROTATESELECTCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x14840980)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleSwitch___c__DisplayClass11_0_TypeDefinitionIndex = 74718;

	class LaserTurnablePuzzleSwitch___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::LaserTurnablePuzzleRing* ring; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRotateSelectClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH___C__DISPLAYCLASS11_0__ONROTATESELECTCLICK_B__1_OFFSET))(this);
		}
	};
}
