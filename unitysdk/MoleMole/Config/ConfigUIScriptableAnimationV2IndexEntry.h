#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIScriptableAnimationV2IndexEntry_TypeDefinitionIndex = 69248;

	struct alignas(8) ConfigUIScriptableAnimationV2IndexEntry
	{
		::System::String* AnimationKey; // 0x10
		::Foundation::AssetPath AssetPath; // 0x18
	};
}
