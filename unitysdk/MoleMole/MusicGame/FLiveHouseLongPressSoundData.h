#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::MusicGame
{
	inline static constexpr unsigned int FLiveHouseLongPressSoundData_TypeDefinitionIndex = 66794;

	struct alignas(8) FLiveHouseLongPressSoundData
	{
		::System::String* SoundOnStart; // 0x10
		::System::String* SoundOnMiddlePoint; // 0x18
		::System::String* SoundOnEnd; // 0x20
	};
}
