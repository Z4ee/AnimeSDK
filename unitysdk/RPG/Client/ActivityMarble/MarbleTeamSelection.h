#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class IMarbleData; }
namespace RPG::Client::ActivityMarble { class IMarbleRepository; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0xC5582B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CLEARMEMBERS_OFFSET UNITYSDK_OFFSET(0xC557AB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEEMPTYWITHCUSTOMMAXSELECTION_OFFSET UNITYSDK_OFFSET(0xC557150)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xC54E120)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEFULLTEAM_OFFSET UNITYSDK_OFFSET(0xC54E050)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET UNITYSDK_OFFSET(0xC5575E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC54DAC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0xC558090)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xC5404F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xC541EA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERIDS_OFFSET UNITYSDK_OFFSET(0xC557B80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERSCOUNT_OFFSET UNITYSDK_OFFSET(0xC558190)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0xC549C40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xC541A90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETONFIELDMEMBERS_OFFSET UNITYSDK_OFFSET(0xC556A40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET UNITYSDK_OFFSET(0xC558110)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC558430)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xC544C90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISFULL_OFFSET UNITYSDK_OFFSET(0xC557DE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISSAMETEAM_OFFSET UNITYSDK_OFFSET(0xC557E70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_OVERRIDEREPOSITORY_OFFSET UNITYSDK_OFFSET(0xC557A60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0xC5406B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETFULLTEAM_OFFSET UNITYSDK_OFFSET(0xC5571E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETISINEDITMODE_OFFSET UNITYSDK_OFFSET(0xC557B30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETMEMBER_OFFSET UNITYSDK_OFFSET(0xC558370)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC558440)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SYNCSERVERTEAM_OFFSET UNITYSDK_OFFSET(0xC54D790)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC557040)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleTeamSelection_TypeDefinitionIndex = 75979;

	class MarbleTeamSelection : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_TEAM_INDEX = 0xFFFFFFFF; // 0x0
		::RPG::Client::ActivityMarble::IMarbleRepository* _Repository; // 0x10
		::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>* _SelectedMarbleSeals; // 0x18
		::System::Boolean _IsInEditMode; // 0x20
		::Enum_3_0F1B992870941C13_1 _GameMode; // 0x24
		::System::Int32 _MaxSelectionCount_k__BackingField; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::Enum_3_0F1B992870941C13_1 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateEmpty(::Enum_3_0F1B992870941C13_1 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEEMPTY_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateEmptyWithCustomMaxSelection(::Enum_3_0F1B992870941C13_1 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::Enum_3_0F1B992870941C13_1, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEEMPTYWITHCUSTOMMAXSELECTION_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::Enum_3_0F1B992870941C13_1 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEFULLTEAM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateWithDefaultMembers(::System::Collections::Generic::IEnumerator_1<::System::UInt32>* a1, ::Enum_3_0F1B992870941C13_1 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::System::Collections::Generic::IEnumerator_1<::System::UInt32>*, ::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateWithDefaultMembers_1(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::Enum_3_0F1B992870941C13_1 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_0F1B992870941C13_1, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET))(a1, a2, a3);
		}

		::System::Void OverrideRepository(::RPG::Client::ActivityMarble::IMarbleRepository* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_OVERRIDEREPOSITORY_OFFSET))(this, a1);
		}

		::System::Void SetFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETFULLTEAM_OFFSET))(this, a1);
		}

		::System::Void SyncServerTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SYNCSERVERTEAM_OFFSET))(this, a1);
		}

		::System::Void ClearMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CLEARMEMBERS_OFFSET))(this);
		}

		::System::Void SetIsInEditMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETISINEDITMODE_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>* GetMembers()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMemberIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERIDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>* GetOnFieldMembers()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETONFIELDMEMBERS_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISFULL_OFFSET))(this);
		}

		::System::Boolean IsSameTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISSAMETEAM_OFFSET))(this, a1);
		}

		::System::Int32 GetFirstEmptyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET))(this);
		}

		::System::Int32 GetTeamIndexByMarbleSealData(::RPG::Client::ActivityMarble::IMarbleData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleData* GetMarbleSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleData* GetOnFieldMarbleSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleData* GetMarbleSubSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetMembersCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERSCOUNT_OFFSET))(this);
		}

		::System::Void AddMember(::RPG::Client::ActivityMarble::IMarbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ADDMEMBER_OFFSET))(this, a1);
		}

		::System::Void SetMember(::RPG::Client::ActivityMarble::IMarbleData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveMember(::RPG::Client::ActivityMarble::IMarbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_REMOVEMEMBER_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxSelectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxSelectionCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET))(this, a1);
		}
	};
}
