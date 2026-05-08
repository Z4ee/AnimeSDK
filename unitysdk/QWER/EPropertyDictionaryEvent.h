#pragma once
#include "unitysdk/unitysdk.h"

namespace QWER
{
	inline static constexpr unsigned int EPropertyDictionaryEvent_TypeDefinitionIndex = 9661;

	enum class EPropertyDictionaryEvent : ::System::Int32
	{
		Remove = 1,
		Add = 2,
		Modify = 4,
	};
}
