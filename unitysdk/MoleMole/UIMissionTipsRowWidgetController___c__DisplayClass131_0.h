#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS131_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183BB660)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS131_0__PLAYCHANGETRACK_B__0_OFFSET UNITYSDK_OFFSET(0x183BB670)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS131_0__PLAYCHANGETRACK_B__1_OFFSET UNITYSDK_OFFSET(0x183BB6A0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS131_0__PLAYCHANGETRACK_B__2_OFFSET UNITYSDK_OFFSET(0x183BB6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass131_0_TypeDefinitionIndex = 75870;

	class UIMissionTipsRowWidgetController___c__DisplayClass131_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* layoutElement; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS131_0__CTOR_OFFSET))(this);
		}

		::System::Single _PlayChangeTrack_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS131_0__PLAYCHANGETRACK_B__0_OFFSET))(this);
		}

		::System::Void _PlayChangeTrack_b__1(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS131_0__PLAYCHANGETRACK_B__1_OFFSET))(this, t);
		}

		::System::Void _PlayChangeTrack_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS131_0__PLAYCHANGETRACK_B__2_OFFSET))(this);
		}
	};
}
