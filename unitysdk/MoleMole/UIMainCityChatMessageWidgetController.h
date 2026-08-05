#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

#define MOLEMOLE_UIMAINCITYCHATMESSAGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16519160)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatMessageWidgetController_TypeDefinitionIndex = 86544;

	class UIMainCityChatMessageWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATMESSAGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
