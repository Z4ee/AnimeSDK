#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4865323EE33E9248;
namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19016340)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_0__PLAYACTIVITYTIP_B__0_OFFSET UNITYSDK_OFFSET(0x19016490)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_0__PLAYACTIVITYTIP_B__3_OFFSET UNITYSDK_OFFSET(0x19016350)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass135_0_TypeDefinitionIndex = 91177;

	class UIMissionTipsContainerWidgetController___c__DisplayClass135_0 : public ::System::Object
	{
	public:
		::Class_1_4865323EE33E9248* activityPopData; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_0__CTOR_OFFSET))(this);
		}

		::System::String* _PlayActivityTip_b__3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_0__PLAYACTIVITYTIP_B__3_OFFSET))(this);
		}

		::System::Void _PlayActivityTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS135_0__PLAYACTIVITYTIP_B__0_OFFSET))(this);
		}
	};
}
