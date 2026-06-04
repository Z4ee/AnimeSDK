#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64E52A323C80D766_8;
class Class_1_D17272E82AE804C2_1040;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_CLEARALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xCAEB580)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_CLEARCURTEAMMEMBERS_OFFSET UNITYSDK_OFFSET(0xCAEB4D0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAEB630)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETALLMEMBERDATAS_OFFSET UNITYSDK_OFFSET(0xCAEC4F0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETCACHESORTEDALLMEMBERDATAS_OFFSET UNITYSDK_OFFSET(0xCAEC910)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETCANSELECTAVATARLIST_OFFSET UNITYSDK_OFFSET(0xCAED270)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETDEFAULTAVATARDATAS_OFFSET UNITYSDK_OFFSET(0xCAECEE0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETDEFAULTSELECTEDMEMBERS_OFFSET UNITYSDK_OFFSET(0xCAECBD0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0xCAED9C0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0xCAED9E0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_NEWDEADKEYS_OFFSET UNITYSDK_OFFSET(0xCAEDA40)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_TOTALDEADHPRATIO_OFFSET UNITYSDK_OFFSET(0xCAEDA20)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_TOTALLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0xCAEDA00)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_HASALIVEAVATARHPLESSTHAN_OFFSET UNITYSDK_OFFSET(0xCAEC640)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_ISSELECTEDMEMBER_OFFSET UNITYSDK_OFFSET(0xCAED1E0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_REFRESHMEMBERS_OFFSET UNITYSDK_OFFSET(0xCAEB680)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_REFRESHTEAMLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0xCAEC030)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SETSELECTEDMEMBERS_OFFSET UNITYSDK_OFFSET(0xCAEBD20)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0xCAED9D0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0xCAED9F0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_NEWDEADKEYS_OFFSET UNITYSDK_OFFSET(0xCAEDA50)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_TOTALDEADHPRATIO_OFFSET UNITYSDK_OFFSET(0xCAEDA30)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_TOTALLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0xCAEDA10)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SYNCPROPERTIES_OFFSET UNITYSDK_OFFSET(0xCAEA3A0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__CREATEAVATAR_OFFSET UNITYSDK_OFFSET(0xCAED690)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCAEDA60)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__REMOVEFROMCURMEMBERDATAS_OFFSET UNITYSDK_OFFSET(0xCAED8A0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__SYNCMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xCAEB860)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__TRYGETSPECIALAVATARCONFIG_OFFSET UNITYSDK_OFFSET(0xCAED950)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonTeamData_TypeDefinitionIndex = 63814;

	class TreasureDungeonTeamData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MAX_MEMBER_COUNT = 0x4; // 0x0
		::Il2CppArray<::RPG::Client::MemberData*>* _CurMemberDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MemberData*>* _AllMemberDataDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* _CacheSortedAllMembers; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewDeadKeys_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* _CacheAllMembers; // 0x30
		::System::UInt32 _TotalDeadHPRatio_k__BackingField; // 0x38
		::System::UInt32 _TotalLeftHPRatio_k__BackingField; // 0x3C
		::System::UInt32 _DefenceAdd_k__BackingField; // 0x40
		::System::UInt32 _AttackAdd_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__CTOR_OFFSET))(this);
		}

		::System::Void ClearCurTeamMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_CLEARCURTEAMMEMBERS_OFFSET))(this);
		}

		::System::Void ClearAllMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_CLEARALLMEMBERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshMembers(::System::Collections::Generic::IList_1<::Class_1_64E52A323C80D766_8*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_64E52A323C80D766_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_REFRESHMEMBERS_OFFSET))(this, a1);
		}

		::System::Void SetSelectedMembers(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1040*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1040*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SETSELECTEDMEMBERS_OFFSET))(this, a1);
		}

		::System::Void SyncProperties(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SYNCPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshTeamLeftHPRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_REFRESHTEAMLEFTHPRATIO_OFFSET))(this);
		}

		::System::Boolean HasAliveAvatarHPLessThan(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_HASALIVEAVATARHPLESSTHAN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* GetAllMemberDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETALLMEMBERDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* GetCacheSortedAllMemberDatas(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MemberData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETCACHESORTEDALLMEMBERDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* GetDefaultSelectedMembers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETDEFAULTSELECTEDMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetDefaultAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETDEFAULTAVATARDATAS_OFFSET))(this);
		}

		::System::Boolean IsSelectedMember(::RPG::Client::MemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_ISSELECTEDMEMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetCanSelectAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETCANSELECTAVATARLIST_OFFSET))(this);
		}

		::System::Void _SyncMemberData(::Class_1_64E52A323C80D766_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_64E52A323C80D766_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__SYNCMEMBERDATA_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* _CreateAvatar(::Class_1_64E52A323C80D766_8* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Class_1_64E52A323C80D766_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__CREATEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _RemoveFromCurMemberDatas(::RPG::Client::MemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__REMOVEFROMCURMEMBERDATAS_OFFSET))(this, a1);
		}

		::RPG::GameCore::SpecialAvatarRow* _TryGetSpecialAvatarConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__TRYGETSPECIALAVATARCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttackAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_ATTACKADD_OFFSET))(this);
		}

		::System::Void set_AttackAdd(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_ATTACKADD_OFFSET))(this, a1);
		}

		::System::UInt32 get_DefenceAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_DEFENCEADD_OFFSET))(this);
		}

		::System::Void set_DefenceAdd(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_DEFENCEADD_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalLeftHPRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_TOTALLEFTHPRATIO_OFFSET))(this);
		}

		::System::Void set_TotalLeftHPRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_TOTALLEFTHPRATIO_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalDeadHPRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_TOTALDEADHPRATIO_OFFSET))(this);
		}

		::System::Void set_TotalDeadHPRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_TOTALDEADHPRATIO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewDeadKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_NEWDEADKEYS_OFFSET))(this);
		}

		::System::Void set_NewDeadKeys(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_NEWDEADKEYS_OFFSET))(this, a1);
		}
	};
}
