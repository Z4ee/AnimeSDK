#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x92CB8F0)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_AVATARLIST1_OFFSET UNITYSDK_OFFSET(0x92CBDA0)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_AVATARLIST2_OFFSET UNITYSDK_OFFSET(0x92CBE00)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_BUFF1_OFFSET UNITYSDK_OFFSET(0x92CBE60)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_BUFF2_OFFSET UNITYSDK_OFFSET(0x92CBEC0)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x92CB990)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_TRYGETSAVEDATA_OFFSET UNITYSDK_OFFSET(0x92CB670)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92CBC00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeLineupSaveData_TypeDefinitionIndex = 51196;

	class ChallengeLineupSaveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* AvatarList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* BuffList; // 0x18
		::System::UInt32 ChallengeID; // 0x20

		::System::Void _ctor(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* serializedData, ::System::Collections::Generic::List_1<::System::UInt32>* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA__CTOR_OFFSET))(this, challengeID, serializedData, buffData);
		}

		static ::RPG::Client::ChallengeLineupSaveData* TryGetSaveData(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::ChallengeLineupSaveData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_TRYGETSAVEDATA_OFFSET))(challengeID);
		}

		static ::System::Void SaveLineupData(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarList1, ::System::Collections::Generic::List_1<::System::UInt32>* avatarList2, ::System::Collections::Generic::List_1<::System::UInt32>* buffList)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_SAVELINEUPDATA_OFFSET))(challengeID, avatarList1, avatarList2, buffList);
		}

		static ::RPG::Client::ChallengeLineupSaveData* Create(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* serializedData, ::System::Collections::Generic::List_1<::System::UInt32>* buffData)
		{
			return ((::RPG::Client::ChallengeLineupSaveData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_CREATE_OFFSET))(challengeID, serializedData, buffData);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarList1()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_AVATARLIST1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarList2()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_AVATARLIST2_OFFSET))(this);
		}

		::System::UInt32 get_Buff1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_BUFF1_OFFSET))(this);
		}

		::System::UInt32 get_Buff2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_BUFF2_OFFSET))(this);
		}
	};
}
