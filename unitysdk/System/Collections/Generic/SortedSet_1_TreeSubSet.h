#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/SortedSet_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1_Node; }
namespace System::Collections::Generic { template <typename T> class TreeWalkPredicate_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedSet_1_TreeSubSet_TypeDefinitionIndex = 3034;

	template <typename T>
	class SortedSet_1_TreeSubSet : public ::System::Collections::Generic::SortedSet_1<T>
	{
	public:
		::System::Collections::Generic::SortedSet_1<T>* _underlying; // 0x0
		T _min; // 0x0
		T _max; // 0x0
		::System::Boolean _lBoundActive; // 0x0
		::System::Boolean _uBoundActive; // 0x0
	};
}
