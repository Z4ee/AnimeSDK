#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVITEMINFOROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1C460)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemInfoRowWidgetController_Data_TypeDefinitionIndex = 41220;

	class UIZenkovItemInfoRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* Title; // 0x10
		::System::String* Desc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMINFOROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
