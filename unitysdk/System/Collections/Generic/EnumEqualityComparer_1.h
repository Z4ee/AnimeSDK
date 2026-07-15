#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int EnumEqualityComparer_1_TypeDefinitionIndex = 1547;

	template <typename T>
	class EnumEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<T>
	{
	public:
	};
}
