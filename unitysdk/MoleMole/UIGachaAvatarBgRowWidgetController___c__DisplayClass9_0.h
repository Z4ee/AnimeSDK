#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaAvatarBgRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF8ED0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16EF8EE0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x16EF8FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaAvatarBgRowWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 38211;

	class UIGachaAvatarBgRowWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIGachaAvatarBgRowWidgetController* __4__this; // 0x18
		::System::Int32 avatarID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0(::System::Int32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET))(this, roleID);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
