#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D12E4BF61CBE42EF;
class Class_2_222A145CFB71510C;
namespace MoleMole { class UIBPPurchaseDialogPopWindowController; }

#define MOLEMOLE_UIBPPURCHASEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A62810)
#define MOLEMOLE_UIBPPURCHASEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__SHOWNONEPURCHASEBPSHOP_B__0_OFFSET UNITYSDK_OFFSET(0x19A62820)
#define MOLEMOLE_UIBPPURCHASEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__SHOWNONEPURCHASEBPSHOP_B__1_OFFSET UNITYSDK_OFFSET(0x19A628E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPPurchaseDialogPopWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 87036;

	class UIBPPurchaseDialogPopWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::Class_1_D12E4BF61CBE42EF* advanceItem; // 0x10
		::Class_2_222A145CFB71510C* battlePassModel; // 0x18
		::MoleMole::UIBPPurchaseDialogPopWindowController* __4__this; // 0x20
		::Class_1_D12E4BF61CBE42EF* luxuryItem; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPURCHASEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowNonePurchaseBPShop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPURCHASEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__SHOWNONEPURCHASEBPSHOP_B__0_OFFSET))(this);
		}

		::System::Void _ShowNonePurchaseBPShop_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPURCHASEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__SHOWNONEPURCHASEBPSHOP_B__1_OFFSET))(this);
		}
	};
}
