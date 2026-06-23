#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIMissionTipsRowWidgetController___c__DisplayClass119_0; }
namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS119_1__CTOR_OFFSET UNITYSDK_OFFSET(0x174E4DC0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS119_1__PLAYCHANGETRACKTIPSFADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x174E4DD0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS119_1__PLAYCHANGETRACKTIPSFADEOUT_B__2_OFFSET UNITYSDK_OFFSET(0x174E4E00)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS119_1__PLAYCHANGETRACKTIPSFADEOUT_B__3_OFFSET UNITYSDK_OFFSET(0x174E4E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass119_1_TypeDefinitionIndex = 40290;

	class UIMissionTipsRowWidgetController___c__DisplayClass119_1 : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* layoutElement; // 0x10
		::DG::Tweening::Tweener* tweener; // 0x18
		::MoleMole::UIMissionTipsRowWidgetController___c__DisplayClass119_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS119_1__CTOR_OFFSET))(this);
		}

		::System::Single _PlayChangeTrackTipsFadeOut_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS119_1__PLAYCHANGETRACKTIPSFADEOUT_B__1_OFFSET))(this);
		}

		::System::Void _PlayChangeTrackTipsFadeOut_b__2(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS119_1__PLAYCHANGETRACKTIPSFADEOUT_B__2_OFFSET))(this, t);
		}

		::System::Void _PlayChangeTrackTipsFadeOut_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS119_1__PLAYCHANGETRACKTIPSFADEOUT_B__3_OFFSET))(this);
		}
	};
}
