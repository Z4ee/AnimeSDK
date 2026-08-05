#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2C060)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStarUpFactorDescWidgetController_Context_TypeDefinitionIndex = 48068;

	class UIRABStarUpFactorDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Text; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
