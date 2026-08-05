#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass91_2; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB82F0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_3__ONNEWSTIPOPENDELAYEND_B__2_OFFSET UNITYSDK_OFFSET(0x19FC44F0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_3__ONNEWSTIPOPENDELAYEND_B__3_OFFSET UNITYSDK_OFFSET(0x19FC4500)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_3__ONNEWSTIPOPENDELAYEND_B__5_OFFSET UNITYSDK_OFFSET(0x19FC4510)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass91_3_TypeDefinitionIndex = 43612;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass91_3 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass91_2* CS___8__locals2; // 0x10
		::System::Single curWidth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_3__CTOR_OFFSET))(this);
		}

		::System::Single _OnNewsTipOpenDelayEnd_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_3__ONNEWSTIPOPENDELAYEND_B__2_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__3(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_3__ONNEWSTIPOPENDELAYEND_B__3_OFFSET))(this, v);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_3__ONNEWSTIPOPENDELAYEND_B__5_OFFSET))(this);
		}
	};
}
