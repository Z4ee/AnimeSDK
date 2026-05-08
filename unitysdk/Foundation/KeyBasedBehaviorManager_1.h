#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FAddBehaviorParam.h"
#include "unitysdk/Foundation/FBehaviorHandle.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimestamp; }
namespace Foundation { template <typename T> class BehaviorManager_1; }
namespace Foundation { template <typename T> class IBehaviorBlender_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int KeyBasedBehaviorManager_1_TypeDefinitionIndex = 9139;

	template <typename TData>
	class KeyBasedBehaviorManager_1 : public ::System::Object
	{
	public:
		::Foundation::BehaviorManager_1<TData>* _manager; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::FBehaviorHandle>* _keyToHandle; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Foundation::FBehaviorHandle>*>* _tagToHandles; // 0x0
	};
}
