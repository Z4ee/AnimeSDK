#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIHollowCollectRewardDialogPopWindowController___c__DisplayClass49_0; }

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFD4D0)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_1__INITTAB_B__0_OFFSET UNITYSDK_OFFSET(0x17BFD4E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPopWindowController___c__DisplayClass49_1_TypeDefinitionIndex = 85815;

	class UIHollowCollectRewardDialogPopWindowController___c__DisplayClass49_1 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCollectRewardDialogPopWindowController___c__DisplayClass49_0* CS___8__locals1; // 0x10
		::System::Int32 tabID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitTab_b__0(::MoleMole::NotificationBadge* badge)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_1__INITTAB_B__0_OFFSET))(this, badge);
		}
	};
}
