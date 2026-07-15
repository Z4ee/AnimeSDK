#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleLRU_1_TypeDefinitionIndex = 69812;

	template <typename T>
	class SimpleLRU_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _arr; // 0x0
		::System::Int32 count; // 0x0
	};
}
