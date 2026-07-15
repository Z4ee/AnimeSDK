#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ComboLoginType_TypeDefinitionIndex = 8050;

	enum class ComboLoginType : ::System::Int32
	{
		ACCOUNT = 0,
		QRCODE = 1,
	};
}
