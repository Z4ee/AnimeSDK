#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_2; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8E360)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_3__ONNEWSTIPOPENDELAYEND_B__2_OFFSET UNITYSDK_OFFSET(0x15F8E370)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_3__ONNEWSTIPOPENDELAYEND_B__3_OFFSET UNITYSDK_OFFSET(0x15F8E380)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_3__ONNEWSTIPOPENDELAYEND_B__5_OFFSET UNITYSDK_OFFSET(0x15F8E390)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_3_TypeDefinitionIndex = 73368;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_3 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_2* CS___8__locals2; // 0x10
		::System::Single curWidth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_3__CTOR_OFFSET))(this);
		}

		::System::Single _OnNewsTipOpenDelayEnd_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_3__ONNEWSTIPOPENDELAYEND_B__2_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__3(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_3__ONNEWSTIPOPENDELAYEND_B__3_OFFSET))(this, v);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_3__ONNEWSTIPOPENDELAYEND_B__5_OFFSET))(this);
		}
	};
}
