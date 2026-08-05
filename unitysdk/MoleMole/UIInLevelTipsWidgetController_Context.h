#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18383DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTipsWidgetController_Context_TypeDefinitionIndex = 77524;

	class UIInLevelTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* LocalizationKey; // 0x28
		::System::Single Duration; // 0x30
		::System::Boolean IsPersistent; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
