#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SafeObjectHandle_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class SafeObject_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int SafeObjectPoolInstance_1_TypeDefinitionIndex = 8060;

	template <typename T>
	class SafeObjectPoolInstance_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::Foundation::SafeObject_1<T>*>* _cache; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _spawnHash; // 0x0
	};
}
