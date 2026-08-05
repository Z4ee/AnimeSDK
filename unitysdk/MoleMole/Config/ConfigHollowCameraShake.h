#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ParamType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1625EEF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraShake_TypeDefinitionIndex = 43561;

	class ConfigHollowCameraShake : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomX; // 0x10
		::UnityEngine::AnimationCurve* shakeFadeCurve; // 0x30
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleX; // 0x38
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleY; // 0x58
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomY; // 0x78
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomZ; // 0x98
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleZ; // 0xB8
		::System::Single shakeDirXY; // 0xD8
		::System::Single shakeAmplitudePowerDirX; // 0xDC
		::System::Single shakeAmplitudeOffsetXYZ; // 0xE0
		::System::Single delayTime; // 0xE4
		::System::Int32 frequency; // 0xE8
		::System::Boolean isEnableShakeFade; // 0xEC
		::MoleMole::Config::ConfigHollowCameraShake_ParamType paramType; // 0xF0
		::System::Int32 AudioID; // 0xF4
		::System::Single shakeOffsetAngleDirXY; // 0xF8
		::System::Single shakeAmplitudePowerDirY; // 0xFC
		::System::Single shakeAmplituedePowerDirZ; // 0x100
		::System::Single shakeDuration; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASHAKE__CTOR_OFFSET))(this);
		}
	};
}
