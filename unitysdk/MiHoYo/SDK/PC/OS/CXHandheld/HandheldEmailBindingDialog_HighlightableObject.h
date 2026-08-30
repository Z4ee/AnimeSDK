#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldEmailBindingDialog_HighlightableObject_TypeDefinitionIndex = 8748;

	enum class HandheldEmailBindingDialog_HighlightableObject : ::System::Int32
	{
		MailInputField = 0,
		CaptchaInputField = 1,
		AgreementCheckbox = 2,
		BindButton = 3,
	};
}
