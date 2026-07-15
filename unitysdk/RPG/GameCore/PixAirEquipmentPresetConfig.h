#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIREQUIPMENTPRESETCONFIG_METHOD_2_98920AA644FA7849_OFFSET UNITYSDK_OFFSET(0x1B4CC9E0)
#define RPG_GAMECORE_PIXAIREQUIPMENTPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CCB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipmentPresetConfig_TypeDefinitionIndex = 15604;

	class PixAirEquipmentPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EquipID; // 0x10
		::System::UInt32 EquipLevel; // 0x14
		::RPG::GameCore::PixAirEnchantmentType EnchantType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPMENTPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_98920AA644FA7849(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEquipmentPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEquipmentPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPMENTPRESETCONFIG_METHOD_2_98920AA644FA7849_OFFSET))(a1, a2);
		}
	};
}
