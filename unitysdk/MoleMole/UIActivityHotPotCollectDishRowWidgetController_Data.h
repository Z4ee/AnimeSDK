#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTCOLLECTDISHROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16765350)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCollectDishRowWidgetController_Data_TypeDefinitionIndex = 61034;

	class UIActivityHotPotCollectDishRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action* Click; // 0x10
		::System::Int32 ID; // 0x18
		::System::Boolean IsGet; // 0x1C
		::System::Boolean CheckNew; // 0x1D
		::System::Boolean IsFocus; // 0x1E
		::System::Boolean ShowName; // 0x1F
		::System::Int32 Index; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOLLECTDISHROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
