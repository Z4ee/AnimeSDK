#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_739;
class Class_0_16E4307DCC419505_740;
class Class_1_45BB92167AED63A0_14;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKISEMPTY_OFFSET UNITYSDK_OFFSET(0xB573A60)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKTEAMHASCHANGED_OFFSET UNITYSDK_OFFSET(0xB572F80)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB574450)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB573250)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_FILLMODIFIEDAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0xB573ED0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETBUFF_OFFSET UNITYSDK_OFFSET(0xB573E50)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETCOUNTOFMODIFIEDAVATARS_OFFSET UNITYSDK_OFFSET(0xB573940)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDAVATARBYSLOT_OFFSET UNITYSDK_OFFSET(0xB573580)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDLINEUP_OFFSET UNITYSDK_OFFSET(0xB574090)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINALAVATARS_OFFSET UNITYSDK_OFFSET(0xB573600)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINLINEUP_OFFSET UNITYSDK_OFFSET(0xB574210)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xB573130)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_COUNTOFSLOT_OFFSET UNITYSDK_OFFSET(0xB573240)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ID_OFFSET UNITYSDK_OFFSET(0xB572D60)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xB572E40)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISNEEDFORCESAVE_OFFSET UNITYSDK_OFFSET(0xB572F20)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_RESET_OFFSET UNITYSDK_OFFSET(0xB574390)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETBUFFID_OFFSET UNITYSDK_OFFSET(0xB573E00)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARBYSLOT_OFFSET UNITYSDK_OFFSET(0xB573BC0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB573C90)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB573320)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0xB573820)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARSTO_OFFSET UNITYSDK_OFFSET(0xB573380)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeam_TypeDefinitionIndex = 59136;

	class ChallengePeakTeam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* _ModifiedAvatars; // 0x10
		::Class_0_16E4307DCC419505_739* _AvatarSource; // 0x18
		::Class_0_16E4307DCC419505_740* _TeamSource; // 0x20
		::System::UInt32 _CurSetBuffID; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_740* a1, ::Class_0_16E4307DCC419505_739* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_740*, ::Class_0_16E4307DCC419505_739*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsNeedForceSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISNEEDFORCESAVE_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_BUFFID_OFFSET))(this);
		}

		::System::Int32 get_CountOfSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_COUNTOFSLOT_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakTeam* Create(::Class_0_16E4307DCC419505_740* a1, ::Class_0_16E4307DCC419505_739* a2)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::Class_0_16E4307DCC419505_740*, ::Class_0_16E4307DCC419505_739*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CREATE_OFFSET))(a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* GetModifiedAvatarBySlot(::System::Int32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDAVATARBYSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetOriginalAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINALAVATARS_OFFSET))(this);
		}

		::System::Int32 GetCountOfModifiedAvatars()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETCOUNTOFMODIFIEDAVATARS_OFFSET))(this);
		}

		::System::Boolean CheckIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKISEMPTY_OFFSET))(this);
		}

		::System::Void SetModifiedAvatarBySlot(::System::Int32 a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARBYSLOT_OFFSET))(this, a1, a2);
		}

		::System::Void SetModifiedAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARIDS_OFFSET))(this, a1);
		}

		::System::Void SetBuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETBUFFID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MazeBuffRow* GetBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETBUFF_OFFSET))(this);
		}

		::System::Void FillModifiedAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_FILLMODIFIEDAVATARBASEIDSTO_OFFSET))(this, a1);
		}

		::Class_1_45BB92167AED63A0_14* GetModifiedLineup()
		{
			return ((::Class_1_45BB92167AED63A0_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDLINEUP_OFFSET))(this);
		}

		::Class_1_45BB92167AED63A0_14* GetOriginLineup()
		{
			return ((::Class_1_45BB92167AED63A0_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINLINEUP_OFFSET))(this);
		}

		::System::Boolean CheckTeamHasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKTEAMHASCHANGED_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_RESET_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CLEAR_OFFSET))(this);
		}

		::System::Void _FillOriginAvatarsTo(::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARSTO_OFFSET))(this, a1);
		}

		::System::Void _FillOriginAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARBASEIDSTO_OFFSET))(this, a1);
		}
	};
}
