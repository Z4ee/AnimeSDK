#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_D17272E82AE804C2_374;
class Class_1_D1E0AD3915BCCF29_45;
namespace RPG::Client { class GridFightConsumableItemConfig; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_1_OFFSET UNITYSDK_OFFSET(0xBB01150)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xBB01C40)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0xBB03C10)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ISTIMED_OFFSET UNITYSDK_OFFSET(0xBB03C30)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xBB03BF0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xBB03BD0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0xBB03C20)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xBB03C00)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xBB03BE0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xBB01060)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xBB01B50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB039B0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__ISTIMEDCONSUMABLE_OFFSET UNITYSDK_OFFSET(0xBB03A40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableItemData_TypeDefinitionIndex = 60687;

	class GridFightConsumableItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightConsumableItemConfig* _ConsumableConfig_k__BackingField; // 0x18
		::System::UInt32 _ItemID_k__BackingField; // 0x20
		::System::UInt32 _ItemCount_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightConsumableItemData* CreateFromServer(::Class_1_D1E0AD3915BCCF29_45* a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::Class_1_D1E0AD3915BCCF29_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightConsumableItemData* CreateFromServer_1(::Class_1_D17272E82AE804C2_374* a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::Class_1_D17272E82AE804C2_374*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_CREATEFROMSERVER_1_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D1E0AD3915BCCF29_45* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_D17272E82AE804C2_374* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_374*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMDATA_SYNC_1_OFFSET))(this, a1);
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
	};
}
