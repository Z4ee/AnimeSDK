#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_C3F0E3B5AB5977AE_29;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVQUICKSCREENDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1802B8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovQuickScreenDialogPopWindowController_Context_TypeDefinitionIndex = 60494;

	class UIBangkovQuickScreenDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_29*>* KovIndexList; // 0x28
		::System::Action_1<::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_29*>*>* OkActionToSelectItem; // 0x30
		::Enum_3_ED790DAC948A65A9_13 PlayType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVQUICKSCREENDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
