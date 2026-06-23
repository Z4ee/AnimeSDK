#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTCOLLECTTOYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C55840)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCollectToyRowWidgetController_Data_TypeDefinitionIndex = 74864;

	class UIActivityHotPotCollectToyRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action* Click; // 0x10
		::System::Int32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOLLECTTOYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
