#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_F68C1397F46993E4;

#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11B918C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryPropertyDescWidgetController_Context_TypeDefinitionIndex = 72548;

	class UIRABDepositoryPropertyDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_F68C1397F46993E4* BuddyData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
