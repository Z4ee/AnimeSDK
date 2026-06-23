#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F54D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSearchWidgetController_Context_TypeDefinitionIndex = 48624;

	class UIBangkovSearchWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SearchEntityRid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
