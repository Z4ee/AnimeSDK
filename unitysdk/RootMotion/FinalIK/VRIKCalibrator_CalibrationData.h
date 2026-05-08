#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class VRIKCalibrator_CalibrationData_Target; }

#define ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1CB80)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VRIKCalibrator_CalibrationData_TypeDefinitionIndex = 36730;

	class VRIKCalibrator_CalibrationData : public ::System::Object
	{
	public:
		::System::Single scale; // 0x10
		::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* head; // 0x18
		::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* leftHand; // 0x20
		::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* rightHand; // 0x28
		::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* pelvis; // 0x30
		::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* leftFoot; // 0x38
		::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* rightFoot; // 0x40
		::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* leftLegGoal; // 0x48
		::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* rightLegGoal; // 0x50
		::UnityEngine::Vector3 pelvisTargetRight; // 0x58
		::System::Single pelvisPositionWeight; // 0x64
		::System::Single pelvisRotationWeight; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKCALIBRATOR_CALIBRATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
