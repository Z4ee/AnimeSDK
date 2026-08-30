#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class StableSystemPuzzlePillarAndPedestal; }

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDD330F0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL___C__DISPLAYCLASS0_0__INITPEDESTAL_B__0_OFFSET UNITYSDK_OFFSET(0xDD334B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzlePedestal___c__DisplayClass0_0_TypeDefinitionIndex = 78405;

	class StableSystemPuzzlePedestal___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal* pillarAndPedestal; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitPedestal_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL___C__DISPLAYCLASS0_0__INITPEDESTAL_B__0_OFFSET))(this);
		}
	};
}
