#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_MINIGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED7A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyItemWidgetController_MiniGameContext_TypeDefinitionIndex = 60583;

	class UIFashionStoreKeyItemWidgetController_MiniGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 keyID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_MINIGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
