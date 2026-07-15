#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorStringKey_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryValuesStringKey_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryValuesStringKey_1__GetEnumerator_d__3_TypeDefinitionIndex = 10402;

	template <typename TValue>
	class ConfigDataPoolDictionaryValuesStringKey_1__GetEnumerator_d__3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TValue __2__current; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryValuesStringKey_1<TValue> __4__this; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorStringKey_1<TValue> _e_5__2; // 0x0
	};
}
