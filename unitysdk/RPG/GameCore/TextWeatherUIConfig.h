#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WeatherUIBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEXTWEATHERUICONFIG_METHOD_3_5C417834BB3D5696_OFFSET UNITYSDK_OFFSET(0x1D5CA7C0)
#define RPG_GAMECORE_TEXTWEATHERUICONFIG_METHOD_3_A848FC235EF2F6CA_OFFSET UNITYSDK_OFFSET(0x1D5CA6E0)
#define RPG_GAMECORE_TEXTWEATHERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CA7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextWeatherUIConfig_TypeDefinitionIndex = 22534;

	class TextWeatherUIConfig : public ::RPG::GameCore::WeatherUIBaseConfig
	{
	public:
		::System::String* Content; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTWEATHERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A848FC235EF2F6CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextWeatherUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextWeatherUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTWEATHERUICONFIG_METHOD_3_A848FC235EF2F6CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C417834BB3D5696(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTWEATHERUICONFIG_METHOD_3_5C417834BB3D5696_OFFSET))(a1, a2);
		}
	};
}
