#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { template <typename T> class MechCraftDiySignal_1; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiySignal_1___c__DisplayClass2_0_TypeDefinitionIndex = 79621;

	template <typename T>
	class MechCraftDiySignal_1___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftDiySignal_1<T>* __4__this; // 0x0
		::System::Action_1<T>* callback; // 0x0
	};
}
