#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UIInLevelPauseSkillRowWidgetController; }

#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181583B0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHINFO_B__2_OFFSET UNITYSDK_OFFSET(0x181583C0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHINFO_B__3_OFFSET UNITYSDK_OFFSET(0x18158410)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillRowWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 83564;

	class UIInLevelPauseSkillRowWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseSkillRowWidgetController* __4__this; // 0x10
		::Class_2_1824EF69C8E376A3* avatarItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInfo_b__2(::System::Boolean b, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHINFO_B__2_OFFSET))(this, b, init);
		}

		::System::Void _RefreshInfo_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHINFO_B__3_OFFSET))(this);
		}
	};
}
