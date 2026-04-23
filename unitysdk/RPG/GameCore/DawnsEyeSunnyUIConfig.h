#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_METHOD_3_0825DC494E24FD9E_OFFSET UNITYSDK_OFFSET(0x18852C60)
#define RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_METHOD_3_D8AADD6180ECE283_OFFSET UNITYSDK_OFFSET(0x18852C00)
#define RPG_GAMECORE_DAWNSEYESUNNYUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18852C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeSunnyUIConfig_TypeDefinitionIndex = 21702;

	class DawnsEyeSunnyUIConfig : public ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Temperature; // 0x10
		::RPG::GameCore::DynamicFloat* Progress; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYESUNNYUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8AADD6180ECE283(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeSunnyUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeSunnyUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_METHOD_3_D8AADD6180ECE283_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0825DC494E24FD9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeSunnyUIConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeSunnyUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_METHOD_3_0825DC494E24FD9E_OFFSET))(a1, a2);
		}
	};
}
