#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162BE170)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameTextRowWidgetController_Context_TypeDefinitionIndex = 59432;

	class UIGalgameTextRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* text; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
