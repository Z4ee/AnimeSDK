#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueInstanceCacheManager_2.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueInstanceCacheManager_3_TypeDefinitionIndex = 64383;

	template <typename TKey1, typename TKey2, typename TInstance>
	class RogueInstanceCacheManager_3 : public ::RPG::Client::RogueInstanceCacheManager_2<::System::ValueTuple_2<TKey1, TKey2>, TInstance>
	{
	public:
	};
}
