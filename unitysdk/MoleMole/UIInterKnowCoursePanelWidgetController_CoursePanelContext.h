#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOWCOURSEPANELWIDGETCONTROLLER_COURSEPANELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1782A480)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCoursePanelWidgetController_CoursePanelContext_TypeDefinitionIndex = 43767;

	class UIInterKnowCoursePanelWidgetController_CoursePanelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onCloseAction; // 0x28
		::System::Int32 showEndNodeIdx; // 0x30
		::System::Int32 showStartNodeIdx; // 0x34
		::System::Int32 focusTargetNode; // 0x38
		::System::Boolean isOvernightShow; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPANELWIDGETCONTROLLER_COURSEPANELCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
