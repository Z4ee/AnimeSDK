#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/DG/Tweening/PathMode.h"
#include "unitysdk/DG/Tweening/Plugins/Options/OrientType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int PathOptions_TypeDefinitionIndex = 25464;

	struct alignas(8) PathOptions
	{
		::DG::Tweening::PathMode mode; // 0x10
		::DG::Tweening::Plugins::Options::OrientType orientType; // 0x14
		::DG::Tweening::AxisConstraint lockPositionAxis; // 0x18
		::DG::Tweening::AxisConstraint lockRotationAxis; // 0x1C
		::System::Boolean isClosedPath; // 0x20
		::UnityEngine::Vector3 lookAtPosition; // 0x24
		::UnityEngine::Transform* lookAtTransform; // 0x30
		::System::Single lookAhead; // 0x38
		::System::Boolean hasCustomForwardDirection; // 0x3C
		::UnityEngine::Quaternion forward; // 0x40
		::System::Boolean useLocalPosition; // 0x50
		::UnityEngine::Transform* parent; // 0x58
		::UnityEngine::Quaternion startupRot; // 0x60
		::System::Single startupZRot; // 0x70
	};
}
