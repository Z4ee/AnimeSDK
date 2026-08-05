#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BD2BE7927F889C7B;
namespace MoleMole { class UIFashionStoreMainPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1855C100)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSUCCESSBUYINGPRODUCT_B__0_OFFSET UNITYSDK_OFFSET(0x1855C110)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreMainPageController___c__DisplayClass16_0_TypeDefinitionIndex = 56898;

	class UIFashionStoreMainPageController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_1_BD2BE7927F889C7B* lastSelectedItem; // 0x10
		::MoleMole::UIFashionStoreMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSuccessBuyingProduct_b__0(::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>* newList, ::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSUCCESSBUYINGPRODUCT_B__0_OFFSET))(this, newList, _);
		}
	};
}
