#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

#define MOLEMOLE_UIMAINCITYCHATMESSAGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1527D060)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatMessageWidgetController_TypeDefinitionIndex = 77086;

	class UIMainCityChatMessageWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATMESSAGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
