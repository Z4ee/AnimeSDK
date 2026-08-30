#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_367A8A20B1ADEFB7;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCA3DBD0)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_AVATARLIST1_OFFSET UNITYSDK_OFFSET(0xCA3E910)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_AVATARLIST2_OFFSET UNITYSDK_OFFSET(0xCA3E990)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFF1_OFFSET UNITYSDK_OFFSET(0xCA3EA10)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFF2_OFFSET UNITYSDK_OFFSET(0xCA3EA80)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFFLIST_OFFSET UNITYSDK_OFFSET(0xCA3E8F0)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0xCA3DC70)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_SET_BUFFLIST_OFFSET UNITYSDK_OFFSET(0xCA3E900)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_TRYGETSAVEDATA_OFFSET UNITYSDK_OFFSET(0xCA3D950)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCA3E1E0)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__GETCHALLENGELINEUPAVATARSAVEDATALIST_OFFSET UNITYSDK_OFFSET(0xCA3DF60)
#define RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__INIT_OFFSET UNITYSDK_OFFSET(0xCA3E1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeLineupTeamSaveData_TypeDefinitionIndex = 63160;

	class ChallengeLineupTeamSaveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _AvatarList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _BuffList_k__BackingField; // 0x18
		::System::UInt32 ChallengeID; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengeLineupTeamSaveData* TryGetSaveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeLineupTeamSaveData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_TRYGETSAVEDATA_OFFSET))(a1);
		}

		static ::System::Void SaveLineupData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_SAVELINEUPDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>* _GetChallengeLineupAvatarSaveDataList(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*(*)(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__GETCHALLENGELINEUPAVATARSAVEDATALIST_OFFSET))(a1);
		}

		static ::RPG::Client::ChallengeLineupTeamSaveData* Create(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::ChallengeLineupTeamSaveData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void _Init(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_367A8A20B1ADEFB7*>*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA__INIT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_BUFFLIST_OFFSET))(this);
		}

		::System::Void set_BuffList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_SET_BUFFLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_AvatarList1()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_AVATARLIST1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_AvatarList2()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPTEAMSAVEDATA_GET_AVATARLIST2_OFFSET))(this);
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
