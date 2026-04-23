#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAWNSEYEWEATHERUIBASECONFIG_METHOD_2_0828B4DED9916068_OFFSET UNITYSDK_OFFSET(0x188534A0)
#define RPG_GAMECORE_DAWNSEYEWEATHERUIBASECONFIG_METHOD_2_810A967DD655739D_OFFSET UNITYSDK_OFFSET(0x18853100)
#define RPG_GAMECORE_DAWNSEYEWEATHERUIBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18852BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeWeatherUIBaseConfig_TypeDefinitionIndex = 21701;

	class DawnsEyeWeatherUIBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEWEATHERUIBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_810A967DD655739D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEWEATHERUIBASECONFIG_METHOD_2_810A967DD655739D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_0828B4DED9916068(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEWEATHERUIBASECONFIG_METHOD_2_0828B4DED9916068_OFFSET))(a1, a2);
		}
	};
}
