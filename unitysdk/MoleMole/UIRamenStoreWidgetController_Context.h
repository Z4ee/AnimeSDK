#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F71F7FB55BBEB1D9;

#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3E4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreWidgetController_Context_TypeDefinitionIndex = 85137;

	class UIRamenStoreWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F71F7FB55BBEB1D9* storeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
