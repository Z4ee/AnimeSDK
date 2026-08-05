#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B217E80D53CC97F0.h"
#include "unitysdk/MoleMole/UIGeneralNewsBubbleWidgetController_NewsBubbleState.h"

namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATENONE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x17D9CCA0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATENONE_ONCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x17D9CCB0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATENONE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9CC90)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATENONE___BASE_ONCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x17D9D1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController_NewsBubbleStateNone_TypeDefinitionIndex = 85281;

	class UIGeneralNewsBubbleWidgetController_NewsBubbleStateNone : public ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState
	{
	public:
		::System::Void _ctor(::MoleMole::UIGeneralNewsBubbleWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATENONE__CTOR_OFFSET))(this, controller);
		}

		::Enum_3_B217E80D53CC97F0 get_State()
		{
			return ((::Enum_3_B217E80D53CC97F0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATENONE_GET_STATE_OFFSET))(this);
		}

		::System::Void OnChangeState(::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* lastState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATENONE_ONCHANGESTATE_OFFSET))(this, lastState);
		}

		::System::Void __base_OnChangeState(::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATENONE___BASE_ONCHANGESTATE_OFFSET))(this, P0);
		}
	};
}
