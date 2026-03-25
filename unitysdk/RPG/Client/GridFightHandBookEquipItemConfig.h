#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightItemConfig; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0x9850580)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_EQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0x9850590)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_ISCONSUMABLE_OFFSET UNITYSDK_OFFSET(0x98505A0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_ISEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x98505B0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x98504E0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x98504C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x98504D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9850480)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9850470)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookEquipItemConfig_TypeDefinitionIndex = 52687;

	class GridFightHandBookEquipItemConfig : public ::System::Object
	{
	public:
		::RPG::Client::GridFightConsumableItemConfig* _consumableConfig; // 0x10
		::RPG::Client::GridFightEquipItemConfig* _equipConfig; // 0x18
		::RPG::Client::GridFightHandBookEquipItemType _ItemType_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::GridFightConsumableItemConfig* consumableConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG__CTOR_OFFSET))(this, consumableConfig);
		}

		::System::Void _ctor_1(::RPG::Client::GridFightEquipItemConfig* equipConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG__CTOR_1_OFFSET))(this, equipConfig);
		}

		::RPG::Client::GridFightHandBookEquipItemType get_ItemType()
		{
			return ((::RPG::Client::GridFightHandBookEquipItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void set_ItemType(::RPG::Client::GridFightHandBookEquipItemType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_SET_ITEMTYPE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightItemConfig* get_ItemConfig()
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_ITEMCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemConfig* get_ConsumableConfig()
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_CONSUMABLECONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_EQUIPCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_ISCONSUMABLE_OFFSET))(this);
		}

		::System::Boolean get_IsEquipment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKEQUIPITEMCONFIG_GET_ISEQUIPMENT_OFFSET))(this);
		}
	};
}
