#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3CC13814F0D84EAE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_201;
namespace MoleMole { class UIGeneralPackageDialogPopWindowController; }

#define MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177ECAF0)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__DOPURCHASE_B__0_OFFSET UNITYSDK_OFFSET(0x177ECB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPackageDialogPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 51330;

	class UIGeneralPackageDialogPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_201* goodsInfo; // 0x10
		::MoleMole::UIGeneralPackageDialogPopWindowController* __4__this; // 0x18
		::Struct_2_3CC13814F0D84EAE purchaseGoodsInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPurchase_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__DOPURCHASE_B__0_OFFSET))(this);
		}
	};
}
