#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_B9416AD3CF7CE7E5;

#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150F6D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryPropertyDescWidgetController_Context_TypeDefinitionIndex = 64868;

	class UIRABDepositoryPropertyDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_B9416AD3CF7CE7E5* BuddyData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
