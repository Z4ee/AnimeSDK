#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Immutable { template <typename T> class ImmutableStack_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableStack_1_EnumeratorObject_TypeDefinitionIndex = 7038;

	template <typename T>
	class ImmutableStack_1_EnumeratorObject : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableStack_1<T>* _originalStack; // 0x0
		::System::Collections::Immutable::ImmutableStack_1<T>* _remainingStack; // 0x0
		::System::Boolean _disposed; // 0x0
	};
}
