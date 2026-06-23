#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass89_0; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS89_4__CTOR_OFFSET UNITYSDK_OFFSET(0x177EC1B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS89_4__ONNEWSTIPOPENDELAYEND_B__6_OFFSET UNITYSDK_OFFSET(0x177EC1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass89_4_TypeDefinitionIndex = 86510;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass89_4 : public ::System::Object
	{
	public:
		::System::String* str; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass89_0* CS___8__locals3; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS89_4__CTOR_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS89_4__ONNEWSTIPOPENDELAYEND_B__6_OFFSET))(this);
		}
	};
}
