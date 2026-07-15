#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_TIPPOINT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x39D1010)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_TIPPOINT_GET_TIPPOSITION_OFFSET UNITYSDK_OFFSET(0x39D0F40)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_Leg_TipPoint_TypeDefinitionIndex = 42680;

	struct alignas(8) GroundingThread_Leg_TipPoint
	{
		::RootMotion::IKJob::IKTransformRef tipTransform; // 0x10
		::UnityEngine::Vector3 tipOffset; // 0x20

		::UnityEngine::Vector3 get_TipPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_TIPPOINT_GET_TIPPOSITION_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_TIPPOINT_GET_ISVALID_OFFSET))(this);
		}
	};
}
