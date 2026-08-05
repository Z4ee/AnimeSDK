#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMiniEventWidgetController; }
namespace MoleMole::Config { class HollowPopInteractOption; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF1940)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__0_OFFSET UNITYSDK_OFFSET(0x19FF1950)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__1_OFFSET UNITYSDK_OFFSET(0x19FF1E00)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__2_OFFSET UNITYSDK_OFFSET(0x19FF1E90)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__3_OFFSET UNITYSDK_OFFSET(0x19FF1F20)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__4_OFFSET UNITYSDK_OFFSET(0x19FF1F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMiniEventWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 53754;

	class UIHollowMiniEventWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMiniEventWidgetController* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::MoleMole::Config::HollowPopInteractOption* currentChoice; // 0x20
		::System::Action* __9__1; // 0x28
		::System::Single oPosx1; // 0x30
		::System::Single oPosx2; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitChoiceObj_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__0_OFFSET))(this);
		}

		::System::Void _InitChoiceObj_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__1_OFFSET))(this);
		}

		::System::Void _InitChoiceObj_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__2_OFFSET))(this);
		}

		::System::Void _InitChoiceObj_b__3(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__3_OFFSET))(this, rect);
		}

		::System::Void _InitChoiceObj_b__4(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITCHOICEOBJ_B__4_OFFSET))(this, rect);
		}
	};
}
