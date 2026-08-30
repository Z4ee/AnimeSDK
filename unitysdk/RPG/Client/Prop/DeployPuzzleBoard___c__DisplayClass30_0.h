#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDC46660)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS30_0__SWAPSTONE_B__0_OFFSET UNITYSDK_OFFSET(0xDC49800)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS30_0__SWAPSTONE_B__1_OFFSET UNITYSDK_OFFSET(0xDC49970)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBoard___c__DisplayClass30_0_TypeDefinitionIndex = 78062;

	class DeployPuzzleBoard___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::DeployPuzzleBoard* __4__this; // 0x10
		::System::UInt32 stonePropID; // 0x18
		::System::UInt32 currentHoldStonePropID; // 0x1C
		::System::UInt32 basePointPropID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwapStone_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS30_0__SWAPSTONE_B__0_OFFSET))(this);
		}

		::System::Void _SwapStone_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS30_0__SWAPSTONE_B__1_OFFSET))(this);
		}
	};
}
