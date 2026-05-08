#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_PS_PlayGoDialogMode_TypeDefinitionIndex = 34967;

	enum class MHYSDKC_PS_PlayGoDialogMode : ::System::Int32
	{
		Progress = 0,
		LanguageRequest = 1,
	};
}
