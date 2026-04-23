#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_10;
namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_CREATEBYITEMHELPER_OFFSET UNITYSDK_OFFSET(0x9C570B0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9C57610)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x9C576E0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x9C575E0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9C57090)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C575D0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x9C57630)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_MAX_OFFSET UNITYSDK_OFFSET(0x9C57620)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9C57680)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9C571D0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C57560)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardCountItemData_TypeDefinitionIndex = 56992;

	class ActivityRewardCountItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _Item; // 0x10
		::System::UInt32 _Max; // 0x18
		::System::UInt32 _Current; // 0x1C

		::System::Void _ctor(::RPG::Client::ItemData* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA__CTOR_OFFSET))(this, item);
		}

		static ::RPG::Client::ActivityRewardCountItemData* CreateByItemHelper(::System::UInt32 itemID)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_CREATEBYITEMHELPER_OFFSET))(itemID);
		}

		::System::Void Sync(::Class_1_D1E0AD3915BCCF29_10* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_SYNC_OFFSET))(this, proto);
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
