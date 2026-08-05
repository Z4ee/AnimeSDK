#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FBehaviorBlenderTime.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimestamp; }
namespace Foundation { template <typename T> class BehaviorInstance_1; }
namespace Foundation { template <typename T> class ILerpFunc_1; }
namespace Foundation { template <typename T> class INegateFunc_1; }
namespace Foundation { template <typename T> class IPlusFunc_1; }

namespace Foundation
{
	inline static constexpr unsigned int DeltaBehaviorBlender_1_TypeDefinitionIndex = 8613;

	template <typename TData>
	class DeltaBehaviorBlender_1 : public ::System::Object
	{
	public:
		::System::Nullable_1<TData> _last; // 0x0
		::System::Nullable_1<TData> _delta; // 0x0
		::Foundation::ITimestamp* _timestamp; // 0x0
		::System::Nullable_1<::Foundation::FBehaviorBlenderTime> _time; // 0x0
		::Foundation::ILerpFunc_1<TData>* _lerpFunc; // 0x0
		::Foundation::IPlusFunc_1<TData>* _plusFunc; // 0x0
		::Foundation::INegateFunc_1<TData>* _negateFunc; // 0x0
		TData _zero; // 0x0
	};
}
