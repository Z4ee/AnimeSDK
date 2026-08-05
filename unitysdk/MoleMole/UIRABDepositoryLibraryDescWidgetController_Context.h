#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_8BAFC913A3AC9999;

#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17997360)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryLibraryDescWidgetController_Context_TypeDefinitionIndex = 54788;

	class UIRABDepositoryLibraryDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_8BAFC913A3AC9999* FactorData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
