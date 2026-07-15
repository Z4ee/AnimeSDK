#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_Enumerator.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_MutationInput.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_MutationResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1_Builder; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_TypeDefinitionIndex = 6976;

	template <typename T>
	class ImmutableHashSet_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableHashSet_1<T>** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableHashSet_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableHashSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>>** StaticGet_s_FreezeBucketAction()
		{
			return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableHashSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::IEqualityComparer_1<T>* _equalityComparer; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>* _root; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>* _hashBucketEqualityComparer; // 0x0
	};
}
