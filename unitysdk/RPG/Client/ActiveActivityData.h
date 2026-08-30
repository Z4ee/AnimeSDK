#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3714832A39691304_1;
namespace RPG::Client { class ActiveActivityBenefitData; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class DisplayItemConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMDATA_OFFSET UNITYSDK_OFFSET(0x1ABC1AF0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMID_OFFSET UNITYSDK_OFFSET(0x1ABC1AD0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1ABC1A90)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1ABC1A70)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_BENEFITDATALIST_OFFSET UNITYSDK_OFFSET(0x1ABC1C50)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_GIFTSHOWLIST_OFFSET UNITYSDK_OFFSET(0x1ABC1C30)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_GRANTEDACTIVEITEMNUM_OFFSET UNITYSDK_OFFSET(0x1ABC1AB0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1ABC1A50)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ITEMLIMIT_OFFSET UNITYSDK_OFFSET(0x1ABC1BF0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_GET_POWERCONSUME_OFFSET UNITYSDK_OFFSET(0x1ABC1C10)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVEITEMID_OFFSET UNITYSDK_OFFSET(0x1ABC1AE0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVEITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1ABC1AA0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1ABC1A80)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_GIFTSHOWLIST_OFFSET UNITYSDK_OFFSET(0x1ABC1C40)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_GRANTEDACTIVEITEMNUM_OFFSET UNITYSDK_OFFSET(0x1ABC1AC0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1ABC1A60)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ITEMLIMIT_OFFSET UNITYSDK_OFFSET(0x1ABC1C00)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SET_POWERCONSUME_OFFSET UNITYSDK_OFFSET(0x1ABC1C20)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_SYNCFROM_OFFSET UNITYSDK_OFFSET(0x1ABC1C60)
#define RPG_CLIENT_ACTIVEACTIVITYDATA_USEACTIVEITEMWITHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ABC2100)
#define RPG_CLIENT_ACTIVEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC1790)
#define RPG_CLIENT_ACTIVEACTIVITYDATA__INITCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1ABC17F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityData_TypeDefinitionIndex = 61471;

	class ActiveActivityData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActiveActivityBenefitData*>* _BenefitDataList_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>* _GiftShowList_k__BackingField; // 0x18
		::System::UInt32 _ActivityID_k__BackingField; // 0x20
		::System::UInt32 _ActiveItemID_k__BackingField; // 0x24
		::System::UInt32 _ItemLimit_k__BackingField; // 0x28
		::System::UInt32 _GrantedActiveItemNum_k__BackingField; // 0x2C
		::System::UInt32 _ActiveItemProgress_k__BackingField; // 0x30
		::System::UInt32 _PowerConsume_k__BackingField; // 0x34
		::System::UInt32 _ID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActiveItemProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMPROGRESS_OFFSET))(this);
		}

		::System::Void set_ActiveItemProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVEITEMPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_GrantedActiveItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_GRANTEDACTIVEITEMNUM_OFFSET))(this);
		}

		::System::Void set_GrantedActiveItemNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_GRANTEDACTIVEITEMNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActiveItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMID_OFFSET))(this);
		}

		::System::Void set_ActiveItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ACTIVEITEMID_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_ActiveItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ACTIVEITEMDATA_OFFSET))(this);
		}

		::System::UInt32 get_ItemLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_ITEMLIMIT_OFFSET))(this);
		}

		::System::Void set_ItemLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_ITEMLIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PowerConsume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_POWERCONSUME_OFFSET))(this);
		}

		::System::Void set_PowerConsume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_POWERCONSUME_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>* get_GiftShowList()
		{
			return ((::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_GIFTSHOWLIST_OFFSET))(this);
		}

		::System::Void set_GiftShowList(::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SET_GIFTSHOWLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActiveActivityBenefitData*>* get_BenefitDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActiveActivityBenefitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_GET_BENEFITDATALIST_OFFSET))(this);
		}

		::System::Void SyncFrom(::Class_1_3714832A39691304_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3714832A39691304_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_SYNCFROM_OFFSET))(this, a1);
		}

		::System::Void UseActiveItemWithCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA_USEACTIVEITEMWITHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _InitConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA__INITCONFIGDATA_OFFSET))(this);
		}
	};
}
