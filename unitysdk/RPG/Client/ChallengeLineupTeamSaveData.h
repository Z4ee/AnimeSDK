#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_367A8A20B1ADEFB7;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F34420)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_AVATARLIST1_OFFSET UNITYSDK_OFFSET(0x9F35620)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_AVATARLIST2_OFFSET UNITYSDK_OFFSET(0x9F356B0)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFF1_OFFSET UNITYSDK_OFFSET(0x9F35740)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFF2_OFFSET UNITYSDK_OFFSET(0x9F357A0)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFFLIST_OFFSET UNITYSDK_OFFSET(0x9F35600)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9F344C0)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_SET_BUFFLIST_OFFSET UNITYSDK_OFFSET(0x9F35610)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_TRYGETSAVEDATA_OFFSET UNITYSDK_OFFSET(0x9F341A0)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F348B0)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__GETCHALLENGELINEUPAVATARSAVEDATALIST_OFFSET UNITYSDK_OFFSET(0x9F34700)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9F348C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeLineupTeamSaveData_TypeDefinitionIndex = 58118;

	class ChallengeLineupTeamSaveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _AvatarList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _BuffList_k__BackingField; // 0x18
		::System::UInt32 ChallengeID; // 0x20

		::System::Void _ctor(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__CTOR_OFFSET))(this, challengeID);
		}

		static ::RPG::Client::ChallengeLineupTeamSaveData* TryGetSaveData(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::ChallengeLineupTeamSaveData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_TRYGETSAVEDATA_OFFSET))(challengeID);
		}

		static ::System::Void SaveLineupData(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatarList1, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatarList2, ::System::Collections::Generic::List_1<::System::UInt32>* buffList)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_SAVELINEUPDATA_OFFSET))(challengeID, avatarList1, avatarList2, buffList);
		}

		static ::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>* _GetChallengeLineupAvatarSaveDataList(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatarList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__GETCHALLENGELINEUPAVATARSAVEDATALIST_OFFSET))(avatarList);
		}

		static ::RPG::Client::ChallengeLineupTeamSaveData* Create(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*>* serializedData, ::System::Collections::Generic::List_1<::System::UInt32>* buffData)
		{
			return ((::RPG::Client::ChallengeLineupTeamSaveData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_CREATE_OFFSET))(challengeID, serializedData, buffData);
		}

		::System::Void _Init(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*>* serializedData, ::System::Collections::Generic::List_1<::System::UInt32>* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__INIT_OFFSET))(this, serializedData, buffData);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFFLIST_OFFSET))(this);
		}

		::System::Void set_BuffList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_SET_BUFFLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_AvatarList1()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_AVATARLIST1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_AvatarList2()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_AVATARLIST2_OFFSET))(this);
		}

		::System::UInt32 get_Buff1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFF1_OFFSET))(this);
		}

		::System::UInt32 get_Buff2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFF2_OFFSET))(this);
		}
	};
}
