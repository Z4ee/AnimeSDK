#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Queue_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Queue_1_TypeDefinitionIndex = 3009;

	template <typename T>
	class Queue_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _head; // 0x0
		::System::Int32 _tail; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
