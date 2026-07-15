#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryEnumeratorStringKeyValuePoolMember_1_TypeDefinitionIndex = 10403;

	template <typename TValue>
	struct ConfigDataPoolDictionaryEnumeratorStringKeyValuePoolMember_1
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x0
		::System::UInt32 _Offset; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Boolean _IsHash; // 0x0
		::System::Int32 _Capacity; // 0x0
		::System::Int32 _LinearIndex; // 0x0
		::System::Int32 _BucketIndex; // 0x0
		::System::Int32 _FoundCount; // 0x0
		::System::Collections::Generic::KeyValuePair_2<::System::String*, TValue> _Current; // 0x0
		::System::Int32 _BucketSize; // 0x0
		::System::UInt32 _DataOffset; // 0x0
	};
}
