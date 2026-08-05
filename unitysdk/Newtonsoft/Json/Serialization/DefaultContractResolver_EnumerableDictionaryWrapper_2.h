#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver_EnumerableDictionaryWrapper_2_TypeDefinitionIndex = 7102;

	template <typename TEnumeratorKey, typename TEnumeratorValue>
	class DefaultContractResolver_EnumerableDictionaryWrapper_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* _e; // 0x0
	};
}
