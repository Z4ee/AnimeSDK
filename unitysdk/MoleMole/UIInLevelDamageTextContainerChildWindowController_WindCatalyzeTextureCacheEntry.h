#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextContainerChildWindowController_WindCatalyzeTextureCacheEntry_TypeDefinitionIndex = 78053;

	struct alignas(8) UIInLevelDamageTextContainerChildWindowController_WindCatalyzeTextureCacheEntry
	{
		::UnityEngine::Texture2D* Texture; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* RendererPaths; // 0x18
	};
}
