#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealManager; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x8F6E540)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CLEARMEMBERS_OFFSET UNITYSDK_OFFSET(0x8F6DF60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x8F66680)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEFULLTEAM_OFFSET UNITYSDK_OFFSET(0x8F66590)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET UNITYSDK_OFFSET(0x8F6DC70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x8F66290)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0x8F6E2B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x8F6E3B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x8F5BA70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERIDS_OFFSET UNITYSDK_OFFSET(0x8F6E040)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERSCOUNT_OFFSET UNITYSDK_OFFSET(0x8F6E420)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x8F63C60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x8F5B910)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMEMBERS_OFFSET UNITYSDK_OFFSET(0x8F6D270)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET UNITYSDK_OFFSET(0x8F6E330)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x8F6E790)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET__MGR_OFFSET UNITYSDK_OFFSET(0x8F6DBE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x8F5EA80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISFULL_OFFSET UNITYSDK_OFFSET(0x8F6E150)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISSAMETEAM_OFFSET UNITYSDK_OFFSET(0x8F6E1E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0x8F6E6D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETFULLTEAM_OFFSET UNITYSDK_OFFSET(0x8F6D980)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETISINEDITMODE_OFFSET UNITYSDK_OFFSET(0x8F6DFF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETMEMBER_OFFSET UNITYSDK_OFFSET(0x8F6E600)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x8F6E7A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SYNCSERVERTEAM_OFFSET UNITYSDK_OFFSET(0x8F65F50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8F6D930)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealTeamSelection_TypeDefinitionIndex = 61430;

	class MarbleSealTeamSelection : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_TEAM_INDEX = 0xFFFFFFFF; // 0x0
		::Il2CppArray<::RPG::Client::ActivityMarble::MarbleSealData*>* _SelectedMarbleSeals; // 0x10
		::Enum_3_F80BFD5B986D5503_3 _GameMode; // 0x18
		::System::Int32 _MaxSelectionCount_k__BackingField; // 0x1C
		::System::Boolean _IsInEditMode; // 0x20

		::System::Void _ctor(::System::Int32 selectionCount, ::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION__CTOR_OFFSET))(this, selectionCount, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateEmpty(::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEEMPTY_OFFSET))(gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* marbleSealIDs, ::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEFULLTEAM_OFFSET))(marbleSealIDs, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateWithDefaultMembers(::System::Collections::Generic::IEnumerator_1<::System::UInt32>* marbleSealIter, ::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IEnumerator_1<::System::UInt32>*, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET))(marbleSealIter, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateWithDefaultMembers_1(::System::Collections::Generic::IList_1<::System::UInt32>* marbleSealIDs, ::Enum_3_F80BFD5B986D5503_3 gameMode, ::System::Int32 count)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_F80BFD5B986D5503_3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET))(marbleSealIDs, gameMode, count);
		}

		::System::Void SetFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* marbleSealIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETFULLTEAM_OFFSET))(this, marbleSealIDs);
		}

		::System::Void SyncServerTeam(::System::Collections::Generic::IList_1<::System::UInt32>* marbleSealIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SYNCSERVERTEAM_OFFSET))(this, marbleSealIDs);
		}

		::System::Void ClearMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CLEARMEMBERS_OFFSET))(this);
		}

		::System::Void SetIsInEditMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETISINEDITMODE_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::Client::ActivityMarble::MarbleSealData*>* GetMembers()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMemberIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERIDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ActivityMarble::MarbleSealData*>* GetOnFieldMembers()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMEMBERS_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISFULL_OFFSET))(this);
		}

		::System::Boolean IsSameTeam(::System::Collections::Generic::List_1<::System::UInt32>* marbleSealIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISSAMETEAM_OFFSET))(this, marbleSealIDs);
		}

		::System::Int32 GetFirstEmptyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET))(this);
		}

		::System::Int32 GetTeamIndexByMarbleSealData(::RPG::Client::ActivityMarble::MarbleSealData* data)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET))(this, data);
		}

		::RPG::Client::ActivityMarble::MarbleSealData* GetMarbleSealDataByTeamIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET))(this, index);
		}

		::RPG::Client::ActivityMarble::MarbleSealData* GetOnFieldMarbleSealDataByTeamIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET))(this, index);
		}

		::RPG::Client::ActivityMarble::MarbleSealData* GetMarbleSubSealDataByTeamIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET))(this, index);
		}

		::System::UInt32 GetMembersCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERSCOUNT_OFFSET))(this);
		}

		::System::Void AddMember(::RPG::Client::ActivityMarble::MarbleSealData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ADDMEMBER_OFFSET))(this, data);
		}

		::System::Void SetMember(::RPG::Client::ActivityMarble::MarbleSealData* data, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETMEMBER_OFFSET))(this, data, index);
		}

		::System::Void RemoveMember(::RPG::Client::ActivityMarble::MarbleSealData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_REMOVEMEMBER_OFFSET))(this, data);
		}

		::System::Int32 get_MaxSelectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxSelectionCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealManager* get__Mgr()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET__MGR_OFFSET))();
		}
	};
}
