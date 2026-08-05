#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolInstance_1_TypeDefinitionIndex = 8407;

	template <typename T>
	class ObjectPoolInstance_1 : public ::System::Object
	{
	public:
		::System::Object* lockObject; // 0x0
		::System::Collections::Generic::Stack_1<T>* _cache; // 0x0
		::System::Boolean isPoolThreadSafe; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _cacheHash; // 0x0
	};
}
