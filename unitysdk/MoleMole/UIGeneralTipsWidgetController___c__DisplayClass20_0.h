#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIGeneralTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151BE520)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x151BE530)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x151BE580)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__2_OFFSET UNITYSDK_OFFSET(0x151BE6C0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__SETTEXT_B__3_OFFSET UNITYSDK_OFFSET(0x151BE690)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 54791;

	class UIGeneralTipsWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIGeneralTipsWidgetController* __4__this; // 0x18
		::System::Single time; // 0x20
		::UnityEngine::Vector2 finalSize; // 0x24
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
