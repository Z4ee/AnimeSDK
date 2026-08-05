#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRecycleSmartSetDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15180790)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__ONOKBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x151807A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleSmartSetDialogPopWindowController___c__DisplayClass40_0_TypeDefinitionIndex = 86062;

	class UIRecycleSmartSetDialogPopWindowController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRecycleSmartSetDialogPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* equipIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOKBtnClick_b__0(::System::Collections::Generic::HashSet_1<::System::UInt32>* removedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__ONOKBTNCLICK_B__0_OFFSET))(this, removedIDs);
		}
	};
}
