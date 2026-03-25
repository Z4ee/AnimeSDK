#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorKeyValuePoolMember_2_DictionaryStorageType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_16;
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryEnumeratorKeyValuePoolMember_2_TypeDefinitionIndex = 22549;

	template <typename TKey, typename TValue>
	struct ConfigDataPoolDictionaryEnumeratorKeyValuePoolMember_2
	{
		::Class_0_16E4307DCC419505_16* _Pool; // 0x0
		::System::UInt32 _Offset; // 0x0
		::System::Int32 _Count; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorKeyValuePoolMember_2_DictionaryStorageType<TKey, TValue> _StorageType; // 0x0
		::System::Int32 _Capacity; // 0x0
		::System::Int32 _CurrentIndex; // 0x0
		::System::Int32 _FoundCount; // 0x0
		::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _Current_k__BackingField; // 0x0
	};
}
