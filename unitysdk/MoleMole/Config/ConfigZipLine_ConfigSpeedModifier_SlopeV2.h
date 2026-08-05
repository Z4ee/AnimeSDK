#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigZipLine_ConfigSpeedModifier_SlopeV2_Type.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigZipLine_CIntFloatDic; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_SLOPEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1170F970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigSpeedModifier_SlopeV2_TypeDefinitionIndex = 52998;

	class ConfigZipLine_ConfigSpeedModifier_SlopeV2 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_SlopeV2_Type type; // 0x10
		::MoleMole::Config::ConfigZipLine_CIntFloatDic* slope2SpeedAdditive; // 0x18
		::UnityEngine::AnimationCurve* slope2SpeedAdditiveCurve; // 0x20
		::System::Single speedResponse_HalfLife; // 0x28
		::UnityEngine::Vector2 accelRange; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_SLOPEV2__CTOR_OFFSET))(this);
		}
	};
}
