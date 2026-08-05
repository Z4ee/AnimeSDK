#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_84A668B8DE4853ED;
namespace MoleMole { class UIZenkovTaskRowWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIZENKOVTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF9040)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskRowWidgetController_Context_TypeDefinitionIndex = 55929;

	class UIZenkovTaskRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::Class_1_84A668B8DE4853ED*, ::MoleMole::UIZenkovTaskRowWidgetController*>* OnClicked; // 0x28
		::Class_1_84A668B8DE4853ED* QuestData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
