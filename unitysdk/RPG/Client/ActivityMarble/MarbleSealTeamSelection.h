#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealManager; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x9C17F20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CLEARMEMBERS_OFFSET UNITYSDK_OFFSET(0x9C179C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x9C104C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEFULLTEAM_OFFSET UNITYSDK_OFFSET(0x9C103D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET UNITYSDK_OFFSET(0x9C176D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x9C100D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0x9C17D00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x9C048E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x9C059F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERIDS_OFFSET UNITYSDK_OFFSET(0x9C17AA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERSCOUNT_OFFSET UNITYSDK_OFFSET(0x9C17E00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x9C0D9F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x9C05890)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMEMBERS_OFFSET UNITYSDK_OFFSET(0x9C16DA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET UNITYSDK_OFFSET(0x9C17D80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9C180B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET__MGR_OFFSET UNITYSDK_OFFSET(0x9C17640)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9C085A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISFULL_OFFSET UNITYSDK_OFFSET(0x9C17BB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISSAMETEAM_OFFSET UNITYSDK_OFFSET(0x9C17C40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0x9C04A60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETFULLTEAM_OFFSET UNITYSDK_OFFSET(0x9C173C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETISINEDITMODE_OFFSET UNITYSDK_OFFSET(0x9C17A50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETMEMBER_OFFSET UNITYSDK_OFFSET(0x9C17FE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9C180C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SYNCSERVERTEAM_OFFSET UNITYSDK_OFFSET(0x9C0FD90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9C17370)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealTeamSelection_TypeDefinitionIndex = 68936;

	class MarbleSealTeamSelection : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_TEAM_INDEX = 0xFFFFFFFF; // 0x0
		::Il2CppArray<::RPG::Client::ActivityMarble::MarbleSealData*>* _SelectedMarbleSeals; // 0x10
		::System::Int32 _MaxSelectionCount_k__BackingField; // 0x18
		::Enum_3_A35B38E5F9115A76_2 _GameMode; // 0x1C
		::System::Boolean _IsInEditMode; // 0x20

		::System::Void _ctor(::System::Int32 selectionCount, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION__CTOR_OFFSET))(this, selectionCount, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateEmpty(::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEEMPTY_OFFSET))(gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* marbleSealIDs, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEFULLTEAM_OFFSET))(marbleSealIDs, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateWithDefaultMembers(::System::Collections::Generic::IEnumerator_1<::System::UInt32>* marbleSealIter, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IEnumerator_1<::System::UInt32>*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET))(marbleSealIter, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateWithDefaultMembers_1(::System::Collections::Generic::IList_1<::System::UInt32>* marbleSealIDs, ::Enum_3_A35B38E5F9115A76_2 gameMode, ::System::Int32 count)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_A35B38E5F9115A76_2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET))(marbleSealIDs, gameMode, count);
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
