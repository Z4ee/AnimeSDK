#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData_ItemFlag.h"
#include "unitysdk/RPG/Client/ItemData_ProductPlatformType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_5D0420C2BC146F68;
class Class_1_C086E47345F86771_14;
namespace RPG::GameCore { class ItemComefromRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMDATA_GETCOMEFROM_OFFSET UNITYSDK_OFFSET(0xD430E50)
#define RPG_CLIENT_ITEMDATA_GETFOODTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xD430EA0)
#define RPG_CLIENT_ITEMDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xD431710)
#define RPG_CLIENT_ITEMDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xD431440)
#define RPG_CLIENT_ITEMDATA_GET_COUNTAFTERDELETE_OFFSET UNITYSDK_OFFSET(0xD40D930)
#define RPG_CLIENT_ITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xD431C30)
#define RPG_CLIENT_ITEMDATA_GET_CUSTOMDATALIST_OFFSET UNITYSDK_OFFSET(0xD431B60)
#define RPG_CLIENT_ITEMDATA_GET_DELCOUNT_OFFSET UNITYSDK_OFFSET(0xD431C60)
#define RPG_CLIENT_ITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD4316A0)
#define RPG_CLIENT_ITEMDATA_GET_EXPIREDTIME_OFFSET UNITYSDK_OFFSET(0xD431CA0)
#define RPG_CLIENT_ITEMDATA_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xD431CC0)
#define RPG_CLIENT_ITEMDATA_GET_INVENTORYDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0xD40FC00)
#define RPG_CLIENT_ITEMDATA_GET_ISAUTOUSE_OFFSET UNITYSDK_OFFSET(0xD431BB0)
#define RPG_CLIENT_ITEMDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xD431C80)
#define RPG_CLIENT_ITEMDATA_GET_ISPILE_OFFSET UNITYSDK_OFFSET(0xD415760)
#define RPG_CLIENT_ITEMDATA_GET_ISSELLABLE_OFFSET UNITYSDK_OFFSET(0xD431D30)
#define RPG_CLIENT_ITEMDATA_GET_ISSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xD417390)
#define RPG_CLIENT_ITEMDATA_GET_ISUSABLE_OFFSET UNITYSDK_OFFSET(0xD431CE0)
#define RPG_CLIENT_ITEMDATA_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0xD411C60)
#define RPG_CLIENT_ITEMDATA_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xD40F830)
#define RPG_CLIENT_ITEMDATA_GET_ITEMAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xD431780)
#define RPG_CLIENT_ITEMDATA_GET_ITEMBGDESC_OFFSET UNITYSDK_OFFSET(0xD4318B0)
#define RPG_CLIENT_ITEMDATA_GET_ITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0xD431A50)
#define RPG_CLIENT_ITEMDATA_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0xD431840)
#define RPG_CLIENT_ITEMDATA_GET_ITEMFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xD4319E0)
#define RPG_CLIENT_ITEMDATA_GET_ITEMGROUP_OFFSET UNITYSDK_OFFSET(0xD41DCA0)
#define RPG_CLIENT_ITEMDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xD431970)
#define RPG_CLIENT_ITEMDATA_GET_ITEMMAINTYPE_OFFSET UNITYSDK_OFFSET(0xD40E1F0)
#define RPG_CLIENT_ITEMDATA_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xD4317D0)
#define RPG_CLIENT_ITEMDATA_GET_ITEMRARITY_OFFSET UNITYSDK_OFFSET(0xD431600)
#define RPG_CLIENT_ITEMDATA_GET_ITEMSUBTYPE_OFFSET UNITYSDK_OFFSET(0xD40F7E0)
#define RPG_CLIENT_ITEMDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0xD431480)
#define RPG_CLIENT_ITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD4313B0)
#define RPG_CLIENT_ITEMDATA_GET_PILELIMIT_OFFSET UNITYSDK_OFFSET(0xD431920)
#define RPG_CLIENT_ITEMDATA_GET_PLATFORMS_OFFSET UNITYSDK_OFFSET(0xD431C50)
#define RPG_CLIENT_ITEMDATA_GET_PURPOSETYPE_OFFSET UNITYSDK_OFFSET(0xD431650)
#define RPG_CLIENT_ITEMDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xD40F4E0)
#define RPG_CLIENT_ITEMDATA_GET_RETURNITEMIDLIST_OFFSET UNITYSDK_OFFSET(0xD431AC0)
#define RPG_CLIENT_ITEMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD431420)
#define RPG_CLIENT_ITEMDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xD431460)
#define RPG_CLIENT_ITEMDATA_GET_USEDATAID_OFFSET UNITYSDK_OFFSET(0xD431B10)
#define RPG_CLIENT_ITEMDATA_GET_USEMETHOD_OFFSET UNITYSDK_OFFSET(0xD431510)
#define RPG_CLIENT_ITEMDATA_GET__VISIBLEPREDICATE_OFFSET UNITYSDK_OFFSET(0xD431560)
#define RPG_CLIENT_ITEMDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xD431450)
#define RPG_CLIENT_ITEMDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xD431C40)
#define RPG_CLIENT_ITEMDATA_SET_DELCOUNT_OFFSET UNITYSDK_OFFSET(0xD431C70)
#define RPG_CLIENT_ITEMDATA_SET_EXPIREDTIME_OFFSET UNITYSDK_OFFSET(0xD431CB0)
#define RPG_CLIENT_ITEMDATA_SET_FLAG_OFFSET UNITYSDK_OFFSET(0xD431CD0)
#define RPG_CLIENT_ITEMDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xD431C90)
#define RPG_CLIENT_ITEMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xD431430)
#define RPG_CLIENT_ITEMDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0xD431470)
#define RPG_CLIENT_ITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xD4174A0)
#define RPG_CLIENT_ITEMDATA_TRYCREATEITEMDATA_OFFSET UNITYSDK_OFFSET(0xD417160)
#define RPG_CLIENT_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD4155E0)
#define RPG_CLIENT_ITEMDATA__GETDEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0xD4310C0)
#define RPG_CLIENT_ITEMDATA__GETGENDERCONFIG_OFFSET UNITYSDK_OFFSET(0xD430FD0)
#define RPG_CLIENT_ITEMDATA__INITFLAGS_OFFSET UNITYSDK_OFFSET(0xD430DC0)
#define RPG_CLIENT_ITEMDATA__ISCONFIGIDVALID_OFFSET UNITYSDK_OFFSET(0xD430D60)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemData_TypeDefinitionIndex = 65771;

	class ItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::ItemData_ProductPlatformType>* _Platforms_k__BackingField; // 0x10
		::RPG::GameCore::ItemRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _UID_k__BackingField; // 0x20
		::System::UInt32 _ConfigID_k__BackingField; // 0x24
		::System::Boolean _IsNew_k__BackingField; // 0x28
		::System::Boolean IsFavorite; // 0x29
		::System::UInt32 _Count_k__BackingField; // 0x2C
		::RPG::Client::ItemData_ItemFlag _Flag_k__BackingField; // 0x30
		::System::UInt32 _DelCount_k__BackingField; // 0x34
		::System::UInt64 _ExpiredTime_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ItemData* TryCreateItemData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_TRYCREATEITEMDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsConfigIDValid(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__ISCONFIGIDVALID_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_C086E47345F86771_14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemComefromRow*>* GetComeFrom()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemComefromRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GETCOMEFROM_OFFSET))(this);
		}

		::System::String* GetFoodTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GETFOODTYPEICONPATH_OFFSET))(this);
		}

		::System::Void _InitFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__INITFLAGS_OFFSET))(this);
		}

		::Class_1_5D0420C2BC146F68* _GetGenderConfig()
		{
			return ((::Class_1_5D0420C2BC146F68*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__GETGENDERCONFIG_OFFSET))(this);
		}

		::System::String* _GetDebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__GETDEBUGGERDISPLAY_OFFSET))(this);
		}

		::RPG::GameCore::ItemRow* get_Row()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_CONFIGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_UID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISPILE_OFFSET))(this);
		}

		::System::UInt32 get_Key()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_KEY_OFFSET))(this);
		}

		::System::UInt32 get_UseMethod()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_USEMETHOD_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISVISIBLE_OFFSET))(this);
		}

		::RPG::GameCore::ItemMainType get_ItemMainType()
		{
			return ((::RPG::GameCore::ItemMainType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMMAINTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ItemSubType get_ItemSubType()
		{
			return ((::RPG::GameCore::ItemSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMSUBTYPE_OFFSET))(this);
		}

		::System::UInt32 get_InventoryDisplayTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_INVENTORYDISPLAYTAG_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::GameCore::ItemRarity get_ItemRarity()
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMRARITY_OFFSET))(this);
		}

		::System::UInt32 get_PurposeType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_PURPOSETYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_BGDESC_OFFSET))(this);
		}

		::System::String* get_ItemAvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMAVATARICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMBGDESC_OFFSET))(this);
		}

		::System::UInt32 get_PileLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_PILELIMIT_OFFSET))(this);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::String* get_ItemFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMFIGUREICONPATH_OFFSET))(this);
		}

		::System::String* get_ItemCurrencyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMCURRENCYICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_ReturnItemIDList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_RETURNITEMIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISSHOWREDDOT_OFFSET))(this);
		}

		::System::UInt32 get_ItemGroup()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMGROUP_OFFSET))(this);
		}

		::System::UInt32 get_UseDataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_USEDATAID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CustomDataList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_CUSTOMDATALIST_OFFSET))(this);
		}

		::System::Boolean get_IsAutoUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISAUTOUSE_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::RPG::Client::ItemData_ProductPlatformType>* get_Platforms()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::Client::ItemData_ProductPlatformType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_PLATFORMS_OFFSET))(this);
		}

		::System::UInt32 get_DelCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_DELCOUNT_OFFSET))(this);
		}

		::System::Void set_DelCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_DELCOUNT_OFFSET))(this, a1);
		}

		::System::Int64 get_CountAfterDelete()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_COUNTAFTERDELETE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::UInt64 get_ExpiredTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_EXPIREDTIME_OFFSET))(this);
		}

		::System::Void set_ExpiredTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_EXPIREDTIME_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData_ItemFlag get_Flag()
		{
			return ((::RPG::Client::ItemData_ItemFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_FLAG_OFFSET))(this);
		}

		::System::Void set_Flag(::RPG::Client::ItemData_ItemFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData_ItemFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_FLAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVirtual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISVIRTUAL_OFFSET))(this);
		}

		::System::Boolean get_IsUsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISUSABLE_OFFSET))(this);
		}

		::System::Boolean get_IsSellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISSELLABLE_OFFSET))(this);
		}

		::System::Predicate_1<::System::UInt32>* get__VisiblePredicate()
		{
			return ((::System::Predicate_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET__VISIBLEPREDICATE_OFFSET))(this);
		}
	};
}
