#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIVIRUSINFOROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14906C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusInfoRowWidgetController_Data_TypeDefinitionIndex = 54537;

	class UIVirusInfoRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* descKey; // 0x10
		::System::Int32 value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSINFOROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
