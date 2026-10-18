#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENERGYBARCONFIG_METHOD_2_B1CBCA4DF11E6CE3_OFFSET UNITYSDK_OFFSET(0x1D641E90)
#define RPG_GAMECORE_ENERGYBARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D641F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnergyBarConfig_TypeDefinitionIndex = 16548;

	class EnergyBarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EnergyBarType EnergyBarType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B1CBCA4DF11E6CE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnergyBarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnergyBarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIG_METHOD_2_B1CBCA4DF11E6CE3_OFFSET))(a1, a2);
		}
	};
}
