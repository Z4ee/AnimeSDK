#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

#define MOLEMOLE_UIDEBUGLOGINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16063A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIDebugLoginWidgetController_TypeDefinitionIndex = 64612;

	class UIDebugLoginWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEBUGLOGINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
