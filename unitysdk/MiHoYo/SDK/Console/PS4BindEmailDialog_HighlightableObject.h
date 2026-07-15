#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PS4BindEmailDialog_HighlightableObject_TypeDefinitionIndex = 8689;

	enum class PS4BindEmailDialog_HighlightableObject : ::System::Int32
	{
		AccountInputField = 0,
		CaptchaInputField = 1,
		BindButton = 2,
	};
}
