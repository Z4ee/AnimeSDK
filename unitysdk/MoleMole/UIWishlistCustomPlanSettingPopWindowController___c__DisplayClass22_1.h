#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass22_0; }

#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4C110)
#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_1__REFRESHSKILLTYPEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x14C4C120)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass22_1_TypeDefinitionIndex = 49365;

	class UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::MoleMole::UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass22_0* CS___8__locals1; // 0x10
		::System::Int32 index; // 0x18
		::System::Int32 talentLevel; // 0x1C
		::System::Boolean isCoreSkill; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSkillTypeView_b__1(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_1__REFRESHSKILLTYPEVIEW_B__1_OFFSET))(this, value);
		}
	};
}
