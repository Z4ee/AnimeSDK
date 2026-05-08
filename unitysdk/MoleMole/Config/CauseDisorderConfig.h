#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int CauseDisorderConfig_TypeDefinitionIndex = 50047;

	struct alignas(8) CauseDisorderConfig
	{
		::System::String* CausedAudio; // 0x10
	};
}
