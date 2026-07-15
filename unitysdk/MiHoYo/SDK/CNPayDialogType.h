#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CNPayDialogType_TypeDefinitionIndex = 8056;

	enum class CNPayDialogType : ::System::Int32
	{
		Default = 0,
		Native = 1,
		H5 = 2,
	};
}
