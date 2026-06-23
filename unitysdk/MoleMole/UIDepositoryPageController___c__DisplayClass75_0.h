#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDepositoryPageController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175C7440)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS75_0__ONSORTERMARKDELETECLICK_B__0_OFFSET UNITYSDK_OFFSET(0x175C7450)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryPageController___c__DisplayClass75_0_TypeDefinitionIndex = 82555;

	class UIDepositoryPageController___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* equipIDs; // 0x10
		::MoleMole::UIDepositoryPageController* __4__this; // 0x18
		::System::Int32 OptType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSorterMarkDeleteClick_b__0(::System::Collections::Generic::HashSet_1<::System::UInt32>* removedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS75_0__ONSORTERMARKDELETECLICK_B__0_OFFSET))(this, removedIDs);
		}
	};
}
