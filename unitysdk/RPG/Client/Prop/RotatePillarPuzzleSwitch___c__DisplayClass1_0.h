#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RotatePillarPuzzleSwitch; }
namespace RPG::Client::Prop { class RotateSelectParamData; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAEC1E80)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH___C__DISPLAYCLASS1_0__INITSWITCH_B__1_OFFSET UNITYSDK_OFFSET(0xAEC2F90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleSwitch___c__DisplayClass1_0_TypeDefinitionIndex = 72312;

	class RotatePillarPuzzleSwitch___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RotateSelectParamData* p; // 0x10
		::RPG::Client::Prop::RotatePillarPuzzleSwitch* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitSwitch_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH___C__DISPLAYCLASS1_0__INITSWITCH_B__1_OFFSET))(this);
		}
	};
}
