#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::QA::RemoteDebug
{
	inline static constexpr unsigned int RemoteDebugDiscoveryType_TypeDefinitionIndex = 49468;

	enum class RemoteDebugDiscoveryType : ::System::Byte
	{
		Query = 0x0,
		Reply = 0x1,
	};
}
