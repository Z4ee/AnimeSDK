#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDailyQuestNormalRowWidgetController; }

#define MOLEMOLE_UIDAILYQUESTNORMALROWWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15303660)
#define MOLEMOLE_UIDAILYQUESTNORMALROWWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SETSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x15303730)
#define MOLEMOLE_UIDAILYQUESTNORMALROWWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SETSTATE_G__JUMP_0_OFFSET UNITYSDK_OFFSET(0x15303670)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestNormalRowWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 51758;

	class UIDailyQuestNormalRowWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDailyQuestNormalRowWidgetController* __4__this; // 0x10
		::System::Int32 jumpID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTNORMALROWWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetState_g__Jump_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTNORMALROWWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SETSTATE_G__JUMP_0_OFFSET))(this);
		}

		::System::Void _SetState_b__1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTNORMALROWWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SETSTATE_B__1_OFFSET))(this, success);
		}
	};
}
