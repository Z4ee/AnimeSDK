#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22D5BBDDFD6C58E;

namespace RPG::GameCore
{
	inline static constexpr unsigned int TokenRequester_1_TypeDefinitionIndex = 50034;

	template <typename T>
	class TokenRequester_1 : public ::System::Object
	{
	public:
		::Class_1_F22D5BBDDFD6C58E* _TokenQueue_k__BackingField; // 0x0
		T Param; // 0x0
	};
}
