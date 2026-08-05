#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/WriteDeferredDictionary_2_LockHandle.h"
#include "unitysdk/Foundation/WriteDeferredDictionary_2_ModifyRequest.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace Foundation
{
	inline static constexpr unsigned int WriteDeferredDictionary_2_TypeDefinitionIndex = 7930;

	template <typename TKey, typename TValue>
	class WriteDeferredDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dataStorage; // 0x0
		::System::Collections::Generic::List_1<::Foundation::WriteDeferredDictionary_2_ModifyRequest<TKey, TValue>>* _modifyRequests; // 0x0
		::System::UInt32 lockWrite; // 0x0
		::System::Boolean _alwaysLock; // 0x0
	};
}
