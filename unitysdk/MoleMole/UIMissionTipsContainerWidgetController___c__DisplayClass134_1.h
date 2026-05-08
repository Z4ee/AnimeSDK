#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass134_0; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC8A70)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_1__PLAYMISSIONSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15DC8AD0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_1__PLAYMISSIONSYNC_B__2_OFFSET UNITYSDK_OFFSET(0x15DC8A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass134_1_TypeDefinitionIndex = 55057;

	class UIMissionTipsContainerWidgetController___c__DisplayClass134_1 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIMissionTipsRowMultiWidgetController* tmp; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass134_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_1__PLAYMISSIONSYNC_B__2_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_1__PLAYMISSIONSYNC_B__0_OFFSET))(this);
		}
	};
}
