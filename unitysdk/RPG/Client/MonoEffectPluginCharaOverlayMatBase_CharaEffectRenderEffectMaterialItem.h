#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaOverlayMatBase_CharaEffectRenderEffectMaterialItem_TypeDefinitionIndex = 66812;

	struct alignas(8) MonoEffectPluginCharaOverlayMatBase_CharaEffectRenderEffectMaterialItem
	{
		::System::String* RenderName; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* Materials; // 0x18
	};
}
