#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RotatePillarPuzzleFragment; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAEC2E70)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH___C__DISPLAYCLASS12_0__ONROTATESELECTCLICK_B__1_OFFSET UNITYSDK_OFFSET(0xAEC2F60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleSwitch___c__DisplayClass12_0_TypeDefinitionIndex = 72311;

	class RotatePillarPuzzleSwitch___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RotatePillarPuzzleFragment* frag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRotateSelectClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH___C__DISPLAYCLASS12_0__ONROTATESELECTCLICK_B__1_OFFSET))(this);
		}
	};
}
