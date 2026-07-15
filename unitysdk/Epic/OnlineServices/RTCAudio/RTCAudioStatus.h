#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int RTCAudioStatus_TypeDefinitionIndex = 43138;

	enum class RTCAudioStatus : ::System::Int32
	{
		Unsupported = 0,
		Enabled = 1,
		Disabled = 2,
		AdminDisabled = 3,
		NotListeningDisabled = 4,
	};
}
