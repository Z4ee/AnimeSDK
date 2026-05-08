#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIStrategyGuidePageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass48_0_TypeDefinitionIndex = 79273;

	struct alignas(8) UIStrategyGuidePageController___c__DisplayClass48_0
	{
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* goList; // 0x10
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x18
		::System::Int32 selectIndex; // 0x20
	};
}
