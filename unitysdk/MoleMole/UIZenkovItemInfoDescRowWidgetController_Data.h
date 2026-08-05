#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVITEMINFODESCROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2AE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemInfoDescRowWidgetController_Data_TypeDefinitionIndex = 74535;

	class UIZenkovItemInfoDescRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* Desc; // 0x10
		::System::String* Num; // 0x18
		::System::String* Title; // 0x20
		::UnityEngine::Color NumColor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMINFODESCROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
