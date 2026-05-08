#pragma once
#include "unitysdk/unitysdk.h"

namespace QWER
{
	inline static constexpr unsigned int EPropertyDKDictionaryEvent_TypeDefinitionIndex = 9666;

	enum class EPropertyDKDictionaryEvent : ::System::Int32
	{
		Remove = 1,
		Add = 2,
		Modify = 4,
	};
}
