#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine_ConfigSpeedModifier_Slope; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDMODE_TANGENT_FINALSPEED_ACCELERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1170FA10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_SpeedMode_Tangent_FinalSpeed_Acceleration_TypeDefinitionIndex = 52994;

	class ConfigZipLine_SpeedMode_Tangent_FinalSpeed_Acceleration : public ::System::Object
	{
	public:
		::System::Single BaseSpeed; // 0x10
		::MoleMole::Config::ConfigZipLine_ConfigSpeedModifier_Slope* configSpeedModifier_Slope; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDMODE_TANGENT_FINALSPEED_ACCELERATION__CTOR_OFFSET))(this);
		}
	};
}
