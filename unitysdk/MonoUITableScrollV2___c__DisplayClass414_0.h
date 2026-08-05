#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class HorizontalFlowLayoutGroup;
class MonoUITableScrollV2;
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

inline static constexpr unsigned int MonoUITableScrollV2___c__DisplayClass414_0_TypeDefinitionIndex = 75064;

struct alignas(8) MonoUITableScrollV2___c__DisplayClass414_0
{
	::UnityEngine::UI::VerticalLayoutGroup* layout; // 0x10
	::HorizontalFlowLayoutGroup* hfLayout; // 0x18
	::UnityEngine::UI::HorizontalLayoutGroup* hlayout; // 0x20
	::MonoUITableScrollV2* __4__this; // 0x28
	::UnityEngine::UI::GridLayoutGroup* gridLayout; // 0x30
	::UnityEngine::Vector2 contentSize; // 0x38
};
