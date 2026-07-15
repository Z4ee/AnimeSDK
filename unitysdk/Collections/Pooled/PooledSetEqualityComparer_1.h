#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledSetEqualityComparer_1_TypeDefinitionIndex = 5108;

	template <typename T>
	class PooledSetEqualityComparer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T>* _comparer; // 0x0
	};
}
