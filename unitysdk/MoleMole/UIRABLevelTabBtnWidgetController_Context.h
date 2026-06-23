#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABLEVELTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18218F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelTabBtnWidgetController_Context_TypeDefinitionIndex = 43853;

	class UIRABLevelTabBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Id; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
