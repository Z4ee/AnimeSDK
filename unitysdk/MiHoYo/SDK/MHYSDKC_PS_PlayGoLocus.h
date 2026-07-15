#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_PS_PlayGoLocus_TypeDefinitionIndex = 44413;

	enum class MHYSDKC_PS_PlayGoLocus : ::System::Int32
	{
		NotDownloaded = 0,
		LocalFast = 3,
	};
}
