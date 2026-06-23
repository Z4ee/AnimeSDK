#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UIWINDOWCONTROLLERWITHPUMPQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4A220)

namespace MoleMole
{
	inline static constexpr unsigned int UIWindowControllerWithPumpQueue_TypeDefinitionIndex = 56598;

	class UIWindowControllerWithPumpQueue : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLERWITHPUMPQUEUE__CTOR_OFFSET))(this);
		}
	};
}
