#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_C3F0E3B5AB5977AE_29;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVSALETIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1D930)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSaleTipsDialogPopWindowController_Context_TypeDefinitionIndex = 53139;

	class UIZenkovSaleTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnSellSuccess; // 0x28
		::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_29*>* SaleIndexList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSALETIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
