#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x112E3890)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentRowWidgetController_Data_TypeDefinitionIndex = 42636;

	class UIZenkovTalentRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* DescKey; // 0x10
		::System::String* TitleKey; // 0x18
		::System::Int32 Level; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
