#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIComicEventController.h"

#define MOLEMOLE_UICOMICKEYEVENTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA1920)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicKeyEventController_TypeDefinitionIndex = 67094;

	class UIComicKeyEventController : public ::MoleMole::UIComicEventController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICKEYEVENTCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
