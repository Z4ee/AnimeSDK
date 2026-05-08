#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B3660)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VRIKCalibrator_Settings_TypeDefinitionIndex = 36729;

	class VRIKCalibrator_Settings : public ::System::Object
	{
	public:
		::System::Single scaleMlp; // 0x10
		::UnityEngine::Vector3 headTrackerForward; // 0x14
		::UnityEngine::Vector3 headTrackerUp; // 0x20
		::UnityEngine::Vector3 handTrackerForward; // 0x2C
		::UnityEngine::Vector3 handTrackerUp; // 0x38
		::UnityEngine::Vector3 footTrackerForward; // 0x44
		::UnityEngine::Vector3 footTrackerUp; // 0x50
		::UnityEngine::Vector3 headOffset; // 0x5C
		::UnityEngine::Vector3 handOffset; // 0x68
		::System::Single footForwardOffset; // 0x74
		::System::Single footInwardOffset; // 0x78
		::System::Single footHeadingOffset; // 0x7C
		::System::Single pelvisPositionWeight; // 0x80
		::System::Single pelvisRotationWeight; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_SETTINGS__CTOR_OFFSET))(this);
		}
	};
}
