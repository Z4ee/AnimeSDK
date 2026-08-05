#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD4BB0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_0__SETKEY_B__0_OFFSET UNITYSDK_OFFSET(0x17BD4BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass75_0_TypeDefinitionIndex = 43606;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::String* strParam; // 0x18
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::System::String* _SetKey_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_0__SETKEY_B__0_OFFSET))(this);
		}
	};
}
