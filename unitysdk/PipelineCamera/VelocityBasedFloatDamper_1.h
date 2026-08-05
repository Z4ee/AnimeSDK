#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Func_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int VelocityBasedFloatDamper_1_TypeDefinitionIndex = 38324;

	template <typename T>
	struct VelocityBasedFloatDamper_1
	{
		::System::Nullable_1<::System::Single> _currentValue; // 0x0
		::System::Nullable_1<::System::Single> _currentVelocity; // 0x0
		::System::Nullable_1<::System::Single> _lastTargetValue; // 0x0
		::System::Nullable_1<::System::Single> _lastTargetVelocity; // 0x0
		::Foundation::Variable_1<::System::Single> _targetValue; // 0x0
		::Foundation::Variable_1<::System::Single> _targetVelocity; // 0x0
		::Foundation::Variable_1<T> _damper; // 0x0
		::System::Boolean _isEnabled; // 0x0
	};
}
