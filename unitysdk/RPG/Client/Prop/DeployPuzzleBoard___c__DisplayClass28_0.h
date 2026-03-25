#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA077680)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS28_0__PLACESTONE_B__0_OFFSET UNITYSDK_OFFSET(0xA07A4F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBoard___c__DisplayClass28_0_TypeDefinitionIndex = 63980;

	class DeployPuzzleBoard___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::DeployPuzzleBoard* __4__this; // 0x10
		::System::UInt32 basePointPropID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaceStone_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__DISPLAYCLASS28_0__PLACESTONE_B__0_OFFSET))(this);
		}
	};
}
