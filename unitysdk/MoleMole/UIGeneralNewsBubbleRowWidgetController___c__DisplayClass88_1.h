#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_0; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15A20B60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_1__ONNEWSTIPOPENDELAYEND_B__1_OFFSET UNITYSDK_OFFSET(0x15A20B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_1_TypeDefinitionIndex = 73369;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_1 : public ::System::Object
	{
	public:
		::MoleMole::UIBubbleTips* show; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_1__CTOR_OFFSET))(this);
		}

		::System::String* _OnNewsTipOpenDelayEnd_b__1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_1__ONNEWSTIPOPENDELAYEND_B__1_OFFSET))(this);
		}
	};
}
