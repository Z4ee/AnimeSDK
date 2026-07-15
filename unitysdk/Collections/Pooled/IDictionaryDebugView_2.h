#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int IDictionaryDebugView_2_TypeDefinitionIndex = 5073;

	template <typename K, typename V>
	class IDictionaryDebugView_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<K, V>* _dict; // 0x0
	};
}
