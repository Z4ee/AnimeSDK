#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CNPayDialogType_TypeDefinitionIndex = 7143;

	enum class CNPayDialogType : ::System::Int32
	{
		Default = 0,
		Native = 1,
		H5 = 2,
	};
}
