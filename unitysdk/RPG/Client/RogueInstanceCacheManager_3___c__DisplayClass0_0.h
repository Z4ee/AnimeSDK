#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueInstanceCacheManager_3___c__DisplayClass0_0_TypeDefinitionIndex = 64384;

	template <typename TKey1, typename TKey2, typename TInstance>
	class RogueInstanceCacheManager_3___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Func_3<TKey1, TKey2, TInstance>* createInstanceImpl; // 0x0
	};
}
