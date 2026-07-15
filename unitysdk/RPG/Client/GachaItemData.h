#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_CLIENT_GACHAITEMDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x192C5F40)
#define RPG_CLIENT_GACHAITEMDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x192C6480)
#define RPG_CLIENT_GACHAITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x192C6440)
#define RPG_CLIENT_GACHAITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x192C63C0)
#define RPG_CLIENT_GACHAITEMDATA_HAVEADDITIONALITEM_OFFSET UNITYSDK_OFFSET(0x192C5A80)
#define RPG_CLIENT_GACHAITEMDATA_HAVECONVERTITEM_OFFSET UNITYSDK_OFFSET(0x192C5AE0)
#define RPG_CLIENT_GACHAITEMDATA_SETROW_OFFSET UNITYSDK_OFFSET(0x192C3030)
#define RPG_CLIENT_GACHAITEMDATA_SET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x192C6490)
#define RPG_CLIENT_GACHAITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x192C59C0)
#define RPG_CLIENT_GACHAITEMDATA_SYNCADDITIONALITEMDATA_OFFSET UNITYSDK_OFFSET(0x192C5B40)
#define RPG_CLIENT_GACHAITEMDATA_SYNCCONVERTITEMDATA_OFFSET UNITYSDK_OFFSET(0x192C5D40)
#define RPG_CLIENT_GACHAITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x192C2F20)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaItemData_TypeDefinitionIndex = 61377;

	class GachaItemData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ConvertItems; // 0x10
		::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* AdditionalItems; // 0x20
		::System::UInt32 _ItemID; // 0x28
		::System::Boolean IsNew; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HaveAdditionalItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_HAVEADDITIONALITEM_OFFSET))(this);
		}

		::System::Boolean HaveConvertItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_HAVECONVERTITEM_OFFSET))(this);
		}

		::System::Void SyncAdditionalItemData(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SYNCADDITIONALITEMDATA_OFFSET))(this, a1);
		}

		::System::Void SyncConvertItemData(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SYNCCONVERTITEMDATA_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::GachaItemData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void SetRow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SETROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SET_ITEMID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemMainType get_Type()
		{
			return ((::RPG::GameCore::ItemMainType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_GET_ITEMDATA_OFFSET))(this);
		}

		::System::Void set_ItemData(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SET_ITEMDATA_OFFSET))(this, a1);
		}
	};
}
