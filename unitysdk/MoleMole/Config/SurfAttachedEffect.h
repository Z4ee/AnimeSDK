#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int SurfAttachedEffect_TypeDefinitionIndex = 40941;

	struct alignas(8) SurfAttachedEffect
	{
		::System::String* EffectPattern; // 0x10
		::System::String* AttachPointName; // 0x18
	};
}
