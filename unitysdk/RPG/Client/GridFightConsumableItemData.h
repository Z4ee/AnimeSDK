#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_D17272E82AE804C2_430;
class Class_1_D17272E82AE804C2_466;
namespace RPG::Client { class GridFightConsumableItemConfig; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_1_OFFSET UNITYSDK_OFFSET(0xD153540)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xD1541C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0xD1561F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0xD156270)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD1561D0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ISTIMED_OFFSET UNITYSDK_OFFSET(0xD156210)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD1561B0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xD156190)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0xD156200)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0xD156280)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD1561E0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD1561C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xD1561A0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xD153450)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xD1540D0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD147410)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__ISTIMEDCONSUMABLE_OFFSET UNITYSDK_OFFSET(0xD156000)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableItemData_TypeDefinitionIndex = 64963;

	class GridFightConsumableItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightConsumableItemConfig* _ConsumableConfig_k__BackingField; // 0x18
		::System::UInt32 _GroupID_k__BackingField; // 0x20
		::System::UInt32 _ItemCount_k__BackingField; // 0x24
		::System::UInt32 _DelayRound_k__BackingField; // 0x28
		::System::UInt32 _ItemID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::GridFightConsumableItemData* CreateFromServer(::Class_1_D17272E82AE804C2_466* a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::Class_1_D17272E82AE804C2_466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightConsumableItemData* CreateFromServer_1(::Class_1_D17272E82AE804C2_430* a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::Class_1_D17272E82AE804C2_430*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_1_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_466* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_D17272E82AE804C2_430* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_430*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_1_OFFSET))(this, a1);
		}

		::System::Boolean _IsTimedConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__ISTIMEDCONSUMABLE_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemConfig* get_ConsumableConfig()
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET))(this);
		}

		::System::Void set_ConsumableConfig(::RPG::Client::GridFightConsumableItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ISTIMED_OFFSET))(this);
		}

		::System::UInt32 get_DelayRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_DELAYROUND_OFFSET))(this);
		}

		::System::Void set_DelayRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_DELAYROUND_OFFSET))(this, a1);
		}
	};
}
