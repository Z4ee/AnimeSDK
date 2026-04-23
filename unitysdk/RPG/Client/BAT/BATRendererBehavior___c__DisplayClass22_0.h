#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATRendererBehavior___c__DisplayClass22_0_TypeDefinitionIndex = 67811;

	struct alignas(8) BATRendererBehavior___c__DisplayClass22_0
	{
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* mpbLists; // 0x10
	};
}
