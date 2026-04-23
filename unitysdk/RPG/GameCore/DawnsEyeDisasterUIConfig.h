#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_METHOD_3_42CCB787F86EA64B_OFFSET UNITYSDK_OFFSET(0x18852A50)
#define RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_METHOD_3_A6A74C8ECE278D46_OFFSET UNITYSDK_OFFSET(0x18852AB0)
#define RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18852AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeDisasterUIConfig_TypeDefinitionIndex = 21705;

	class DawnsEyeDisasterUIConfig : public ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Progress; // 0x10
		::RPG::GameCore::DynamicFloat* ShowWarning; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42CCB787F86EA64B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeDisasterUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeDisasterUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_METHOD_3_42CCB787F86EA64B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A6A74C8ECE278D46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DawnsEyeDisasterUIConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DawnsEyeDisasterUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_METHOD_3_A6A74C8ECE278D46_OFFSET))(a1, a2);
		}
	};
}
