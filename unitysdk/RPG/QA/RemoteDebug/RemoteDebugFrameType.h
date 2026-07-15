#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::QA::RemoteDebug
{
	inline static constexpr unsigned int RemoteDebugFrameType_TypeDefinitionIndex = 49467;

	enum class RemoteDebugFrameType : ::System::Byte
	{
		Request = 0x0,
		Response = 0x1,
		Notify = 0x2,
		Ping = 0x3,
		Pong = 0x4,
	};
}
