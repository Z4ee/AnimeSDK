#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueInstanceCacheManager_4___c__DisplayClass0_0_TypeDefinitionIndex = 64386;

	template <typename TKey1, typename TKey2, typename TKey3, typename TInstance>
	class RogueInstanceCacheManager_4___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Func_4<TKey1, TKey2, TKey3, TInstance>* createInstanceImpl; // 0x0
	};
}
