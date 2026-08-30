#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_1.h"
#include "unitysdk/System/Object.h"

class Class_1_14D067CABD7A77CE;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD146D60)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETCONSUMABLEDATA_OFFSET UNITYSDK_OFFSET(0xD1472E0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETEQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0xD1471D0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETITEM_OFFSET UNITYSDK_OFFSET(0xD147130)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETROLE_OFFSET UNITYSDK_OFFSET(0xD1470E0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0xD146F00)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPID_OFFSET UNITYSDK_OFFSET(0xD146EC0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPTYPE_OFFSET UNITYSDK_OFFSET(0xD146EA0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISCONSUMABLE_OFFSET UNITYSDK_OFFSET(0xD146FC0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0xD147050)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISITEM_OFFSET UNITYSDK_OFFSET(0xD146F70)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISROLE_OFFSET UNITYSDK_OFFSET(0xD146F20)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_NUM_OFFSET UNITYSDK_OFFSET(0xD146EE0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0xD146F10)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPID_OFFSET UNITYSDK_OFFSET(0xD146ED0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPTYPE_OFFSET UNITYSDK_OFFSET(0xD146EB0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_NUM_OFFSET UNITYSDK_OFFSET(0xD146EF0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD146E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusDropData_TypeDefinitionIndex = 64483;

	class GridFightBonusDropData : public ::System::Object
	{
	public:
		::System::UInt32 _Num_k__BackingField; // 0x10
		::System::UInt32 _DropId_k__BackingField; // 0x14
		::Enum_3_F80BFD5B986D5503_1 _DropType_k__BackingField; // 0x18
		::System::UInt32 _DelayRound_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightBonusDropData* Create(::Class_1_14D067CABD7A77CE* a1)
		{
			return ((::RPG::Client::GridFightBonusDropData*(*)(::Class_1_14D067CABD7A77CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CREATE_OFFSET))(a1);
		}

		::Enum_3_F80BFD5B986D5503_1 get_DropType()
		{
			return ((::Enum_3_F80BFD5B986D5503_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPTYPE_OFFSET))(this);
		}

		::System::Void set_DropType(::Enum_3_F80BFD5B986D5503_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DropId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPID_OFFSET))(this);
		}

		::System::Void set_DropId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_NUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_DelayRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DELAYROUND_OFFSET))(this);
		}

		::System::Void set_DelayRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DELAYROUND_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISROLE_OFFSET))(this);
		}

		::System::Boolean get_IsItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISITEM_OFFSET))(this);
		}

		::System::Boolean get_IsConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISCONSUMABLE_OFFSET))(this);
		}

		::System::Boolean get_IsEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_ISEQUIP_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETROLE_OFFSET))(this);
		}

		::RPG::Client::GridFightItemConfig* GetItem()
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETITEM_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* GetEquipConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETEQUIPCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableData()
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GETCONSUMABLEDATA_OFFSET))(this);
		}
	};
}
