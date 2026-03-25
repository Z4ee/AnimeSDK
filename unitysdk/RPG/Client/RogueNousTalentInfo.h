#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E2E44FDCCFF6FA83_4;
class Class_1_E85FDBE62E39A5EA_10;
namespace RPG::Client { class RogueTalentDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUENOUSTALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA355A50)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_GET_AVAILABLETALENTIDS_OFFSET UNITYSDK_OFFSET(0xA3565E0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_GET_TALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xA3565C0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA3558A0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_SET_AVAILABLETALENTIDS_OFFSET UNITYSDK_OFFSET(0xA3565F0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_SET_TALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xA3565D0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_SYNCROGUENOUSTALENTINFO_1_OFFSET UNITYSDK_OFFSET(0xA355B50)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_SYNCROGUENOUSTALENTINFO_OFFSET UNITYSDK_OFFSET(0xA355AF0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_UPDATEAVAILABLETALENTINFO_OFFSET UNITYSDK_OFFSET(0xA356110)
#define RPG_CLIENT_ROGUENOUSTALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA355890)
#define RPG_CLIENT_ROGUENOUSTALENTINFO__GETTALENTDATAITEM_OFFSET UNITYSDK_OFFSET(0xA355E80)
#define RPG_CLIENT_ROGUENOUSTALENTINFO__INITROGUETALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xA3558F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousTalentInfo_TypeDefinitionIndex = 55000;

	class RogueNousTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableTalentIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* _TalentDataItems_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRogueNousTalentInfo(::Class_1_E2E44FDCCFF6FA83_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_SYNCROGUENOUSTALENTINFO_OFFSET))(this, info);
		}

		::System::Void SyncRogueNousTalentInfo_1(::Class_1_E85FDBE62E39A5EA_10* talentInfo, ::System::UInt32 talentCoin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_10*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_SYNCROGUENOUSTALENTINFO_1_OFFSET))(this, talentInfo, talentCoin);
		}

		::System::Void UpdateAvailableTalentInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_UPDATEAVAILABLETALENTINFO_OFFSET))(this);
		}

		::System::Void _InitRogueTalentDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO__INITROGUETALENTDATAITEMS_OFFSET))(this);
		}

		::RPG::Client::RogueTalentDataItem* _GetTalentDataItem(::System::UInt32 talentID)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO__GETTALENTDATAITEM_OFFSET))(this, talentID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* get_TalentDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_GET_TALENTDATAITEMS_OFFSET))(this);
		}

		::System::Void set_TalentDataItems(::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_SET_TALENTDATAITEMS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableTalentIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_GET_AVAILABLETALENTIDS_OFFSET))(this);
		}

		::System::Void set_AvailableTalentIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_SET_AVAILABLETALENTIDS_OFFSET))(this, value);
		}
	};
}
