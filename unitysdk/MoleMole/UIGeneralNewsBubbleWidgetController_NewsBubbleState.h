#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B217E80D53CC97F0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATE_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x14EED420)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATE_ONCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x14EED450)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATE_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x14EED430)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x14EED440)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController_NewsBubbleState_TypeDefinitionIndex = 58771;

	class UIGeneralNewsBubbleWidgetController_NewsBubbleState : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleWidgetController* _controller_k__BackingField; // 0x10

		::System::Void _ctor(::MoleMole::UIGeneralNewsBubbleWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATE__CTOR_OFFSET))(this, controller);
		}

		::MoleMole::UIGeneralNewsBubbleWidgetController* get_controller()
		{
			return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATE_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void set_controller(::MoleMole::UIGeneralNewsBubbleWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATE_SET_CONTROLLER_OFFSET))(this, value);
		}

		::System::Void OnChangeState(::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* lastState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATE_ONCHANGESTATE_OFFSET))(this, lastState);
		}
	};
}
