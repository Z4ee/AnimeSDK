#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BD2BE7927F889C7B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1855C4E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreMainPageController_Context_TypeDefinitionIndex = 56897;

	class UIFashionStoreMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>* productList; // 0x28
		::System::Boolean isTimelinePlayed; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
