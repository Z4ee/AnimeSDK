#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass128_0; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS128_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15100A90)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS128_1__PLAYREFRESHTRACK_B__10_OFFSET UNITYSDK_OFFSET(0x15100C30)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS128_1__PLAYREFRESHTRACK_B__7_OFFSET UNITYSDK_OFFSET(0x15100B20)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS128_1__PLAYREFRESHTRACK_B__9_OFFSET UNITYSDK_OFFSET(0x15100AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass128_1_TypeDefinitionIndex = 55041;

	class UIMissionTipsContainerWidgetController___c__DisplayClass128_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x10
		::System::Action* __9__9; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass128_0* CS___8__locals1; // 0x20
		::System::Action* __9__10; // 0x28
		::System::Action* __9__7; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS128_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRefreshTrack_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS128_1__PLAYREFRESHTRACK_B__9_OFFSET))(this);
		}

		::System::Void _PlayRefreshTrack_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS128_1__PLAYREFRESHTRACK_B__7_OFFSET))(this);
		}

		::System::Void _PlayRefreshTrack_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS128_1__PLAYREFRESHTRACK_B__10_OFFSET))(this);
		}
	};
}
