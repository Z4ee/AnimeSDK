#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigZipLine_ConfigSpeedModifier_Slope_Type.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine_CIntFloatDic; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_SLOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FB750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigSpeedModifier_Slope_TypeDefinitionIndex = 53012;

	class ConfigZipLine_ConfigSpeedModifier_Slope : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_Slope_Type type; // 0x10
		::MoleMole::Config::ConfigZipLine_CIntFloatDic* slope2SpeedAdditive; // 0x18
		::MoleMole::Config::ConfigZipLine_CIntFloatDic* slope2Acceleration; // 0x20
		::UnityEngine::AnimationCurve* slope2SpeedAdditiveCurve; // 0x28
		::UnityEngine::AnimationCurve* slope2AccelerationCurve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_SLOPE__CTOR_OFFSET))(this);
		}
	};
}
