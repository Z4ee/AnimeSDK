#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/ClearMode.h"
#include "unitysdk/Collections/Pooled/PooledList_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace Collections::Pooled { template <typename T> class IPooledList_1; }
namespace Collections::Pooled { template <typename T> class PooledListForClass_1; }
namespace Collections::Pooled { template <typename T> class PooledListForStruct_1; }
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
	inline static constexpr unsigned int PooledList_1_TypeDefinitionIndex = 5091;

	template <typename T>
	class PooledList_1 : public ::System::Object
	{
	public:
		::Collections::Pooled::IPooledList_1<T>* _processor; // 0x0
		static ::System::Boolean* StaticGet_IsClass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PooledList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
