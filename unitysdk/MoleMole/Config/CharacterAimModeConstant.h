#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CHARACTERAIMMODECONSTANT_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0x1BD4F790)
#define MOLEMOLE_CONFIG_CHARACTERAIMMODECONSTANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4F760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimModeConstant_TypeDefinitionIndex = 84667;

	class CharacterAimModeConstant : public ::System::Object
	{
	public:
		::System::Single screenInputIntensityUnit; // 0x10
		::System::Single aimAssistSlowDownRemappingFactor; // 0x14
		::System::Single aimAssistColliderRadiusLossy; // 0x18
		::System::Single aimAssistColliderAxisLossy; // 0x1C
		::System::Single autoAimReachedProtectionTime; // 0x20
		::UnityEngine::AnimationCurve* autoAimInputRecoverCurve; // 0x28
		::System::Single autoAimTargetMaxSpeed; // 0x30
		::System::Single autoAimDegreeLimit; // 0x34
		::System::Single autoAimNeutralMag; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAIMMODECONSTANT__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAIMMODECONSTANT_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
		}
	};
}
