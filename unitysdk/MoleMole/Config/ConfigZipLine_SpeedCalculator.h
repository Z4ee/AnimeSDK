#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_FINALSPEED_MAX_OFFSET UNITYSDK_OFFSET(0x172B3B00)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_FINALSPEED_MIN_OFFSET UNITYSDK_OFFSET(0x172B3AF0)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_SPEED_KM_OFFSET UNITYSDK_OFFSET(0x172B3A80)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x172B3A60)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_SET_SPEED_KM_OFFSET UNITYSDK_OFFSET(0x172B3A90)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x172B3A70)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x172B3B10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_SpeedCalculator_TypeDefinitionIndex = 53024;

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
