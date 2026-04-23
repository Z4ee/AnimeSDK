#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GachaItemData.h"

namespace RPG::GameCore { class EquipmentRow; }

#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_GET_EQUIPMENTROW_OFFSET UNITYSDK_OFFSET(0xA411F20)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_SETROW_OFFSET UNITYSDK_OFFSET(0xA411E20)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_SET_EQUIPMENTROW_OFFSET UNITYSDK_OFFSET(0xA411F30)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA411DC0)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA___IFIXBASEPROXY_SETROW_OFFSET UNITYSDK_OFFSET(0xA411F40)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaLightConeItemData_TypeDefinitionIndex = 59160;

	class GachaLightConeItemData : public ::RPG::Client::GachaItemData
	{
	public:
		::RPG::GameCore::EquipmentRow* _EquipmentRow_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA__CTOR_OFFSET))(this, itemID);
		}

		::System::Void SetRow(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_SETROW_OFFSET))(this, itemID);
		}

		::RPG::GameCore::EquipmentRow* get_EquipmentRow()
		{
			return ((::RPG::GameCore::EquipmentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_GET_EQUIPMENTROW_OFFSET))(this);
		}

		::System::Void set_EquipmentRow(::RPG::GameCore::EquipmentRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_SET_EQUIPMENTROW_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_SetRow(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA___IFIXBASEPROXY_SETROW_OFFSET))(this, P0);
		}
	};
}
