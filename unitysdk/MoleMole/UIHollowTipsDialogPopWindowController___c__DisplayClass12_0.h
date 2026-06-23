#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2924E454126F7D2D.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowTipsDialogPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1825BC30)
#define MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1825BC40)
#define MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__1_OFFSET UNITYSDK_OFFSET(0x1825C1F0)
#define MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__2_OFFSET UNITYSDK_OFFSET(0x1825BFD0)
#define MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__3_OFFSET UNITYSDK_OFFSET(0x1825C180)
#define MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__4_OFFSET UNITYSDK_OFFSET(0x1825C290)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTipsDialogPopWindowController___c__DisplayClass12_0_TypeDefinitionIndex = 44933;

	class UIHollowTipsDialogPopWindowController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowTipsDialogPopWindowController* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Action* __9__4; // 0x20
		::System::Action_2<::Enum_3_2924E454126F7D2D, ::System::Int32>* __9__3; // 0x28
		::System::Action_1<::System::Int32>* switchCallback; // 0x30
		::System::Action* deleteCallback; // 0x38
		::System::Int32 hollowItemID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitSwitchHollowItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__0_OFFSET))(this);
		}

		::System::Void _InitSwitchHollowItem_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__2_OFFSET))(this);
		}

		::System::Void _InitSwitchHollowItem_b__3(::Enum_3_2924E454126F7D2D type, ::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_2924E454126F7D2D, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__3_OFFSET))(this, type, itemid);
		}

		::System::Void _InitSwitchHollowItem_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__1_OFFSET))(this);
		}

		::System::Void _InitSwitchHollowItem_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__INITSWITCHHOLLOWITEM_B__4_OFFSET))(this);
		}
	};
}
