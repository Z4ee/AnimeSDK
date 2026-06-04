#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TEMPERATUREWEATHERITEMCONFIG_METHOD_2_093033C413DF242E_OFFSET UNITYSDK_OFFSET(0x19DDEC20)
#define RPG_GAMECORE_TEMPERATUREWEATHERITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDEE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TemperatureWeatherItemConfig_TypeDefinitionIndex = 21549;

	class TemperatureWeatherItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Temperature; // 0x10
		::RPG::GameCore::DynamicFloat* Progress; // 0x18
		::RPG::GameCore::DynamicFloat* ShowWarning; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_093033C413DF242E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TemperatureWeatherItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TemperatureWeatherItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERITEMCONFIG_METHOD_2_093033C413DF242E_OFFSET))(a1, a2);
		}
	};
}
