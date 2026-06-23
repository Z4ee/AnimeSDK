#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass146_0; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS146_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15759CA0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS146_1__PLAYREFRESHTRACK_B__10_OFFSET UNITYSDK_OFFSET(0x15759E40)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS146_1__PLAYREFRESHTRACK_B__7_OFFSET UNITYSDK_OFFSET(0x15759D30)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS146_1__PLAYREFRESHTRACK_B__9_OFFSET UNITYSDK_OFFSET(0x15759CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass146_1_TypeDefinitionIndex = 69600;

	class UIMissionTipsContainerWidgetController___c__DisplayClass146_1 : public ::System::Object
	{
	public:
		::System::Action* __9__7; // 0x10
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x18
		::System::Action* __9__9; // 0x20
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass146_0* CS___8__locals1; // 0x28
		::System::Action* __9__10; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS146_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRefreshTrack_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS146_1__PLAYREFRESHTRACK_B__9_OFFSET))(this);
		}

		::System::Void _PlayRefreshTrack_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS146_1__PLAYREFRESHTRACK_B__7_OFFSET))(this);
		}

		::System::Void _PlayRefreshTrack_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS146_1__PLAYREFRESHTRACK_B__10_OFFSET))(this);
		}
	};
}
