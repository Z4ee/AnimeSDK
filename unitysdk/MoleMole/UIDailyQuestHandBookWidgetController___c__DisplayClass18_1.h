#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDailyQuestHandBookWidgetController___c__DisplayClass18_0; }

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECD7D0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS18_1__PLAYPROGRESSANIM_B__0_OFFSET UNITYSDK_OFFSET(0x14ECD7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass18_1_TypeDefinitionIndex = 69673;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::MoleMole::UIDailyQuestHandBookWidgetController___c__DisplayClass18_0* CS___8__locals1; // 0x10
		::System::Boolean soundTriggered; // 0x18
		::System::Single timer; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayProgressAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS18_1__PLAYPROGRESSANIM_B__0_OFFSET))(this);
		}
	};
}
