#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINSTORYTAPEDUMMYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA0CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryTapeDummyWidgetController_Context_TypeDefinitionIndex = 53637;

	class UIMainStoryTapeDummyWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 hollowArchiveTemplateID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYTAPEDUMMYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
