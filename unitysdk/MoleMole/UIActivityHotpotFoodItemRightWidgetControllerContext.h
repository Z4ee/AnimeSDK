#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_EA973170E0B2CCF6;

#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMRIGHTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x161216A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotFoodItemRightWidgetControllerContext_TypeDefinitionIndex = 86415;

	class UIActivityHotpotFoodItemRightWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_EA973170E0B2CCF6* FoodCfg; // 0x28
		::System::Single BoilRatio; // 0x30
		::System::Boolean ShowBoilRoot; // 0x34
		::System::Single FoodScore; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMRIGHTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
