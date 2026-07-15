#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueInstanceCacheManager_2_TypeDefinitionIndex = 64382;

	template <typename TKey, typename TInstance>
	class RogueInstanceCacheManager_2 : public ::System::Object
	{
	public:
		::System::Func_2<TKey, TInstance>* _CreateInstanceImpl; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, TInstance>* _CachedInstances; // 0x0
	};
}
