#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBLINDBOXTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183C4A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxTabBtnWidgetController_Context_TypeDefinitionIndex = 54344;

	class UIActivityBlindBoxTabBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 StageID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
