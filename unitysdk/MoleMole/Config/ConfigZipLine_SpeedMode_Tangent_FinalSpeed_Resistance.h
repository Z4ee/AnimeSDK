#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine_ConfigSpeedModifier_SlopeV2; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDMODE_TANGENT_FINALSPEED_RESISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1170FA60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_SpeedMode_Tangent_FinalSpeed_Resistance_TypeDefinitionIndex = 53010;

	class ConfigZipLine_SpeedMode_Tangent_FinalSpeed_Resistance : public ::System::Object
	{
	public:
		::System::Single BaseSpeed; // 0x10
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_SlopeV2* configSpeedModifier_Slope; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDMODE_TANGENT_FINALSPEED_RESISTANCE__CTOR_OFFSET))(this);
		}
	};
}
