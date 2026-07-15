#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImageType_TypeDefinitionIndex = 8210;

	enum class PopImageType : ::System::Int32
	{
		Default = 0,
		Once = 1,
		Daily = 2,
		Always = 3,
	};
}
