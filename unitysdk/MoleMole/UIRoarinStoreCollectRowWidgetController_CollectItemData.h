#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A609C4292E83C1D_Enum_3_D472CC58CBF63AFD.h"
#include "unitysdk/MoleMole/UIRoarinStoreItemWidgetController_CardData.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreCollectRowWidgetController_CollectItemData_TypeDefinitionIndex = 61497;

	struct alignas(8) UIRoarinStoreCollectRowWidgetController_CollectItemData
	{
		::System::Int32 RoarinStoreExchangeId; // 0x10
		::System::String* TitleKey; // 0x18
		::Class_2_6A609C4292E83C1D_Enum_3_D472CC58CBF63AFD Status; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* RequiredCards; // 0x28
		::System::Int32 RewardID; // 0x30
		::System::Int64 TimeStamp; // 0x38
	};
}
