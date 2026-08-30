#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WeatherUIBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TemperatureWeatherItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_METHOD_3_C12FC62AAD525DF6_OFFSET UNITYSDK_OFFSET(0x1D5C86B0)
#define RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_METHOD_3_E91FC7F9EA65335A_OFFSET UNITYSDK_OFFSET(0x1D5C8710)
#define RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C8700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TemperatureWeatherUIConfig_TypeDefinitionIndex = 22535;

	class TemperatureWeatherUIConfig : public ::RPG::GameCore::WeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::TemperatureWeatherItemConfig* Config; // 0x10
		::System::String* ExtraContent; // 0x18
		::RPG::GameCore::TemperatureWeatherItemConfig* ExtraConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C12FC62AAD525DF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TemperatureWeatherUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TemperatureWeatherUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_METHOD_3_C12FC62AAD525DF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E91FC7F9EA65335A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TemperatureWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TemperatureWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_METHOD_3_E91FC7F9EA65335A_OFFSET))(a1, a2);
		}
	};
}
