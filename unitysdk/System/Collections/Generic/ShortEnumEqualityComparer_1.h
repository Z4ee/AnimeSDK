#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EnumEqualityComparer_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ShortEnumEqualityComparer_1_TypeDefinitionIndex = 1549;

	template <typename T>
	class ShortEnumEqualityComparer_1 : public ::System::Collections::Generic::EnumEqualityComparer_1<T>
	{
	public:
	};
}
