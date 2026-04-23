#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_688;
class Class_0_16E4307DCC419505_689;
class Class_1_45BB92167AED63A0_13;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKISEMPTY_OFFSET UNITYSDK_OFFSET(0x9F5AB60)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKTEAMHASCHANGED_OFFSET UNITYSDK_OFFSET(0x9F59FD0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F5B500)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9F5A2D0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_FILLMODIFIEDAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0x9F5B000)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETBUFF_OFFSET UNITYSDK_OFFSET(0x9F5AF80)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETCOUNTOFMODIFIEDAVATARS_OFFSET UNITYSDK_OFFSET(0x9F5AA40)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDAVATARBYSLOT_OFFSET UNITYSDK_OFFSET(0x9F5A6A0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDLINEUP_OFFSET UNITYSDK_OFFSET(0x9F5B1B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINALAVATARS_OFFSET UNITYSDK_OFFSET(0x9F5A720)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINLINEUP_OFFSET UNITYSDK_OFFSET(0x9F5B330)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x9F5A1B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_COUNTOFSLOT_OFFSET UNITYSDK_OFFSET(0x9F5A2C0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F59DB0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x9F59E90)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISNEEDFORCESAVE_OFFSET UNITYSDK_OFFSET(0x9F59F70)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_RESET_OFFSET UNITYSDK_OFFSET(0x9F5B4B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETBUFFID_OFFSET UNITYSDK_OFFSET(0x9F5AF30)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARBYSLOT_OFFSET UNITYSDK_OFFSET(0x9F5ACC0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9F5ADA0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9F5A3A0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0x9F5A920)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARSTO_OFFSET UNITYSDK_OFFSET(0x9F5A400)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeam_TypeDefinitionIndex = 58206;

	class ChallengePeakTeam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::IAvatarInfoProvider*>* _ModifiedAvatars; // 0x10
		::Class_0_16E4307DCC419505_688* _TeamSource; // 0x18
		::Class_0_16E4307DCC419505_689* _AvatarSource; // 0x20
		::System::UInt32 _CurSetBuffID; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_688* source, ::Class_0_16E4307DCC419505_689* avatarSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_688*, ::Class_0_16E4307DCC419505_689*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__CTOR_OFFSET))(this, source, avatarSource);
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

		static ::RPG::Client::ChallengePeakTeam* Create(::Class_0_16E4307DCC419505_688* source, ::Class_0_16E4307DCC419505_689* avatarSource)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::Class_0_16E4307DCC419505_688*, ::Class_0_16E4307DCC419505_689*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CREATE_OFFSET))(source, avatarSource);
		}

		::RPG::Client::IAvatarInfoProvider* GetModifiedAvatarBySlot(::System::Int32 slotIndex)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDAVATARBYSLOT_OFFSET))(this, slotIndex);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetOriginalAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINALAVATARS_OFFSET))(this);
		}

		::System::Int32 GetCountOfModifiedAvatars()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETCOUNTOFMODIFIEDAVATARS_OFFSET))(this);
		}

		::System::Boolean CheckIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKISEMPTY_OFFSET))(this);
		}

		::System::Void SetModifiedAvatarBySlot(::System::Int32 slotIndex, ::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARBYSLOT_OFFSET))(this, slotIndex, avatar);
		}

		::System::Void SetModifiedAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARIDS_OFFSET))(this, avatarIDs);
		}

		::System::Void SetBuffID(::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETBUFFID_OFFSET))(this, buffID);
		}

		::RPG::GameCore::MazeBuffRow* GetBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETBUFF_OFFSET))(this);
		}

		::System::Void FillModifiedAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_FILLMODIFIEDAVATARBASEIDSTO_OFFSET))(this, avatarIDs);
		}

		::Class_1_45BB92167AED63A0_13* GetModifiedLineup()
		{
			return ((::Class_1_45BB92167AED63A0_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDLINEUP_OFFSET))(this);
		}

		::Class_1_45BB92167AED63A0_13* GetOriginLineup()
		{
			return ((::Class_1_45BB92167AED63A0_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINLINEUP_OFFSET))(this);
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

		::System::Void _FillOriginAvatarsTo(::Il2CppArray<::RPG::Client::IAvatarInfoProvider*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARSTO_OFFSET))(this, buffer);
		}

		::System::Void _FillOriginAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARBASEIDSTO_OFFSET))(this, buffer);
		}
	};
}
