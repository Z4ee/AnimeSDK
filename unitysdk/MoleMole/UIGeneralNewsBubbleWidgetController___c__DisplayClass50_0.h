#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162CA6F0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS50_0__FINISHBUBBLEGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x162CA700)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS50_0__FINISHBUBBLEGROUP_B__1_OFFSET UNITYSDK_OFFSET(0x162CA7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController___c__DisplayClass50_0_TypeDefinitionIndex = 58768;

	class UIGeneralNewsBubbleWidgetController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl; // 0x18
		::MoleMole::UIGeneralNewsBubbleWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _FinishBubbleGroup_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS50_0__FINISHBUBBLEGROUP_B__0_OFFSET))(this);
		}

		::System::Void _FinishBubbleGroup_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS50_0__FINISHBUBBLEGROUP_B__1_OFFSET))(this);
		}
	};
}
