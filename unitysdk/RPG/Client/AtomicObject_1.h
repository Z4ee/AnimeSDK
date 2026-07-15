#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int AtomicObject_1_TypeDefinitionIndex = 56972;

	template <typename T>
	class AtomicObject_1 : public ::System::Object
	{
	public:
		T _value; // 0x0
		T _default; // 0x0
	};
}
