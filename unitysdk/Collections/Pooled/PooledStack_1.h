#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/ClearMode.h"
#include "unitysdk/Collections/Pooled/PooledStack_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class Array; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledStack_1_TypeDefinitionIndex = 5109;

	template <typename T>
	class PooledStack_1 : public ::System::Object
	{
	public:
		::System::Buffers::ArrayPool_1<T>* _pool; // 0x0
		::System::Object* _syncRoot; // 0x0
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
		// static const ::System::Int32 s_defaultCapacity = 0x4; // 0x0
	};
}
