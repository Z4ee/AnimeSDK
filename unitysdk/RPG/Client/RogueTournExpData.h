#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_84;
class Class_1_A405CBF0C3FB5EE5_2;
class Class_1_D17272E82AE804C2_897;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueTournExpRewardDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNEXPDATA_CLEARSEENREWARDS_OFFSET UNITYSDK_OFFSET(0xC816690)
#define RPG_CLIENT_ROGUETOURNEXPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC815790)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC816500)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GETTOURNEXPREWARDDATA_OFFSET UNITYSDK_OFFSET(0xC816080)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0xC816870)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0xC816890)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_EXPICONPATH_OFFSET UNITYSDK_OFFSET(0xC816940)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xC8168B0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_REWARDDATAITEMS_OFFSET UNITYSDK_OFFSET(0xC816920)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMDATA_OFFSET UNITYSDK_OFFSET(0xC816A20)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMID_OFFSET UNITYSDK_OFFSET(0xC816AB0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWANYREWARDNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC7ED4C0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xC7ED690)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC816770)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SETALLREWARDSSEEN_OFFSET UNITYSDK_OFFSET(0xC816550)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0xC816880)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0xC8168A0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_REWARDDATAITEMS_OFFSET UNITYSDK_OFFSET(0xC816930)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0xC815800)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_1_OFFSET UNITYSDK_OFFSET(0xC816480)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xC816160)
#define RPG_CLIENT_ROGUETOURNEXPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC815750)
#define RPG_CLIENT_ROGUETOURNEXPDATA__GETCURLEVEL_OFFSET UNITYSDK_OFFSET(0xC815F40)
#define RPG_CLIENT_ROGUETOURNEXPDATA__TRYINITREWARDROWS_OFFSET UNITYSDK_OFFSET(0xC815B20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExpData_TypeDefinitionIndex = 63489;

	class RogueTournExpData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* _RewardDataItems_k__BackingField; // 0x10
		::System::UInt32 _CurLevel_k__BackingField; // 0x18
		::System::UInt32 _CurExp_k__BackingField; // 0x1C
		::System::UInt32 _RewardDataMainTournID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::System::UInt32 a1, ::Class_1_45BB92167AED63A0_84* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCALL_OFFSET))(this, a1, a2);
		}

		::System::Void SyncUpdate(::Class_1_A405CBF0C3FB5EE5_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate_1(::Class_1_D17272E82AE804C2_897* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_897*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_1_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournExpRewardDataItem* GetTournExpRewardData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournExpRewardDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GETTOURNEXPREWARDDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GETMAXLEVEL_OFFSET))(this);
		}

		::System::Void SetAllRewardsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SETALLREWARDSSEEN_OFFSET))(this);
		}

		::System::Void ClearSeenRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_CLEARSEENREWARDS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNORMALREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNEWREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean IsShowAnyRewardNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWANYREWARDNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _TryInitRewardRows(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA__TRYINITREWARDROWS_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA__GETCURLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_CUREXP_OFFSET))(this);
		}

		::System::Void set_CurExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_CUREXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_CURLEVEL_OFFSET))(this);
		}

		::System::Void set_CurLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_CURLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_ISLEVELMAX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* get_RewardDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_REWARDDATAITEMS_OFFSET))(this);
		}

		::System::Void set_RewardDataItems(::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_REWARDDATAITEMS_OFFSET))(this, a1);
		}

		static ::System::String* get_ExpIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_EXPICONPATH_OFFSET))();
		}

		static ::System::UInt32 get__ExpItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMID_OFFSET))();
		}

		static ::RPG::Client::ItemData* get__ExpItemData()
		{
			return ((::RPG::Client::ItemData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMDATA_OFFSET))();
		}
	};
}
