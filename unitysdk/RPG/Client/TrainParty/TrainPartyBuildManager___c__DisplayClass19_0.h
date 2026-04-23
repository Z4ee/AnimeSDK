#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager___c__DisplayClass19_0_TypeDefinitionIndex = 68569;

	struct alignas(8) TrainPartyBuildManager___c__DisplayClass19_0
	{
		::RPG::Client::TrainParty::TrainPartyBuildManager* __4__this; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* list; // 0x18
	};
}
