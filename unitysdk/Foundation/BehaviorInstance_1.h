#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BehaviorInstance_1_EBehaviorInstanceFinishOperation.h"
#include "unitysdk/Foundation/EBehaviorStatus.h"
#include "unitysdk/Foundation/FBehaviorInstanceTime.h"
#include "unitysdk/Foundation/FBehaviorSwitchStatus.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation
{
	inline static constexpr unsigned int BehaviorInstance_1_TypeDefinitionIndex = 9090;

	template <typename TData>
	class BehaviorInstance_1 : public ::System::Object
	{
	public:
		::System::Double _delayTime; // 0x0
		::System::Double _blendInTime; // 0x0
		::System::Double _activeTime; // 0x0
		::System::Double _blendOutTime; // 0x0
		::System::Double _createTime; // 0x0
		::Foundation::BehaviorInstance_1_EBehaviorInstanceFinishOperation<TData> _finishOperation; // 0x0
		::Foundation::EBehaviorStatus _status; // 0x0
		::System::Double _timeSinceCreation; // 0x0
		::Foundation::Variable_2<TData, ::System::Double> _data; // 0x0
	};
}
