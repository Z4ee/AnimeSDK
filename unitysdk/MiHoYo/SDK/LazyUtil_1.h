#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LazyUtil_1_TypeDefinitionIndex = 7927;

	template <typename T>
	class LazyUtil_1 : public ::System::Object
	{
	public:
		::System::Func_1<T>* _valueFactory; // 0x0
		::System::Boolean _isValueCreated; // 0x0
		T _value; // 0x0
		::System::Object* _lock; // 0x0
	};
}
