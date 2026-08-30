#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TABehaviorBase; }
namespace RPG::Client { template <typename T> class TAMonoPlugin_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoPlugin_1___c__DisplayClass6_0_TypeDefinitionIndex = 70737;

	template <typename TBehavior>
	class TAMonoPlugin_1___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::TABehaviorBase* behavior; // 0x0
		::System::Int32 instanceID; // 0x0
		::RPG::Client::TAMonoPlugin_1<TBehavior>* __4__this; // 0x0
	};
}
