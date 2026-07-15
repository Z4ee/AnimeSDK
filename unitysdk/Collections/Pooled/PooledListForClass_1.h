#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/ClearMode.h"
#include "unitysdk/Collections/Pooled/PooledListForClass_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace Collections::Pooled { template <typename T> class IPooledList_1; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class Array; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledListForClass_1_TypeDefinitionIndex = 5093;

	template <typename T>
	class PooledListForClass_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 s_maxArrayLength = 0x7FEFFFFF; // 0x0
		// static const ::System::Int32 s_defaultCapacity = 0x10; // 0x0
		static ::Collections::Pooled::DefaultArrayPoolSource_1<::System::Object*>** StaticGet_PublicPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PooledListForClass_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Buffers::ArrayPool_1<T>* _pool; // 0x0
		::Il2CppArray<::System::Object*>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
		::Collections::Pooled::IPooledList_1<T>* _pooledListImplementation; // 0x0
	};
}
