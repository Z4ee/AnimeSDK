#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGARCADECAMERABLENDCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1109E6C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigArcadeCameraBlendCurve_TypeDefinitionIndex = 60350;

	class ConfigArcadeCameraBlendCurve : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* PositionCurve_X; // 0x10
		::UnityEngine::AnimationCurve* PositionCurve_Y; // 0x18
		::UnityEngine::AnimationCurve* RotationCurve_Y; // 0x20
		::UnityEngine::AnimationCurve* RotationCurve_X; // 0x28
		::UnityEngine::AnimationCurve* FovCurve; // 0x30
		::UnityEngine::AnimationCurve* PositionCurve_Z; // 0x38
		::UnityEngine::AnimationCurve* RotationCurve_Z; // 0x40
		::System::Single BlendTime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGARCADECAMERABLENDCURVE__CTOR_OFFSET))(this);
		}
	};
}
