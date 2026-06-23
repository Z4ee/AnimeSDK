#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightWidgetController.h"

#define MOLEMOLE_UIGRANDMARCELMAPRIGHTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167ADE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelMapRightWidgetController_TypeDefinitionIndex = 74444;

	class UIGrandMarcelMapRightWidgetController : public ::MoleMole::UIUrbanMapRightWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELMAPRIGHTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
