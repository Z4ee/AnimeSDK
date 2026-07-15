#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUserAgreementDialog_DisplayMode_TypeDefinitionIndex = 8682;

	enum class ConsoleUserAgreementDialog_DisplayMode : ::System::Int32
	{
		DisplayForAccountBinding = 0,
		DisplayForFirstAcceptLocally = 1,
		DisplayForAgreementUpdated = 2,
	};
}
