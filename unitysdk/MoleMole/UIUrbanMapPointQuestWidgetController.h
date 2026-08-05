#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_0B9DD3B9A8F92F66_2;
namespace MoleMole { class UIThreeDMapElement_QuestContext; }

#define MOLEMOLE_UIURBANMAPPOINTQUESTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D77E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointQuestWidgetController_TypeDefinitionIndex = 57094;

	class UIUrbanMapPointQuestWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_0B9DD3B9A8F92F66_2*, ::MoleMole::UIThreeDMapElement_QuestContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTQUESTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
