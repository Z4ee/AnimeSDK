#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CLOSETEXT_B__0_OFFSET UNITYSDK_OFFSET(0x151BE730)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CLOSETEXT_B__1_OFFSET UNITYSDK_OFFSET(0x151BE7C0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151BE720)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 54789;

	class UIGeneralTipsWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action* closeCall; // 0x10
		::MoleMole::UIGeneralTipsWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseText_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CLOSETEXT_B__0_OFFSET))(this);
		}

		::System::Void _CloseText_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CLOSETEXT_B__1_OFFSET))(this);
		}
	};
}
