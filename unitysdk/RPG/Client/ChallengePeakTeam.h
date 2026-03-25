#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_598;
class Class_0_16E4307DCC419505_599;
class Class_1_735612C94F558EAE_10;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKISEMPTY_OFFSET UNITYSDK_OFFSET(0x92F0310)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKTEAMHASCHANGED_OFFSET UNITYSDK_OFFSET(0x92F0C60)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x92F0E90)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CREATE_OFFSET UNITYSDK_OFFSET(0x92EFBA0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_FILLMODIFIEDAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0x92F07B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETBUFF_OFFSET UNITYSDK_OFFSET(0x92F0730)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETCOUNTOFMODIFIEDAVATARS_OFFSET UNITYSDK_OFFSET(0x92F01F0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDAVATARBYSLOT_OFFSET UNITYSDK_OFFSET(0x92EFCD0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDLINEUP_OFFSET UNITYSDK_OFFSET(0x92F0960)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINALAVATARS_OFFSET UNITYSDK_OFFSET(0x92EFED0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINLINEUP_OFFSET UNITYSDK_OFFSET(0x92F0AE0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x92EFA80)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_COUNTOFSLOT_OFFSET UNITYSDK_OFFSET(0x92EFB90)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ID_OFFSET UNITYSDK_OFFSET(0x92EF860)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x92EF940)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISNEEDFORCESAVE_OFFSET UNITYSDK_OFFSET(0x92EFA20)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_RESET_OFFSET UNITYSDK_OFFSET(0x92F0E40)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETBUFFID_OFFSET UNITYSDK_OFFSET(0x92F06E0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARBYSLOT_OFFSET UNITYSDK_OFFSET(0x92F0470)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x92F0550)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x92EFC70)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0x92F00D0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARSTO_OFFSET UNITYSDK_OFFSET(0x92F0F20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeam_TypeDefinitionIndex = 51282;

	class ChallengePeakTeam : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_598* _AvatarSource; // 0x10
		::Class_0_16E4307DCC419505_599* _TeamSource; // 0x18
		::Il2CppArray<::RPG::Client::IAvatarInfoProvider*>* _ModifiedAvatars; // 0x20
		::System::UInt32 _CurSetBuffID; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_599* source, ::Class_0_16E4307DCC419505_598* avatarSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_599*, ::Class_0_16E4307DCC419505_598*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__CTOR_OFFSET))(this, source, avatarSource);
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

		static ::RPG::Client::ChallengePeakTeam* Create(::Class_0_16E4307DCC419505_599* source, ::Class_0_16E4307DCC419505_598* avatarSource)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::Class_0_16E4307DCC419505_599*, ::Class_0_16E4307DCC419505_598*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CREATE_OFFSET))(source, avatarSource);
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

		::Class_1_735612C94F558EAE_10* GetModifiedLineup()
		{
			return ((::Class_1_735612C94F558EAE_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDLINEUP_OFFSET))(this);
		}

		::Class_1_735612C94F558EAE_10* GetOriginLineup()
		{
			return ((::Class_1_735612C94F558EAE_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINLINEUP_OFFSET))(this);
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
