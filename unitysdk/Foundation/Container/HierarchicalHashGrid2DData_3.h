#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/Cell.h"
#include "unitysdk/Foundation/Container/CellFunc.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2DView_2_Item.h"
#include "unitysdk/Foundation/Container/NativeArrayData_3.h"
#include "unitysdk/Foundation/Container/NativeHashSetData_4.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayData_3.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int HierarchicalHashGrid2DData_3_TypeDefinitionIndex = 8608;

	template <typename T, typename TEqualsFunc, typename TPointer>
	struct HierarchicalHashGrid2DData_3
	{
		::System::Byte _numLevels; // 0x0
		::System::Byte _levelRatio; // 0x0
		::Foundation::Container::NativeArrayData_3<::Foundation::Container::EmptyUserData, ::System::Single, TPointer> _cellSize; // 0x0
		::Foundation::Container::NativeArrayData_3<::Foundation::Container::EmptyUserData, ::System::Single, TPointer> _inverseCellSize; // 0x0
		::Foundation::Container::NativeArrayData_3<::Foundation::Container::EmptyUserData, ::System::Int32, TPointer> _levelItemCount; // 0x0
		::Foundation::Container::NativeHashSetData_4<::Foundation::Container::EmptyUserData, ::Foundation::Container::Cell, ::Foundation::Container::CellFunc, TPointer> _cells; // 0x0
		::Foundation::Container::NativeSparseArrayData_3<::System::Int64, ::Foundation::Container::HierarchicalHashGrid2DView_2_Item<T, TEqualsFunc>, TPointer> _items; // 0x0
	};
}
