#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharacterModelCapture_RendererNodeModify_TypeDefinitionIndex = 66906;

	struct alignas(8) MonoEffectPluginCharacterModelCapture_RendererNodeModify
	{
		::System::String* Name; // 0x10
		::System::Int32 RenderQueueOffset; // 0x18
	};
}
