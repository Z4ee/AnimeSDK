#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x177D3530)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotCourseChapterPageController_Context_TypeDefinitionIndex = 79736;

	class UIInterKnotCourseChapterPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 InitFocusChapterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
