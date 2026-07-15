#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int HashSetEqualityComparer_1_TypeDefinitionIndex = 3691;

	template <typename T>
	class HashSetEqualityComparer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T>* _comparer; // 0x0
	};
}
