#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Immutable { template <typename T> class ImmutableQueue_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableStack_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableQueue_1_EnumeratorObject_TypeDefinitionIndex = 7024;

	template <typename T>
	class ImmutableQueue_1_EnumeratorObject : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableQueue_1<T>* _originalQueue; // 0x0
		::System::Collections::Immutable::ImmutableStack_1<T>* _remainingForwardsStack; // 0x0
		::System::Collections::Immutable::ImmutableStack_1<T>* _remainingBackwardsStack; // 0x0
		::System::Boolean _disposed; // 0x0
	};
}
