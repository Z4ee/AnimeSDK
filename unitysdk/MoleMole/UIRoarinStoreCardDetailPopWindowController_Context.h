#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRoarinStoreItemWidgetController_CardData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROARINSTORECARDDETAILPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FFD920)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreCardDetailPopWindowController_Context_TypeDefinitionIndex = 81794;

	class UIRoarinStoreCardDetailPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* CardList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECARDDETAILPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
