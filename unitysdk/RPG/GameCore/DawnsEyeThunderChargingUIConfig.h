#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_METHOD_3_77522EFB768F2347_OFFSET UNITYSDK_OFFSET(0x19691F00)
#define RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_METHOD_3_CA9167AC61961E8D_OFFSET UNITYSDK_OFFSET(0x19692000)
#define RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19691FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeThunderChargingUIConfig_TypeDefinitionIndex = 21554;

	class DawnsEyeThunderChargingUIConfig : public ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Charge; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77522EFB768F2347(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeThunderChargingUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeThunderChargingUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_METHOD_3_77522EFB768F2347_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA9167AC61961E8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeThunderChargingUIConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeThunderChargingUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_METHOD_3_CA9167AC61961E8D_OFFSET))(a1, a2);
		}
	};
}
