#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class TAMonoPlugin_1; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoPlugin_1__CollectAllRefAssetPath_d__20_TypeDefinitionIndex = 70774;

	template <typename TBehavior>
	class TAMonoPlugin_1__CollectAllRefAssetPath_d__20 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::String* __2__current; // 0x0
		::RPG::Client::TAMonoPlugin_1<TBehavior>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
