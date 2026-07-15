#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int SecurePooledObject_1_TypeDefinitionIndex = 7046;

	template <typename T>
	class SecurePooledObject_1 : public ::System::Object
	{
	public:
		T _value; // 0x0
		::System::Int32 _owner; // 0x0
	};
}
