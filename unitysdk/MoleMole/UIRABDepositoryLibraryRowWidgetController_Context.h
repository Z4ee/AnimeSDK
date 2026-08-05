#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_8BAFC913A3AC9999;

#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1517E650)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryLibraryRowWidgetController_Context_TypeDefinitionIndex = 69722;

	class UIRABDepositoryLibraryRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_8BAFC913A3AC9999* FactorData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
