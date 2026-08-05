#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraCustomEffectOperation_TypeDefinitionIndex = 52764;

	struct alignas(8) CameraCustomEffectOperation
	{
		::System::Single timePoint; // 0x10
		::System::String* effectKey; // 0x18
	};
}
