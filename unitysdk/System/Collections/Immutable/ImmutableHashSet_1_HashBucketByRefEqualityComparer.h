#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_HashBucketByRefEqualityComparer_TypeDefinitionIndex = 6978;

	template <typename T>
	class ImmutableHashSet_1_HashBucketByRefEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>** StaticGet_s_defaultInstance()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableHashSet_1_HashBucketByRefEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
