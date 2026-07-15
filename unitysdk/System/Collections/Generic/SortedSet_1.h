#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/SortedSet_1_ElementCount.h"
#include "unitysdk/System/Collections/Generic/SortedSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1_Node; }
namespace System::Collections::Generic { template <typename T> class TreeWalkPredicate_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedSet_1_TypeDefinitionIndex = 3033;

	template <typename T>
	class SortedSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedSet_1_Node<T>* root; // 0x0
		::System::Collections::Generic::IComparer_1<T>* comparer; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 version; // 0x0
		::System::Object* _syncRoot; // 0x0
		::System::Runtime::Serialization::SerializationInfo* siInfo; // 0x0
	};
}
