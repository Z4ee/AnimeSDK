#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Comparer_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int NullableComparer_1_TypeDefinitionIndex = 1539;

	template <typename T>
	class NullableComparer_1 : public ::System::Collections::Generic::Comparer_1<::System::Nullable_1<T>>
	{
	public:
	};
}
