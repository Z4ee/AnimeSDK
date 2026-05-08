#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BehaviorManager_1_FSlot.h"
#include "unitysdk/Foundation/FAddBehaviorParam.h"
#include "unitysdk/Foundation/FBehaviorHandle.h"
#include "unitysdk/Foundation/FBehaviorSwitchStatus.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimestamp; }
namespace Foundation { template <typename T> class IBehaviorBlender_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int BehaviorManager_1_TypeDefinitionIndex = 8782;

	template <typename TData>
	class BehaviorManager_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Foundation::BehaviorManager_1_FSlot<TData>>* _activeInstances; // 0x0
		::System::Int32 _freeSlot; // 0x0
		::System::Int32 _activeCount; // 0x0
		::System::Int32 _activeIndex; // 0x0
		TData _data; // 0x0
		::Foundation::IBehaviorBlender_1<TData>* _blender; // 0x0
		::Foundation::Variable_2<TData, ::System::Double> _defaultData; // 0x0
		::Foundation::ITimestamp* _timestamp; // 0x0
	};
}
