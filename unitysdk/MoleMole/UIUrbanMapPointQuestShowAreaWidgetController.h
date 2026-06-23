#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_3A52EAC73CDA79F0;
namespace MoleMole { class UIThreeDMapElement_QuestShowAreaContext; }

#define MOLEMOLE_UIURBANMAPPOINTQUESTSHOWAREAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C83DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointQuestShowAreaWidgetController_TypeDefinitionIndex = 54833;

	class UIUrbanMapPointQuestShowAreaWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_3A52EAC73CDA79F0*, ::MoleMole::UIThreeDMapElement_QuestShowAreaContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTQUESTSHOWAREAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
