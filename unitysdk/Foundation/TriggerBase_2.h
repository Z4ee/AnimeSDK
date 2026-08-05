#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class TriggerBase_2_Event; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int TriggerBase_2_TypeDefinitionIndex = 8187;

	template <typename Key, typename Action>
	class TriggerBase_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<Key, ::Foundation::TriggerBase_2_Event<Key, Action>*>* triggers_; // 0x0
	};
}
