#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface_UGCErrorCode_TypeDefinitionIndex = 44703;

	enum class UGCInterface_UGCErrorCode : ::System::Int32
	{
		ErrorAuthKeyError = -1000431,
		ErrorAuthKeyTimeout = -1000432,
		ErrorUgcTokenError = -1000433,
		ErrorUgcTokenTimeout = -1000434,
	};
}
