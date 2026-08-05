#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace MoleMole { class UIHollowRewardBagDialogPopWindowController; }

#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0x18F07F80)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F07F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRewardBagDialogPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 76826;

	class UIHollowRewardBagDialogPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Class_1_1685EC66FBD28897* item; // 0x10
		::MoleMole::UIHollowRewardBagDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateItem_b__0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CREATEITEM_B__0_OFFSET))(this, index);
		}
	};
}
