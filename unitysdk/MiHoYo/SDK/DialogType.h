#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DialogType_TypeDefinitionIndex = 8036;

	enum class DialogType : ::System::Int32
	{
		DEFAULT = 0,
		ACCOUNT = 1,
		PHONE = 2,
		QRCODE = 3,
		TAPTAP = 4,
	};
}
