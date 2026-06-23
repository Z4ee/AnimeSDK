#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_77794C962ABD89A9;

#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152A9C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryLibraryRowWidgetController_Context_TypeDefinitionIndex = 70339;

	class UIRABDepositoryLibraryRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_77794C962ABD89A9* FactorData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
