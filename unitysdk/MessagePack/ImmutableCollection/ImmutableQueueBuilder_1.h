#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Immutable { template <typename T> class ImmutableQueue_1; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableQueueBuilder_1_TypeDefinitionIndex = 7327;

	template <typename T>
	class ImmutableQueueBuilder_1 : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableQueue_1<T>* _Q_k__BackingField; // 0x0
	};
}
