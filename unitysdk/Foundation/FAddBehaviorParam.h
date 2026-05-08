#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FBehaviorInstanceCallback.h"
#include "unitysdk/Foundation/FBehaviorInstanceTime.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class ITimestamp; }

namespace Foundation
{
	inline static constexpr unsigned int FAddBehaviorParam_TypeDefinitionIndex = 9101;

	struct alignas(8) FAddBehaviorParam
	{
		::Foundation::FBehaviorInstanceTime Time; // 0x10
		::Foundation::FBehaviorInstanceCallback Callback; // 0x30
		::System::Int32 Priority; // 0x50
		::Foundation::ITimestamp* Timestamp; // 0x58
		::Foundation::Variable_2<::System::Single, ::System::Double> BlendInAlpha; // 0x60
		::Foundation::Variable_2<::System::Single, ::System::Double> BlendOutAlpha; // 0x78
	};
}
