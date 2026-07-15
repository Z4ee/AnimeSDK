#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/QA/RemoteDebug/RemoteDebugFrameType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::QA::RemoteDebug
{
	inline static constexpr unsigned int RemoteDebugFrame_TypeDefinitionIndex = 49469;

	struct alignas(8) RemoteDebugFrame
	{
		::RPG::QA::RemoteDebug::RemoteDebugFrameType Type; // 0x10
		::System::UInt16 ToolId; // 0x12
		::Il2CppArray<::System::Byte>* Payload; // 0x18
	};
}
