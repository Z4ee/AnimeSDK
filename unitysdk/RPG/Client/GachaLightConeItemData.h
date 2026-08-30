#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GachaItemData.h"

namespace RPG::GameCore { class EquipmentRow; }

#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_GET_EQUIPMENTROW_OFFSET UNITYSDK_OFFSET(0x1939A4D0)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_SETROW_OFFSET UNITYSDK_OFFSET(0x1939A3D0)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_SET_EQUIPMENTROW_OFFSET UNITYSDK_OFFSET(0x1939A4E0)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1939A3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaLightConeItemData_TypeDefinitionIndex = 64360;

	class GachaLightConeItemData : public ::RPG::Client::GachaItemData
	{
	public:
		::RPG::GameCore::EquipmentRow* _EquipmentRow_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetRow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_SETROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::EquipmentRow* get_EquipmentRow()
		{
			return ((::RPG::GameCore::EquipmentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_GET_EQUIPMENTROW_OFFSET))(this);
		}

		::System::Void set_EquipmentRow(::RPG::GameCore::EquipmentRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_SET_EQUIPMENTROW_OFFSET))(this, a1);
		}
	};
}
