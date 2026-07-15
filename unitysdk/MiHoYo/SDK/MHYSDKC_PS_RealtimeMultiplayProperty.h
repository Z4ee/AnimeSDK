#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_PS_RealtimeMultiplayProperty_TypeDefinitionIndex = 44415;

	enum class MHYSDKC_PS_RealtimeMultiplayProperty : ::System::Int32
	{
		None = 0,
		CrocssPlatformPlay = 1,
		InEngineSpectating = 2,
	};
}
