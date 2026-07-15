#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueInstanceCacheManager_2.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueInstanceCacheManager_4_TypeDefinitionIndex = 64385;

	template <typename TKey1, typename TKey2, typename TKey3, typename TInstance>
	class RogueInstanceCacheManager_4 : public ::RPG::Client::RogueInstanceCacheManager_2<::System::ValueTuple_3<TKey1, TKey2, TKey3>, TInstance>
	{
	public:
	};
}
