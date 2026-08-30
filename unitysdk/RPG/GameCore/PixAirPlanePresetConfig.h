#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirEquipmentPresetConfig; }

#define RPG_GAMECORE_PIXAIRPLANEPRESETCONFIG_METHOD_2_8CB068B9A354A1A1_OFFSET UNITYSDK_OFFSET(0x1D336F20)
#define RPG_GAMECORE_PIXAIRPLANEPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D337C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirPlanePresetConfig_TypeDefinitionIndex = 16074;

	class PixAirPlanePresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint HP; // 0x10
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot1; // 0x18
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot2; // 0x20
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot3; // 0x28
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot4; // 0x30
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot5; // 0x38
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot6; // 0x40
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot7; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRPLANEPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8CB068B9A354A1A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirPlanePresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirPlanePresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRPLANEPRESETCONFIG_METHOD_2_8CB068B9A354A1A1_OFFSET))(a1, a2);
		}
	};
}
