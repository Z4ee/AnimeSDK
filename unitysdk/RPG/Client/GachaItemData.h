#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_CLIENT_GACHAITEMDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x19399E70)
#define RPG_CLIENT_GACHAITEMDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x1939A3A0)
#define RPG_CLIENT_GACHAITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1939A360)
#define RPG_CLIENT_GACHAITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1939A2E0)
#define RPG_CLIENT_GACHAITEMDATA_HAVEADDITIONALITEM_OFFSET UNITYSDK_OFFSET(0x193999B0)
#define RPG_CLIENT_GACHAITEMDATA_HAVECONVERTITEM_OFFSET UNITYSDK_OFFSET(0x19399A10)
#define RPG_CLIENT_GACHAITEMDATA_SETROW_OFFSET UNITYSDK_OFFSET(0x19396F60)
#define RPG_CLIENT_GACHAITEMDATA_SET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x1939A3B0)
#define RPG_CLIENT_GACHAITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x193998F0)
#define RPG_CLIENT_GACHAITEMDATA_SYNCADDITIONALITEMDATA_OFFSET UNITYSDK_OFFSET(0x19399A70)
#define RPG_CLIENT_GACHAITEMDATA_SYNCCONVERTITEMDATA_OFFSET UNITYSDK_OFFSET(0x19399C70)
#define RPG_CLIENT_GACHAITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19396E50)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaItemData_TypeDefinitionIndex = 64358;

	class GachaItemData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ConvertItems; // 0x10
		::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* AdditionalItems; // 0x20
		::System::Boolean IsNew; // 0x28
		::System::UInt32 _ItemID; // 0x2C

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
