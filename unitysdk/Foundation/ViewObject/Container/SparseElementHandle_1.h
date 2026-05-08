#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1; }
namespace System { class Object; }
namespace System { template <typename T> class WeakReference_1; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int SparseElementHandle_1_TypeDefinitionIndex = 41560;

	template <typename T>
	struct SparseElementHandle_1
	{
		::System::Int32 Index; // 0x0
		::System::Int32 CheckNumber; // 0x0
		::System::WeakReference_1<::Foundation::ViewObject::Container::TSparseList_1<T>*>* _sparseList; // 0x0
	};
}
