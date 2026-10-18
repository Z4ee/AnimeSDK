#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_24;
namespace RPG::Client { class ActivityElationAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GETMODIFIEDAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC3E8330)
#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_FIXEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC3E82B0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_PLAYERSELECTEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC3E82F0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xC3E8270)
#define RPG_CLIENT_ACTIVITYELATIONBATTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E8770)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationBattleInfo_TypeDefinitionIndex = 61506;

	class ActivityElationBattleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>* _FixedAvatarList; // 0x10
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>* _PlayerSelectedAvatarList; // 0x18
		::System::UInt32 _StageID; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>* a2, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>* get_FixedAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_FIXEDAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>* get_PlayerSelectedAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_24*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GET_PLAYERSELECTEDAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* GetModifiedAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLEINFO_GETMODIFIEDAVATARDATALIST_OFFSET))(this);
		}
	};
}
