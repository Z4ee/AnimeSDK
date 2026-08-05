#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1889F1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideSellingShowOrderWidgetController_Context_TypeDefinitionIndex = 61218;

	class UISummerTideSellingShowOrderWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle TargetOrder; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
