#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int AudioCodecType_TypeDefinitionIndex = 35049;

	enum class AudioCodecType : ::System::Int32
	{
		Unknown = 0,
		ADX = 2,
		HCA = 4,
	};
}
