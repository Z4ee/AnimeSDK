#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_120319518E6F6581_41;
class Class_1_FA4F4A67B1C04320_352;
namespace RPG::Client { class GridFightConsumableItemConfig; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_1_OFFSET UNITYSDK_OFFSET(0x97EB810)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x97EC130)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0x97EE0E0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ISTIMED_OFFSET UNITYSDK_OFFSET(0x97EE100)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x97EE0C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x97EE0A0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0x97EE0F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x97EE0D0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x97EE0B0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0x97EB730)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x97EC050)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x97EDF10)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__ISTIMEDCONSUMABLE_OFFSET UNITYSDK_OFFSET(0x97EDF90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableItemData_TypeDefinitionIndex = 52695;

	class GridFightConsumableItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightConsumableItemConfig* _ConsumableConfig_k__BackingField; // 0x18
		::System::UInt32 _ItemCount_k__BackingField; // 0x20
		::System::UInt32 _ItemID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__CTOR_OFFSET))(this, itemID);
		}

		static ::RPG::Client::GridFightConsumableItemData* CreateFromServer(::Class_1_120319518E6F6581_41* consumable)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::Class_1_120319518E6F6581_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET))(consumable);
		}

		static ::RPG::Client::GridFightConsumableItemData* CreateFromServer_1(::Class_1_FA4F4A67B1C04320_352* consumable)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::Class_1_FA4F4A67B1C04320_352*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_1_OFFSET))(consumable);
		}

		::System::Void Sync(::Class_1_120319518E6F6581_41* consumable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_OFFSET))(this, consumable);
		}

		::System::Void Sync_1(::Class_1_FA4F4A67B1C04320_352* consumable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_352*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_1_OFFSET))(this, consumable);
		}

		::System::Boolean _IsTimedConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__ISTIMEDCONSUMABLE_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightConsumableItemConfig* get_ConsumableConfig()
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET))(this);
		}

		::System::Void set_ConsumableConfig(::RPG::Client::GridFightConsumableItemConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_IsTimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ISTIMED_OFFSET))(this);
		}
	};
}
