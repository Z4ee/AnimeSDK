#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18569150)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__INITSORT_B__1_OFFSET UNITYSDK_OFFSET(0x18569160)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopEquipmentSelectPopWindowController___c__DisplayClass50_0_TypeDefinitionIndex = 82684;

	class UICoopEquipmentSelectPopWindowController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* CollectedState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* _InitSort_b__1()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__INITSORT_B__1_OFFSET))(this);
		}
	};
}
