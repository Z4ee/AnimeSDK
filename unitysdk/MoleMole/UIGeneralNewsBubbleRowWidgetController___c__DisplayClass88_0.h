#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15248A60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0__ONNEWSTIPOPENDELAYEND_B__4_OFFSET UNITYSDK_OFFSET(0x15248A70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0__ONNEWSTIPOPENDELAYEND_G__ONANIMATIONEND_0_OFFSET UNITYSDK_OFFSET(0x15248A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_0_TypeDefinitionIndex = 73361;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::System::Boolean fromResume; // 0x18
		::System::Single lastHeight; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0__ONNEWSTIPOPENDELAYEND_B__4_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_g__OnAnimationEnd_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0__ONNEWSTIPOPENDELAYEND_G__ONANIMATIONEND_0_OFFSET))(this);
		}
	};
}
