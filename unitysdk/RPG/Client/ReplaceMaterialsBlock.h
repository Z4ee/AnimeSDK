#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

namespace RPG::Client
{
	inline static constexpr unsigned int ReplaceMaterialsBlock_TypeDefinitionIndex = 66848;

	struct alignas(8) ReplaceMaterialsBlock
	{
		::System::String* RendererName; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* Materials; // 0x18
	};
}
