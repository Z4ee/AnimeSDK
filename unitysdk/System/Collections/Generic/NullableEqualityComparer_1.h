#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int NullableEqualityComparer_1_TypeDefinitionIndex = 1544;

	template <typename T>
	class NullableEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<T>>
	{
	public:
	};
}
