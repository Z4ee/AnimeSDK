#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorStringKey_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryKeysStringKey_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryKeysStringKey_1__GetEnumerator_d__3_TypeDefinitionIndex = 10400;

	template <typename TValue>
	class ConfigDataPoolDictionaryKeysStringKey_1__GetEnumerator_d__3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::String* __2__current; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryKeysStringKey_1<TValue> __4__this; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorStringKey_1<TValue> _e_5__2; // 0x0
	};
}
