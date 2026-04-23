#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFF6ABE3B36522D9;
namespace RPG::Client { class ActiveActivityBenefitData; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class DisplayItemConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMDATA_OFFSET UNITYSDK_OFFSET(0x9AA0EF0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMID_OFFSET UNITYSDK_OFFSET(0x9AA0ED0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AA0E90)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9AA0E70)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_BENEFITDATALIST_OFFSET UNITYSDK_OFFSET(0x9AA1010)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_GIFTSHOWLIST_OFFSET UNITYSDK_OFFSET(0x9AA0FF0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_GRANTEDACTIVEITEMNUM_OFFSET UNITYSDK_OFFSET(0x9AA0EB0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9AA0E50)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ITEMLIMIT_OFFSET UNITYSDK_OFFSET(0x9AA0FB0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_POWERCONSUME_OFFSET UNITYSDK_OFFSET(0x9AA0FD0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVEITEMID_OFFSET UNITYSDK_OFFSET(0x9AA0EE0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVEITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AA0EA0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9AA0E80)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_GIFTSHOWLIST_OFFSET UNITYSDK_OFFSET(0x9AA1000)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_GRANTEDACTIVEITEMNUM_OFFSET UNITYSDK_OFFSET(0x9AA0EC0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9AA0E60)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ITEMLIMIT_OFFSET UNITYSDK_OFFSET(0x9AA0FC0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_POWERCONSUME_OFFSET UNITYSDK_OFFSET(0x9AA0FE0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SYNCFROM_OFFSET UNITYSDK_OFFSET(0x9AA1020)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_USEACTIVEITEMWITHCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AA13A0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA0BF0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA__INITCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x9AA0C50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityData_TypeDefinitionIndex = 56601;

	class ActiveActivityData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActiveActivityBenefitData*>* _BenefitDataList_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>* _GiftShowList_k__BackingField; // 0x18
		::System::UInt32 _ActivityID_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24
		::System::UInt32 _GrantedActiveItemNum_k__BackingField; // 0x28
		::System::UInt32 _PowerConsume_k__BackingField; // 0x2C
		::System::UInt32 _ItemLimit_k__BackingField; // 0x30
		::System::UInt32 _ActiveItemID_k__BackingField; // 0x34
		::System::UInt32 _ActiveItemProgress_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA__CTOR_OFFSET))(this, id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_ActiveItemProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMPROGRESS_OFFSET))(this);
		}

		::System::Void set_ActiveItemProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVEITEMPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_GrantedActiveItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_GRANTEDACTIVEITEMNUM_OFFSET))(this);
		}

		::System::Void set_GrantedActiveItemNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_GRANTEDACTIVEITEMNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_ActiveItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMID_OFFSET))(this);
		}

		::System::Void set_ActiveItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVEITEMID_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_ActiveItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMDATA_OFFSET))(this);
		}

		::System::UInt32 get_ItemLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ITEMLIMIT_OFFSET))(this);
		}

		::System::Void set_ItemLimit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ITEMLIMIT_OFFSET))(this, value);
		}

		::System::UInt32 get_PowerConsume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_POWERCONSUME_OFFSET))(this);
		}

		::System::Void set_PowerConsume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_POWERCONSUME_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>* get_GiftShowList()
		{
			return ((::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_GIFTSHOWLIST_OFFSET))(this);
		}

		::System::Void set_GiftShowList(::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_GIFTSHOWLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActiveActivityBenefitData*>* get_BenefitDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActiveActivityBenefitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_BENEFITDATALIST_OFFSET))(this);
		}

		::System::Void SyncFrom(::Class_1_EFF6ABE3B36522D9* protoData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SYNCFROM_OFFSET))(this, protoData);
		}

		::System::Void UseActiveItemWithCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_USEACTIVEITEMWITHCALLBACK_OFFSET))(this, callback);
		}

		::System::Void _InitConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA__INITCONFIGDATA_OFFSET))(this);
		}
	};
}
