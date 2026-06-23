#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/Foundation/ViewObject/Container/TSparseList_1_Enumerator.h"
#include "unitysdk/Foundation/ViewObject/Container/TSparseList_1_FDataType.h"
#include "unitysdk/Foundation/ViewObject/Container/TSparseList_1_HandleEnumerator.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Container { template <typename T> class SimpleClusterArray_1; }
namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1_SparseOpDelegate; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int TSparseList_1_TypeDefinitionIndex = 61145;

	template <typename T>
	class TSparseList_1 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::Container::TSparseList_1_SparseOpDelegate<T>* CustomCreator; // 0x0
		::Foundation::ViewObject::Container::TSparseList_1_SparseOpDelegate<T>* CustomDeleter; // 0x0
		::System::Int32 _capacity_k__BackingField; // 0x0
		::Foundation::ViewObject::Container::SimpleClusterArray_1<::Foundation::ViewObject::Container::TSparseList_1_FDataType<T>>* _internalData; // 0x0
		::System::Int32 _firstFreeIndex; // 0x0
		::System::Int32 _freeCount; // 0x0
		::System::Int32 _currentCheckNumber; // 0x0
	};
}
