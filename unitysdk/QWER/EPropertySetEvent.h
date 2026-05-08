#pragma once
#include "unitysdk/unitysdk.h"

namespace QWER
{
	inline static constexpr unsigned int EPropertySetEvent_TypeDefinitionIndex = 9673;

	enum class EPropertySetEvent : ::System::Int32
	{
		Remove = 1,
		Add = 2,
		Modify = 3,
	};
}
