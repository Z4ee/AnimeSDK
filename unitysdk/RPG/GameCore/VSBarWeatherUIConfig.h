#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WeatherUIBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_VSBARWEATHERUICONFIG_METHOD_3_4D1CC4C8A0253089_OFFSET UNITYSDK_OFFSET(0x1B897A80)
#define RPG_GAMECORE_VSBARWEATHERUICONFIG_METHOD_3_56C36F8EEAAD3EE6_OFFSET UNITYSDK_OFFSET(0x1B897A20)
#define RPG_GAMECORE_VSBARWEATHERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B897A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VSBarWeatherUIConfig_TypeDefinitionIndex = 21972;

	class VSBarWeatherUIConfig : public ::RPG::GameCore::WeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LeftNum; // 0x10
		::RPG::GameCore::DynamicFloat* RightNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VSBARWEATHERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56C36F8EEAAD3EE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VSBarWeatherUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VSBarWeatherUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VSBARWEATHERUICONFIG_METHOD_3_56C36F8EEAAD3EE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D1CC4C8A0253089(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VSBarWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VSBarWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VSBARWEATHERUICONFIG_METHOD_3_4D1CC4C8A0253089_OFFSET))(a1, a2);
		}
	};
}
