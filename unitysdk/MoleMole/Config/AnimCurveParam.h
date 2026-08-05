#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMCURVEPARAM_ISVALID_OFFSET UNITYSDK_OFFSET(0x116E2060)
#define MOLEMOLE_CONFIG_ANIMCURVEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x116E20C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimCurveParam_TypeDefinitionIndex = 84981;

	class AnimCurveParam : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x10
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMCURVEPARAM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMCURVEPARAM_ISVALID_OFFSET))(this);
		}
	};
}
