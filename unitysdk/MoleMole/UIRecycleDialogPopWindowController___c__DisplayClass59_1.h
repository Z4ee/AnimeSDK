#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15101E40)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_1__ONSORTERMARKDELETECLICK_B__1_OFFSET UNITYSDK_OFFSET(0x15101E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogPopWindowController___c__DisplayClass59_1_TypeDefinitionIndex = 67834;

	class UIRecycleDialogPopWindowController___c__DisplayClass59_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* removedIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSorterMarkDeleteClick_b__1(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_1__ONSORTERMARKDELETECLICK_B__1_OFFSET))(this, id);
		}
	};
}
