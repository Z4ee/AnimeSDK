#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRecycleDialogPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3E5B0)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__ONSORTERMARKDELETECLICK_B__0_OFFSET UNITYSDK_OFFSET(0x17D3E5C0)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__ONSORTERMARKDELETECLICK_B__2_OFFSET UNITYSDK_OFFSET(0x17D3E6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogPopWindowController___c__DisplayClass59_0_TypeDefinitionIndex = 67835;

	class UIRecycleDialogPopWindowController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* equipIDs; // 0x18
		::MoleMole::UIRecycleDialogPopWindowController* __4__this; // 0x20
		::System::Int32 OptType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSorterMarkDeleteClick_b__0(::System::Collections::Generic::HashSet_1<::System::UInt32>* removedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__ONSORTERMARKDELETECLICK_B__0_OFFSET))(this, removedIDs);
		}

		::System::Void _OnSorterMarkDeleteClick_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__ONSORTERMARKDELETECLICK_B__2_OFFSET))(this);
		}
	};
}
