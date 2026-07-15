#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PayDialogType_TypeDefinitionIndex = 8055;

	enum class PayDialogType : ::System::Int32
	{
		Default = 0,
		Native = 1,
		Embedded = 2,
		AdyenDirect = 3,
	};
}
