#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D63FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureCustomerDialogPopWindowController_Context_TypeDefinitionIndex = 85003;

	class UISummerTideTreasureCustomerDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* SpecialOrderList; // 0x28
		::System::Int32 SelectedSpecialOrder; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
