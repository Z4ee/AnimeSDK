#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountBindingDialog_HighlightableObject_TypeDefinitionIndex = 8933;

	enum class ConsoleAccountBindingDialog_HighlightableObject : ::System::Int32
	{
		AccountInputField = 0,
		CaptchaInputField = 1,
		AgreementCheckbox = 2,
		BindButton = 3,
	};
}
