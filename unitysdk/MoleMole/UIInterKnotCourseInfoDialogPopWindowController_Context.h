#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINTERKNOTCOURSEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18385B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotCourseInfoDialogPopWindowController_Context_TypeDefinitionIndex = 74755;

	class UIInterKnotCourseInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SeasonID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
