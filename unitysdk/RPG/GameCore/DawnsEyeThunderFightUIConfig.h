#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_METHOD_3_5B6388C2160DD4C2_OFFSET UNITYSDK_OFFSET(0x1D018820)
#define RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_METHOD_3_761F1B73D52F1D95_OFFSET UNITYSDK_OFFSET(0x1D018880)
#define RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D018870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeThunderFightUIConfig_TypeDefinitionIndex = 22542;

	class DawnsEyeThunderFightUIConfig : public ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DarkCharge; // 0x10
		::RPG::GameCore::DynamicFloat* LightCharge; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B6388C2160DD4C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeThunderFightUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeThunderFightUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_METHOD_3_5B6388C2160DD4C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_761F1B73D52F1D95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeThunderFightUIConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeThunderFightUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_METHOD_3_761F1B73D52F1D95_OFFSET))(a1, a2);
		}
	};
}
