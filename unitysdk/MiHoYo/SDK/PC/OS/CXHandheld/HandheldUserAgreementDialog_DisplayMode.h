#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldUserAgreementDialog_DisplayMode_TypeDefinitionIndex = 20912;

	enum class HandheldUserAgreementDialog_DisplayMode : ::System::Int32
	{
		DisplayForAccountBinding = 0,
		DisplayForFirstAcceptLocally = 1,
		DisplayForAgreementUpdated = 2,
	};
}
