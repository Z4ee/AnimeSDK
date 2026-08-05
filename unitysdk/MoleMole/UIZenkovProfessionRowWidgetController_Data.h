#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B12510)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovProfessionRowWidgetController_Data_TypeDefinitionIndex = 90798;

	class UIZenkovProfessionRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* ValueText; // 0x10
		::System::String* ProfessionNameKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
