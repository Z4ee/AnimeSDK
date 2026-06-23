#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedSetEqualityComparer_1_TypeDefinitionIndex = 3994;

	template <typename T>
	class SortedSetEqualityComparer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<T>* _comparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* _memberEqualityComparer; // 0x0
	};
}
