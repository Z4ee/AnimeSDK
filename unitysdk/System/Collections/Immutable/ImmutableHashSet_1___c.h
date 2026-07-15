#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1___c; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1___c_TypeDefinitionIndex = 6989;

	template <typename T>
	class ImmutableHashSet_1___c : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableHashSet_1___c<T>** StaticGet___9()
		{
			return (::System::Collections::Immutable::ImmutableHashSet_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableHashSet_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
