#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14EED100)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__PAUSEBUBBLEGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x14EED110)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__PAUSEBUBBLEGROUP_B__1_OFFSET UNITYSDK_OFFSET(0x14EED1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController___c__DisplayClass49_0_TypeDefinitionIndex = 58774;

	class UIGeneralNewsBubbleWidgetController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIGeneralNewsBubbleWidgetController* __4__this; // 0x20
		::System::Boolean useSort; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _PauseBubbleGroup_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__PAUSEBUBBLEGROUP_B__0_OFFSET))(this);
		}

		::System::Void _PauseBubbleGroup_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__PAUSEBUBBLEGROUP_B__1_OFFSET))(this);
		}
	};
}
