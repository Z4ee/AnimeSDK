#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRoarinStoreCollectRowWidgetController_CollectStatus.h"
#include "unitysdk/MoleMole/UIRoarinStoreItemWidgetController_CardData.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6A609C4292E83C1D_CLASS_1_03F8CD52140F7CAA_CLASS_1_886614E7B7CD9451__CTOR_OFFSET UNITYSDK_OFFSET(0x168B0230)

inline static constexpr unsigned int Class_2_6A609C4292E83C1D_Class_1_03F8CD52140F7CAA_Class_1_886614E7B7CD9451_TypeDefinitionIndex = 67168;

class Class_2_6A609C4292E83C1D_Class_1_03F8CD52140F7CAA_Class_1_886614E7B7CD9451 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* Field_1_3; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectStatus Field_1_1; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A609C4292E83C1D_CLASS_1_03F8CD52140F7CAA_CLASS_1_886614E7B7CD9451__CTOR_OFFSET))(this);
	}
};
