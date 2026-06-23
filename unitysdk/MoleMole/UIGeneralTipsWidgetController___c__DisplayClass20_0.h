#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIGeneralTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171E6D90)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x171E6DA0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x171E6DF0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__2_OFFSET UNITYSDK_OFFSET(0x171E6F30)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__3_OFFSET UNITYSDK_OFFSET(0x171E6F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 84359;

	class UIGeneralTipsWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsWidgetController* __4__this; // 0x10
		::System::Action* __9__3; // 0x18
		::UnityEngine::Vector2 finalSize; // 0x20
		::System::Single time; // 0x28
		::System::Single length; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetText_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__0_OFFSET))(this);
		}

		::System::Void _SetText_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__1_OFFSET))(this);
		}

		::System::Void _SetText_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__3_OFFSET))(this);
		}

		::System::Void _SetText_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__2_OFFSET))(this);
		}
	};
}
