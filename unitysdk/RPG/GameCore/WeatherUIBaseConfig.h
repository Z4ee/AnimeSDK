#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WEATHERUIBASECONFIG_METHOD_2_9B5BE891BB8875C0_OFFSET UNITYSDK_OFFSET(0x1DEC5FE0)
#define RPG_GAMECORE_WEATHERUIBASECONFIG_METHOD_2_D367DDDBC263D560_OFFSET UNITYSDK_OFFSET(0x1DEC6250)
#define RPG_GAMECORE_WEATHERUIBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAB370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WeatherUIBaseConfig_TypeDefinitionIndex = 22533;

	class WeatherUIBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WEATHERUIBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9B5BE891BB8875C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WeatherUIBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WeatherUIBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WEATHERUIBASECONFIG_METHOD_2_9B5BE891BB8875C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D367DDDBC263D560(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WeatherUIBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WeatherUIBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WEATHERUIBASECONFIG_METHOD_2_D367DDDBC263D560_OFFSET))(a1, a2);
		}
	};
}
