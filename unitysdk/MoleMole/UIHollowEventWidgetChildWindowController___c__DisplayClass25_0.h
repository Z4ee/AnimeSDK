#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F7DC6C255126730;
namespace MoleMole { class UIHollowEventWidgetChildWindowController; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB8600)
#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__INITCHOICEOBJ_B__0_OFFSET UNITYSDK_OFFSET(0x17DB8610)
#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__INITCHOICEOBJ_B__1_OFFSET UNITYSDK_OFFSET(0x17DB8790)
#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__INITCHOICEOBJ_B__2_OFFSET UNITYSDK_OFFSET(0x17DB87C0)
#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__INITCHOICEOBJ_B__3_OFFSET UNITYSDK_OFFSET(0x17DB8810)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventWidgetChildWindowController___c__DisplayClass25_0_TypeDefinitionIndex = 77973;

	class UIHollowEventWidgetChildWindowController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::Class_1_5F7DC6C255126730* currentChoice; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIHollowEventWidgetChildWindowController* __4__this; // 0x20
		::System::Single oPosx1; // 0x28
		::System::Single oPosx2; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitChoiceObj_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__INITCHOICEOBJ_B__0_OFFSET))(this);
		}

		::System::Void _InitChoiceObj_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__INITCHOICEOBJ_B__1_OFFSET))(this);
		}

		::System::Void _InitChoiceObj_b__2(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__INITCHOICEOBJ_B__2_OFFSET))(this, rect);
		}

		::System::Void _InitChoiceObj_b__3(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__INITCHOICEOBJ_B__3_OFFSET))(this, rect);
		}
	};
}
