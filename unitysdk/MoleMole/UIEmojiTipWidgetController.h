#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIEMOJITIPWIDGETCONTROLLER_ISSHOWCURSORMODE_OFFSET UNITYSDK_OFFSET(0x19383280)
#define MOLEMOLE_UIEMOJITIPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19383380)

namespace MoleMole
{
	inline static constexpr unsigned int UIEmojiTipWidgetController_TypeDefinitionIndex = 44855;

	class UIEmojiTipWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowCursorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPWIDGETCONTROLLER_ISSHOWCURSORMODE_OFFSET))(this);
		}
	};
}
