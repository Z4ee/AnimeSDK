#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealManager; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0xB1B5920)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CLEARMEMBERS_OFFSET UNITYSDK_OFFSET(0xB1B5380)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xB1ADAF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEFULLTEAM_OFFSET UNITYSDK_OFFSET(0xB1ADA00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET UNITYSDK_OFFSET(0xB1B5090)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB1AD710)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0xB1B5700)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xB1A1980)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xB1A2B80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERIDS_OFFSET UNITYSDK_OFFSET(0xB1B5450)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERSCOUNT_OFFSET UNITYSDK_OFFSET(0xB1B5800)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0xB1AAE20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xB1A2A30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMEMBERS_OFFSET UNITYSDK_OFFSET(0xB1B47D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET UNITYSDK_OFFSET(0xB1B5780)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xB1B5AA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET__MGR_OFFSET UNITYSDK_OFFSET(0xB1B5000)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB1A57E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISFULL_OFFSET UNITYSDK_OFFSET(0xB1B5590)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISSAMETEAM_OFFSET UNITYSDK_OFFSET(0xB1B5620)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0xB1A1B00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETFULLTEAM_OFFSET UNITYSDK_OFFSET(0xB1B4DC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETISINEDITMODE_OFFSET UNITYSDK_OFFSET(0xB1B5400)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETMEMBER_OFFSET UNITYSDK_OFFSET(0xB1B59E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xB1B5AB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SYNCSERVERTEAM_OFFSET UNITYSDK_OFFSET(0xB1AD3D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB1B4D70)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealTeamSelection_TypeDefinitionIndex = 69748;

	class MarbleSealTeamSelection : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_TEAM_INDEX = 0xFFFFFFFF; // 0x0
		::Il2CppArray<::RPG::Client::ActivityMarble::MarbleSealData*>* _SelectedMarbleSeals; // 0x10
		::System::Int32 _MaxSelectionCount_k__BackingField; // 0x18
		::System::Boolean _IsInEditMode; // 0x1C
		::Enum_3_A35B38E5F9115A76_2 _GameMode; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::Enum_3_A35B38E5F9115A76_2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateEmpty(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEEMPTY_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::Enum_3_A35B38E5F9115A76_2 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEFULLTEAM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateWithDefaultMembers(::System::Collections::Generic::IEnumerator_1<::System::UInt32>* a1, ::Enum_3_A35B38E5F9115A76_2 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IEnumerator_1<::System::UInt32>*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* CreateWithDefaultMembers_1(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::Enum_3_A35B38E5F9115A76_2 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_A35B38E5F9115A76_2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET))(a1, a2, a3);
		}

		::System::Void SetFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETFULLTEAM_OFFSET))(this, a1);
		}

		::System::Void SyncServerTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SYNCSERVERTEAM_OFFSET))(this, a1);
		}

		::System::Void ClearMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_CLEARMEMBERS_OFFSET))(this);
		}

		::System::Void SetIsInEditMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETISINEDITMODE_OFFSET))(this, a1);
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

		::System::Boolean IsSameTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ISSAMETEAM_OFFSET))(this, a1);
		}

		::System::Int32 GetFirstEmptyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET))(this);
		}

		::System::Int32 GetTeamIndexByMarbleSealData(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleSealData* GetMarbleSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleSealData* GetOnFieldMarbleSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleSealData* GetMarbleSubSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetMembersCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GETMEMBERSCOUNT_OFFSET))(this);
		}

		::System::Void AddMember(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_ADDMEMBER_OFFSET))(this, a1);
		}

		::System::Void SetMember(::RPG::Client::ActivityMarble::MarbleSealData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SETMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveMember(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_REMOVEMEMBER_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxSelectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxSelectionCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealManager* get__Mgr()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMSELECTION_GET__MGR_OFFSET))();
		}
	};
}
