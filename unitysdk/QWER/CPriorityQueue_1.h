#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace QWER
{
	inline static constexpr unsigned int CPriorityQueue_1_TypeDefinitionIndex = 8575;

	template <typename T>
	class CPriorityQueue_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* m_oContainer; // 0x0
		::System::Collections::Generic::IComparer_1<T>* _Comparer_k__BackingField; // 0x0
	};
}
