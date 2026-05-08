#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UISocialCircleMainTagWidgetController_Data; }

#define MOLEMOLE_UISOCIALCIRCLEMAINTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x137878C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMainTagWidgetController_Context_TypeDefinitionIndex = 42262;

	class UISocialCircleMainTagWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UISocialCircleMainTagWidgetController_Data* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
