#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::UI::OS
{
	inline static constexpr unsigned int ChannelProtocolDisplayType_TypeDefinitionIndex = 8411;

	enum class ChannelProtocolDisplayType : ::System::Int32
	{
		DisplayForAccountBinding = 0,
		DisplayForFirstAcceptLocally = 1,
		DisplayForProtocolUpdated = 2,
	};
}
