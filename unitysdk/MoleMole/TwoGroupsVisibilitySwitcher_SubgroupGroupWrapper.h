#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

namespace MoleMole
{
	inline static constexpr unsigned int TwoGroupsVisibilitySwitcher_SubgroupGroupWrapper_TypeDefinitionIndex = 76156;

	struct alignas(8) TwoGroupsVisibilitySwitcher_SubgroupGroupWrapper
	{
		::System::Int32 subGroupIndex; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objects; // 0x18
	};
}
