#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_15;
namespace RPG::Client { class ActivityElationAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GETMODIFIEDAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9AD15D0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_FIXEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9AD15B0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_PLAYERSELECTEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9AD15C0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x9AD15A0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD1870)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationBattleInfo_TypeDefinitionIndex = 56723;

	class ActivityElationBattleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>* _FixedAvatarList; // 0x10
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>* _PlayerSelectedAvatarList; // 0x18
		::System::UInt32 _StageID; // 0x20

		::System::Void _ctor(::System::UInt32 stageID, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>* fixedAvatarList, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>* playerSelectedAvatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO__CTOR_OFFSET))(this, stageID, fixedAvatarList, playerSelectedAvatarList);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>* get_FixedAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_FIXEDAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>* get_PlayerSelectedAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_PLAYERSELECTEDAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* GetModifiedAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GETMODIFIEDAVATARDATALIST_OFFSET))(this);
		}
	};
}
