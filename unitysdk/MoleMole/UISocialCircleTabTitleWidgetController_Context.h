#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UISocialCircleTabTitleWidgetController_Data; }

#define MOLEMOLE_UISOCIALCIRCLETABTITLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12675FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTabTitleWidgetController_Context_TypeDefinitionIndex = 51679;

	class UISocialCircleTabTitleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UISocialCircleTabTitleWidgetController_Data* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETABTITLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
