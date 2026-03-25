#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_IKSOLVERLIMB_AXISDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x2A850)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLimb_AxisDirection_TypeDefinitionIndex = 35211;

	struct alignas(4) IKSolverLimb_AxisDirection
	{
		::UnityEngine::Vector3 direction; // 0x10
		::UnityEngine::Vector3 axis; // 0x1C
		::System::Single dot; // 0x28

		::System::Void _ctor(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_AXISDIRECTION__CTOR_OFFSET))(this, direction, axis);
		}
	};
}
