#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ParamType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1102B550)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraShake_TypeDefinitionIndex = 69245;

	class ConfigHollowCameraShake : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomZ; // 0x10
		::UnityEngine::AnimationCurve* shakeFadeCurve; // 0x30
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleX; // 0x38
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomY; // 0x58
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleY; // 0x78
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomX; // 0x98
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleZ; // 0xB8
		::System::Boolean isEnableShakeFade; // 0xD8
		::System::Int32 AudioID; // 0xDC
		::MoleMole::Config::ConfigHollowCameraShake_ParamType paramType; // 0xE0
		::System::Single delayTime; // 0xE4
		::System::Int32 frequency; // 0xE8
		::System::Single shakeDirXY; // 0xEC
		::System::Single shakeAmplitudeOffsetXYZ; // 0xF0
		::System::Single shakeDuration; // 0xF4
		::System::Single shakeAmplitudePowerDirY; // 0xF8
		::System::Single shakeAmplitudePowerDirX; // 0xFC
		::System::Single shakeOffsetAngleDirXY; // 0x100
		::System::Single shakeAmplituedePowerDirZ; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASHAKE__CTOR_OFFSET))(this);
		}
	};
}
