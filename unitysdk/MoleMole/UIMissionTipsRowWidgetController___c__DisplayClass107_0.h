#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15578CB0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS107_0__PLAYLAYOUTFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0x15578CC0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS107_0__PLAYLAYOUTFADEIN_B__1_OFFSET UNITYSDK_OFFSET(0x15578D10)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS107_0__PLAYLAYOUTFADEIN_B__2_OFFSET UNITYSDK_OFFSET(0x15578D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass107_0_TypeDefinitionIndex = 39250;

	class UIMissionTipsRowWidgetController___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::DG::Tweening::Tweener* tweener; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* __4__this; // 0x18
		::System::Action* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}

		::System::Single _PlayLayoutFadeIn_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS107_0__PLAYLAYOUTFADEIN_B__0_OFFSET))(this);
		}

		::System::Void _PlayLayoutFadeIn_b__1(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS107_0__PLAYLAYOUTFADEIN_B__1_OFFSET))(this, t);
		}

		::System::Void _PlayLayoutFadeIn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS107_0__PLAYLAYOUTFADEIN_B__2_OFFSET))(this);
		}
	};
}
