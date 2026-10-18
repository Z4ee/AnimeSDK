#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyEditItemGroupViewModel_2_TypeDefinitionIndex = 79605;

	template <typename TItem, typename TConfig>
	class MechCraftDiyEditItemGroupViewModel_2 : public ::System::Object
	{
	public:
		::System::Func_2<TConfig, TItem>* _ItemFactory; // 0x0
		::System::Collections::Generic::List_1<TItem>* _Items_k__BackingField; // 0x0
		TItem _SelectedItem_k__BackingField; // 0x0
	};
}
