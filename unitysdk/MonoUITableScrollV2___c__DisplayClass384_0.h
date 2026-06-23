#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class HorizontalFlowLayoutGroup;
class MonoUITableScrollV2;
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

inline static constexpr unsigned int MonoUITableScrollV2___c__DisplayClass384_0_TypeDefinitionIndex = 69922;

struct alignas(8) MonoUITableScrollV2___c__DisplayClass384_0
{
	::UnityEngine::UI::HorizontalLayoutGroup* hlayout; // 0x10
	::UnityEngine::UI::GridLayoutGroup* gridLayout; // 0x18
	::UnityEngine::UI::VerticalLayoutGroup* layout; // 0x20
	::MonoUITableScrollV2* __4__this; // 0x28
	::HorizontalFlowLayoutGroup* hfLayout; // 0x30
	::UnityEngine::Vector2 contentSize; // 0x38
};
