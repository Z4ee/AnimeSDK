#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightCommonDetailType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_EQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0xA462110)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_EQUIP_OFFSET UNITYSDK_OFFSET(0xA4620A0)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISCRAFTABLE_OFFSET UNITYSDK_OFFSET(0xA462390)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISCYRENE_OFFSET UNITYSDK_OFFSET(0xA462240)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISDELAY_OFFSET UNITYSDK_OFFSET(0xA462640)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISEMBLEM_OFFSET UNITYSDK_OFFSET(0xA4622A0)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISITEM_OFFSET UNITYSDK_OFFSET(0xA4621A0)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISNPC_OFFSET UNITYSDK_OFFSET(0xA4621F0)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISROLE_OFFSET UNITYSDK_OFFSET(0xA462150)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISSHOP_OFFSET UNITYSDK_OFFSET(0xA462250)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_SET_ISDELAY_OFFSET UNITYSDK_OFFSET(0xA462650)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA462820)
#define RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA__HASEQUIPRECIPE_OFFSET UNITYSDK_OFFSET(0xA4623A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightCommonDetailData_TypeDefinitionIndex = 59731;

	class GridFightCommonDetailData : public ::System::Object
	{
	public:
		::System::Object* Data; // 0x10
		::RPG::Client::GridFightCommonDetailType DetailType; // 0x18
		::System::Boolean _IsDelay_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* get_Equip()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_EQUIP_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_EQUIPCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISROLE_OFFSET))(this);
		}

		::System::Boolean get_IsItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISITEM_OFFSET))(this);
		}

		::System::Boolean get_IsNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISNPC_OFFSET))(this);
		}

		::System::Boolean get_IsCyrene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISCYRENE_OFFSET))(this);
		}

		::System::Boolean get_IsShop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISSHOP_OFFSET))(this);
		}

		::System::Boolean get_IsEmblem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISEMBLEM_OFFSET))(this);
		}

		::System::Boolean get_IsCraftable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISCRAFTABLE_OFFSET))(this);
		}

		::System::Boolean get_IsDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_GET_ISDELAY_OFFSET))(this);
		}

		::System::Void set_IsDelay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA_SET_ISDELAY_OFFSET))(this, value);
		}

		::System::Boolean _HasEquipRecipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOMMONDETAILDATA__HASEQUIPRECIPE_OFFSET))(this);
		}
	};
}
