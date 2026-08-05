#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityTimeSlowBase.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWCURVE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x11704560)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x11704570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlowCurve_TypeDefinitionIndex = 41193;

	class ConfigEntityTimeSlowCurve : public ::MoleMole::Config::ConfigEntityTimeSlowBase
	{
	public:
		::System::Single CurveDuration; // 0x20
		::System::Boolean HoldPermanently; // 0x24
		::UnityEngine::AnimationCurve* Curve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWCURVE__CTOR_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWCURVE_GET_DURATION_OFFSET))(this);
		}
	};
}
