#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowCameraTypeZ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class AnimCurveParam; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2_DISTOTARGET_OFFSET UNITYSDK_OFFSET(0x17D23080)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2__CTOR_OFFSET UNITYSDK_OFFSET(0x17D23100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraStretchV2_TypeDefinitionIndex = 60082;

	class ConfigHollowCameraStretchV2 : public ::System::Object
	{
	public:
		::MoleMole::Config::AnimCurveParam* BackwardFovCurve; // 0x10
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveZ; // 0x18
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveZ; // 0x20
		::MoleMole::Config::AnimCurveParam* ForwardDistortionCurve; // 0x28
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveX; // 0x30
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveY; // 0x38
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveY; // 0x40
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveY; // 0x48
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveX; // 0x50
		::System::String* BackwardSoundActionKey; // 0x58
		::MoleMole::Config::AnimCurveParam* ForwardFovCurve; // 0x60
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveX; // 0x68
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveX; // 0x70
		::MoleMole::Config::AnimCurveParam* BackwardDistortionCurve; // 0x78
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveZ; // 0x80
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveY; // 0x88
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveZ; // 0x90
		::System::String* ForwardSoundActionKey; // 0x98
		::UnityEngine::Vector3 TargetRotDelta; // 0xA0
		::System::Single GroupFramingSize; // 0xAC
		::UnityEngine::Vector2 ScreenCenter; // 0xB0
		::System::Boolean IsForwardBackwardRotSame; // 0xB8
		::System::Boolean IsForwardPosCurveSameXY; // 0xB9
		::System::Boolean IsForwardRotCurveSameXYZ; // 0xBA
		::System::Boolean IsForwardBackwardPosSameXY; // 0xBB
		::System::Boolean IsForwardBackwardSameFovCurve; // 0xBC
		::System::Boolean IsBackwardPosCurveSameXY; // 0xBD
		::System::Boolean IsBackwardRotCurveSameXYZ; // 0xBE
		::System::Int32 ForwardSoundID; // 0xC0
		::System::Single TargetFov; // 0xC4
		::UnityEngine::Vector2 PosOffsetXY; // 0xC8
		::System::Single ConfigDisToTarget; // 0xD0
		::System::Single TargetDistortionIntensity; // 0xD4
		::System::Int32 BackwardSoundID; // 0xD8
		::MoleMole::Config::HollowCameraTypeZ ConfigHollowCameraTypeZ; // 0xDC
		::System::Boolean IsForwardBackwardSameDistortionCurve; // 0xE0
		::System::Boolean IsForwardBackwardSameZ; // 0xE1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2__CTOR_OFFSET))(this);
		}

		::System::Single DisToTarget(::System::Single baseZ, ::System::Single curBaseZ)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2_DISTOTARGET_OFFSET))(this, baseZ, curBaseZ);
		}
	};
}
