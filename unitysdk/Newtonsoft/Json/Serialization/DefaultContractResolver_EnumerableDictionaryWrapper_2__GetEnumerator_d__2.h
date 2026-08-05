#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { template <typename T1, typename T2> class DefaultContractResolver_EnumerableDictionaryWrapper_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver_EnumerableDictionaryWrapper_2__GetEnumerator_d__2_TypeDefinitionIndex = 7103;

	template <typename TEnumeratorKey, typename TEnumeratorValue>
	class DefaultContractResolver_EnumerableDictionaryWrapper_2__GetEnumerator_d__2 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::Object*> __2__current; // 0x0
		::Newtonsoft::Json::Serialization::DefaultContractResolver_EnumerableDictionaryWrapper_2<TEnumeratorKey, TEnumeratorValue>* __4__this; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* __7__wrap1; // 0x0
	};
}
