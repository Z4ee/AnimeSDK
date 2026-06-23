#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D12E4BF61CBE42EF;
class Class_2_222A145CFB71510C;
namespace MoleMole { class UIBPPurchaseDialogV2PopWindowController; }

#define MOLEMOLE_UIBPPURCHASEDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3CD80)
#define MOLEMOLE_UIBPPURCHASEDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__SHOWNONEPURCHASEBPSHOP_B__0_OFFSET UNITYSDK_OFFSET(0x15B3CD90)
#define MOLEMOLE_UIBPPURCHASEDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__SHOWNONEPURCHASEBPSHOP_B__1_OFFSET UNITYSDK_OFFSET(0x15B3CE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPPurchaseDialogV2PopWindowController___c__DisplayClass4_0_TypeDefinitionIndex = 54541;

	class UIBPPurchaseDialogV2PopWindowController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Class_2_222A145CFB71510C* battlePassModel; // 0x10
		::Class_1_D12E4BF61CBE42EF* advanceItem; // 0x18
		::MoleMole::UIBPPurchaseDialogV2PopWindowController* __4__this; // 0x20
		::Class_1_D12E4BF61CBE42EF* luxuryItem; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPURCHASEDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowNonePurchaseBPShop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPURCHASEDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__SHOWNONEPURCHASEBPSHOP_B__0_OFFSET))(this);
		}

		::System::Void _ShowNonePurchaseBPShop_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPURCHASEDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__SHOWNONEPURCHASEBPSHOP_B__1_OFFSET))(this);
		}
	};
}
