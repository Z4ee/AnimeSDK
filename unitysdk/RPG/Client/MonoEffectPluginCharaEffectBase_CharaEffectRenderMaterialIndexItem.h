#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_CharaEffectRenderMaterialIndexItem_TypeDefinitionIndex = 66804;

	struct alignas(8) MonoEffectPluginCharaEffectBase_CharaEffectRenderMaterialIndexItem
	{
		::System::String* RenderName; // 0x10
		::Il2CppArray<::System::UInt32>* MaterialIndexs; // 0x18
	};
}
