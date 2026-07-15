#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSUserAgreementDialog_DisplayMode_TypeDefinitionIndex = 8620;

	enum class PSUserAgreementDialog_DisplayMode : ::System::Int32
	{
		DisplayForAccountBinding = 0,
		DisplayForFirstAcceptLocally = 1,
		DisplayForAgreementUpdated = 2,
	};
}
