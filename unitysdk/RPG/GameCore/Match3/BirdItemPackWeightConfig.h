#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDITEMPACKWEIGHTCONFIG_METHOD_2_E35BB5D51F265CD4_OFFSET UNITYSDK_OFFSET(0x198DFF80)
#define RPG_GAMECORE_MATCH3_BIRDITEMPACKWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198E0070)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdItemPackWeightConfig_TypeDefinitionIndex = 23575;

	class BirdItemPackWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDITEMPACKWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E35BB5D51F265CD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDITEMPACKWEIGHTCONFIG_METHOD_2_E35BB5D51F265CD4_OFFSET))(a1, a2);
		}
	};
}
