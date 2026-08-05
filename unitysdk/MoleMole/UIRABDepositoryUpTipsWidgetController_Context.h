#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_18.h"

#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1757C670)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryUpTipsWidgetController_Context_TypeDefinitionIndex = 52808;

	class UIRABDepositoryUpTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_4C8453486C91E3A1_18 ChangeValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
