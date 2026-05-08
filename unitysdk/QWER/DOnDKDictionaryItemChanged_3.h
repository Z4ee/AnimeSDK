#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/EPropertyDKDictionaryEvent.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace QWER
{
	inline static constexpr unsigned int DOnDKDictionaryItemChanged_3_TypeDefinitionIndex = 9667;

	template <typename TKey, typename TSubKey, typename TValue>
	class DOnDKDictionaryItemChanged_3 : public ::System::MulticastDelegate
	{
	public:
	};
}
