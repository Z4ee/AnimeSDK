#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::DataStructures { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Foundation::DataStructures
{
	inline static constexpr unsigned int HashSetEqualityComparer_1_TypeDefinitionIndex = 7691;

	template <typename T>
	class HashSetEqualityComparer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T>* m_comparer; // 0x0
	};
}
