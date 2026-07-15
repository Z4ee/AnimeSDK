#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LongEnumEqualityComparer_1_TypeDefinitionIndex = 1550;

	template <typename T>
	class LongEnumEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<T>
	{
	public:
	};
}
