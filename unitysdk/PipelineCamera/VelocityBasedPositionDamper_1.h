#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/PositionDampingAxis.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int VelocityBasedPositionDamper_1_TypeDefinitionIndex = 37668;

	template <typename T>
	struct VelocityBasedPositionDamper_1
	{
		::System::Nullable_1<::UnityEngine::Vector3> _currentPosition; // 0x0
		::System::Nullable_1<::UnityEngine::Vector3> _currentVelocity; // 0x0
		::System::Nullable_1<::UnityEngine::Vector3> _lastTargetPosition; // 0x0
		::System::Nullable_1<::UnityEngine::Vector3> _lastTargetVelocity; // 0x0
		::Foundation::Variable_1<::UnityEngine::Vector3> _targetPosition; // 0x0
		::Foundation::Variable_1<::UnityEngine::Vector3> _targetVelocity; // 0x0
		::Foundation::Variable_1<T> _damperX; // 0x0
		::Foundation::Variable_1<T> _damperY; // 0x0
		::Foundation::Variable_1<T> _damperZ; // 0x0
		::System::Boolean _isEnabled; // 0x0
	};
}
