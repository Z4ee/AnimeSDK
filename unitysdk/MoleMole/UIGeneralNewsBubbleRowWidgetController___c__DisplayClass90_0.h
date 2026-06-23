#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171E1AA0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS90_0__ONOCCUPYOPENDELAYEND_B__0_OFFSET UNITYSDK_OFFSET(0x171E1AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass90_0_TypeDefinitionIndex = 86490;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::System::Boolean fromResume; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOccupyOpenDelayEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS90_0__ONOCCUPYOPENDELAYEND_B__0_OFFSET))(this);
		}
	};
}
