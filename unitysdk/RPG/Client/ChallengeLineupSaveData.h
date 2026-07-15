#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18799400)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_AVATARLIST1_OFFSET UNITYSDK_OFFSET(0x18798FA0)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_AVATARLIST2_OFFSET UNITYSDK_OFFSET(0x18799020)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_BUFF1_OFFSET UNITYSDK_OFFSET(0x187990A0)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_GET_BUFF2_OFFSET UNITYSDK_OFFSET(0x18799110)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x187994A0)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA_TRYGETSAVEDATA_OFFSET UNITYSDK_OFFSET(0x18799180)
#define RPG_CLIENT_CHALLENGELINEUPSAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x187997C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeLineupSaveData_TypeDefinitionIndex = 60310;

	class ChallengeLineupSaveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* AvatarList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* BuffList; // 0x18
		::System::UInt32 ChallengeID; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA__CTOR_OFFSET))(this, a1, a2, a3);
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

		static ::RPG::Client::ChallengeLineupSaveData* TryGetSaveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeLineupSaveData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_TRYGETSAVEDATA_OFFSET))(a1);
		}

		static ::System::Void SaveLineupData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_SAVELINEUPDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::ChallengeLineupSaveData* Create(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::ChallengeLineupSaveData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUPSAVEDATA_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}
