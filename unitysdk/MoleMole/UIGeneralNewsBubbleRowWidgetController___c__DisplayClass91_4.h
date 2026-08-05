#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass91_0; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_4__CTOR_OFFSET UNITYSDK_OFFSET(0x172F2480)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_4__ONNEWSTIPOPENDELAYEND_B__6_OFFSET UNITYSDK_OFFSET(0x172F2490)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass91_4_TypeDefinitionIndex = 43615;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass91_4 : public ::System::Object
	{
	public:
		::System::String* str; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass91_0* CS___8__locals3; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_4__CTOR_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS91_4__ONNEWSTIPOPENDELAYEND_B__6_OFFSET))(this);
		}
	};
}
