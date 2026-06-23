#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176188A0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS18_0__PLAYPROGRESSANIM_B__1_OFFSET UNITYSDK_OFFSET(0x176188B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass18_0_TypeDefinitionIndex = 85076;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDailyQuestHandBookWidgetController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::System::Single curProgress; // 0x20
		::System::Single prvProgress; // 0x24
		::System::Single duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayProgressAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS18_0__PLAYPROGRESSANIM_B__1_OFFSET))(this);
		}
	};
}
