#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowCameraTypeZ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class AnimCurveParam; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2_DISTOTARGET_OFFSET UNITYSDK_OFFSET(0x177DDB50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2__CTOR_OFFSET UNITYSDK_OFFSET(0x177DDBD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraStretchV2_TypeDefinitionIndex = 68216;

	class ConfigHollowCameraStretchV2 : public ::System::Object
	{
	public:
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveZ; // 0x10
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveY; // 0x18
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveY; // 0x20
		::MoleMole::Config::AnimCurveParam* BackwardFovCurve; // 0x28
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveZ; // 0x30
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveX; // 0x38
		::MoleMole::Config::AnimCurveParam* ForwardDistortionCurve; // 0x40
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveX; // 0x48
		::System::String* ForwardSoundActionKey; // 0x50
		::System::String* BackwardSoundActionKey; // 0x58
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveZ; // 0x60
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveY; // 0x68
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveY; // 0x70
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveX; // 0x78
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveX; // 0x80
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveZ; // 0x88
		::MoleMole::Config::AnimCurveParam* BackwardDistortionCurve; // 0x90
		::MoleMole::Config::AnimCurveParam* ForwardFovCurve; // 0x98
		::MoleMole::Config::HollowCameraTypeZ ConfigHollowCameraTypeZ; // 0xA0
		::System::Int32 ForwardSoundID; // 0xA4
		::System::Single TargetDistortionIntensity; // 0xA8
		::System::Boolean IsForwardRotCurveSameXYZ; // 0xAC
		::System::Boolean IsForwardBackwardSameDistortionCurve; // 0xAD
		::System::Boolean IsForwardBackwardSameFovCurve; // 0xAE
		::System::Boolean IsForwardBackwardRotSame; // 0xAF
		::System::Boolean IsForwardPosCurveSameXY; // 0xB0
		::System::Boolean IsForwardBackwardSameZ; // 0xB1
		::System::Boolean IsForwardBackwardPosSameXY; // 0xB2
		::System::Boolean IsBackwardRotCurveSameXYZ; // 0xB3
		::System::Int32 BackwardSoundID; // 0xB4
		::System::Single ConfigDisToTarget; // 0xB8
		::System::Boolean IsBackwardPosCurveSameXY; // 0xBC
		::System::Single GroupFramingSize; // 0xC0
		::UnityEngine::Vector2 PosOffsetXY; // 0xC4
		::System::Single TargetFov; // 0xCC
		::UnityEngine::Vector3 TargetRotDelta; // 0xD0
		::UnityEngine::Vector2 ScreenCenter; // 0xDC

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
