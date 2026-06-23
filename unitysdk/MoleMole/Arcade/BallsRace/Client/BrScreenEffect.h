#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BrScreenEffect_TypeDefinitionIndex = 89465;

	struct alignas(8) BrScreenEffect
	{
		::MoleMole::Config::ScreenEffectType Type; // 0x10
		::System::String* Key; // 0x18
		::System::Boolean Loop; // 0x20
	};
}
