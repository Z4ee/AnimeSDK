#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_42B72AC1CA814BC6;
namespace MoleMole { class UIThreeDMapElement_QuestContext; }

#define MOLEMOLE_UIURBANMAPPOINTQUESTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156D7120)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointQuestWidgetController_TypeDefinitionIndex = 64044;

	class UIUrbanMapPointQuestWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_42B72AC1CA814BC6*, ::MoleMole::UIThreeDMapElement_QuestContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTQUESTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
