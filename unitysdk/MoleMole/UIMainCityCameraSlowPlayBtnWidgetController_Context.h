#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182D4260)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraSlowPlayBtnWidgetController_Context_TypeDefinitionIndex = 43186;

	class UIMainCityCameraSlowPlayBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
