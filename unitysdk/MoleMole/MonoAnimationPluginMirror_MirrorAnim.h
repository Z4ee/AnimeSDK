#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimationPluginMirror_MirrorAnim_TypeDefinitionIndex = 49043;

	struct alignas(8) MonoAnimationPluginMirror_MirrorAnim
	{
		::System::String* animName; // 0x10
		::System::String* otherAnimName; // 0x18
	};
}
