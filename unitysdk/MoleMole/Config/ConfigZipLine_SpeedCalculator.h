#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_FINALSPEED_MAX_OFFSET UNITYSDK_OFFSET(0x17D64430)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_FINALSPEED_MIN_OFFSET UNITYSDK_OFFSET(0x17D64420)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_SPEED_KM_OFFSET UNITYSDK_OFFSET(0x17D643B0)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x17D64390)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_SET_SPEED_KM_OFFSET UNITYSDK_OFFSET(0x17D643C0)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x17D643A0)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17D64440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_SpeedCalculator_TypeDefinitionIndex = 51223;

	class ConfigZipLine_SpeedCalculator : public ::System::Object
	{
	public:
		::System::Single _speed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Single get_speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_speed_km()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_SPEED_KM_OFFSET))(this);
		}

		::System::Void set_speed_km(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_SET_SPEED_KM_OFFSET))(this, value);
		}

		::System::Single get_finalSpeed_min()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_FINALSPEED_MIN_OFFSET))(this);
		}

		::System::Single get_finalSpeed_max()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_FINALSPEED_MAX_OFFSET))(this);
		}
	};
}
