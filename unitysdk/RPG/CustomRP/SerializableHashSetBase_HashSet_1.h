#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableHashSetBase_HashSet_1_TypeDefinitionIndex = 49517;

	template <typename TValue>
	class SerializableHashSetBase_HashSet_1 : public ::System::Collections::Generic::HashSet_1<TValue>
	{
	public:
	};
}
