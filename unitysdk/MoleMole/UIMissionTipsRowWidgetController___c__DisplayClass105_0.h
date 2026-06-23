#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS105_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178B6B90)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS105_0__PLAYCHANGETRACK_B__0_OFFSET UNITYSDK_OFFSET(0x178B6BA0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS105_0__PLAYCHANGETRACK_B__1_OFFSET UNITYSDK_OFFSET(0x178B6BD0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS105_0__PLAYCHANGETRACK_B__2_OFFSET UNITYSDK_OFFSET(0x178B6C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass105_0_TypeDefinitionIndex = 40296;

	class UIMissionTipsRowWidgetController___c__DisplayClass105_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::UnityEngine::UI::LayoutElement* layoutElement; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS105_0__CTOR_OFFSET))(this);
		}

		::System::Single _PlayChangeTrack_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS105_0__PLAYCHANGETRACK_B__0_OFFSET))(this);
		}

		::System::Void _PlayChangeTrack_b__1(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS105_0__PLAYCHANGETRACK_B__1_OFFSET))(this, t);
		}

		::System::Void _PlayChangeTrack_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS105_0__PLAYCHANGETRACK_B__2_OFFSET))(this);
		}
	};
}
