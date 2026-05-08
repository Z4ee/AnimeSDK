#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/EPropertyDictionaryEvent.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace QWER
{
	inline static constexpr unsigned int DOnDictionaryItemChanged_2_TypeDefinitionIndex = 9662;

	template <typename TKey, typename TValue>
	class DOnDictionaryItemChanged_2 : public ::System::MulticastDelegate
	{
	public:
	};
}
