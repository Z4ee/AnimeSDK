#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455CA3FD2409BEB7_28;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueTalentDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0E0360)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GETALLTALENTDATA_OFFSET UNITYSDK_OFFSET(0xB0E9300)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GETALLTALENTIDS_OFFSET UNITYSDK_OFFSET(0xB0E8EE0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET_TALENTCOINICONPATH_OFFSET UNITYSDK_OFFSET(0xB0E95E0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET_TALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB0E9450)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET__TALENTCOINITEMDATA_OFFSET UNITYSDK_OFFSET(0xB0E9550)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET__TALENTCOINITEMID_OFFSET UNITYSDK_OFFSET(0xB0E9470)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB0DFB30)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xB0E9230)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB0E91D0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SETALLTALENTSSEEN_OFFSET UNITYSDK_OFFSET(0xB0E2A70)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SETTALENTSEEN_OFFSET UNITYSDK_OFFSET(0xB0E90A0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SET_TALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB0E9460)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB0E60F0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0DF900)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__GETTALENTDATAITEM_OFFSET UNITYSDK_OFFSET(0xB0E8BB0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__UPDATEAVAILABLETALENTINFO_OFFSET UNITYSDK_OFFSET(0xB0E8CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPermanentTalentInfo_TypeDefinitionIndex = 62546;

	class RogueTournPermanentTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableTalentIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>* _TalentDataItems_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_455CA3FD2409BEB7_28* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SYNC_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllTalentIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GETALLTALENTIDS_OFFSET))(this);
		}

		::System::Void SetTalentSeen(::System::UInt32 talentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SETTALENTSEEN_OFFSET))(this, talentID);
		}

		::System::Void SetAllTalentsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SETALLTALENTSSEEN_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot(::System::UInt32 talentID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_ISSHOWNORMALREDDOT_OFFSET))(this, talentID);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 talentID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_ISSHOWNEWREDDOT_OFFSET))(this, talentID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* GetAllTalentData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GETALLTALENTDATA_OFFSET))(this);
		}

		::RPG::Client::RogueTalentDataItem* _GetTalentDataItem(::System::UInt32 talentID)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__GETTALENTDATAITEM_OFFSET))(this, talentID);
		}

		::System::Void _UpdateAvailableTalentInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__UPDATEAVAILABLETALENTINFO_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>* get_TalentDataItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET_TALENTDATAITEMS_OFFSET))(this);
		}

		::System::Void set_TalentDataItems(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SET_TALENTDATAITEMS_OFFSET))(this, value);
		}

		static ::System::UInt32 get__TalentCoinItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET__TALENTCOINITEMID_OFFSET))();
		}

		static ::RPG::Client::ItemData* get__TalentCoinItemData()
		{
			return ((::RPG::Client::ItemData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET__TALENTCOINITEMDATA_OFFSET))();
		}

		static ::System::String* get_TalentCoinIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET_TALENTCOINICONPATH_OFFSET))();
		}
	};
}
