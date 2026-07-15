#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTilingByTargetID_RendererData_TypeDefinitionIndex = 66984;

	struct alignas(8) MonoEffectPluginTilingByTargetID_RendererData
	{
		::UnityEngine::Renderer* Renderer; // 0x10
		::System::String* PropertyName; // 0x18
	};
}
