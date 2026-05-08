#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15200250)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryTabWidgetControllerContext_TypeDefinitionIndex = 47088;

	class UIPlayerAccessoryTabWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PopupKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
