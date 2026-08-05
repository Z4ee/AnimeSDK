#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1165CEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPrepareItemWidgetController_Context_TypeDefinitionIndex = 40626;

	class UIZenkovPrepareItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnSlotClicked; // 0x28
		::System::Int32 SlotIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
