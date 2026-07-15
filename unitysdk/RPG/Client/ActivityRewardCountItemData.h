#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_72;
namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_CREATEBYITEMHELPER_OFFSET UNITYSDK_OFFSET(0x19341920)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19341E10)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x1931E4C0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x19341D50)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x193418D0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19341D10)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1931FB10)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_MAX_OFFSET UNITYSDK_OFFSET(0x19341E50)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1931FB60)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19341A40)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19341CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardCountItemData_TypeDefinitionIndex = 59045;

	class ActivityRewardCountItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _Item; // 0x10
		::System::UInt32 _Max; // 0x18
		::System::UInt32 _Current; // 0x1C

		::System::Void _ctor(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityRewardCountItemData* CreateByItemHelper(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_CREATEBYITEMHELPER_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_72* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_Item()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEM_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_CURRENT_OFFSET))(this);
		}

		::System::UInt32 get_Max()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_MAX_OFFSET))(this);
		}

		::System::UInt32 get_Left()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ISFULL_OFFSET))(this);
		}
	};
}
