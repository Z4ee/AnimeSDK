#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameRefData_RoleExpiredStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_769;
class Class_0_16E4307DCC419505_770;
class Class_0_16E4307DCC419505_771;
class Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9;
class Class_1_C0277CE3A38B20B6;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefTrait; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0xBB7B630)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0xBB7B4C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0xBB7B3D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET UNITYSDK_OFFSET(0xBB7CFD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0xBB7AE10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETGAMEREFTRAITBYID_OFFSET UNITYSDK_OFFSET(0xBB7D120)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0xBB7B260)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0xBB7B170)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0xBB7AE60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0xBB7AF00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0xBB7AEB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0xBB7A7D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0xBB7AB00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xBB7C6A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0xBB7AC00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETSEASONROLE_OFFSET UNITYSDK_OFFSET(0xBB7AD10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xBB7A650)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ACTIVATEDTRAITS_OFFSET UNITYSDK_OFFSET(0xBB7A4A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0xBB7B6A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB7B690)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0xBB7AF50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xBB7B070)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0xBB7AFB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0xBB7B010)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0xBB7A9A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0xBB7A7C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBB7B700)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xBB7A480)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xBB7A630)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xBB7A600)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_REFDATA_OFFSET UNITYSDK_OFFSET(0xBB7B680)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xBB7A620)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xBB7A640)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xBB7A460)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0xBB7D180)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEMAIN_OFFSET UNITYSDK_OFFSET(0xBB7CF70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xBB7B080)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xBB7A490)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xBB7A610)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xBB7A470)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7B720)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__INITROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0xBB7C3B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0xBB7B990)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTRAITS_OFFSET UNITYSDK_OFFSET(0xBB7B810)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam_TypeDefinitionIndex = 60581;

	class GridFightGameRefTeam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x20
		::RPG::Client::GridFightGameRefData* _Data; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _MainRoles_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>* _Rules; // 0x38

		::System::Void _ctor(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_TRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_EQUIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_ActivatedTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ACTIVATEDTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_MainRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_MAINROLES_OFFSET))(this);
		}

		::System::Void set_MainRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_MAINROLES_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_769* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_769*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_770* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_770*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_771* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_771*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLTRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLEBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* GetRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonRole* GetSeasonRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETSEASONROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFORGEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETNPCBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERSBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERBYPOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPSBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETCONSUMABLEBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameRefData* get_RefData()
		{
			return ((::RPG::Client::GridFightGameRefData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_REFDATA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_DESC_OFFSET))(this);
		}

		::System::Void _InitRoleSwitchRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__INITROLESWITCHROLE_OFFSET))(this);
		}

		::System::Void _SyncTraits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTRAITS_OFFSET))(this);
		}

		::System::Void _SyncTeam(::Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTEAM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleMain(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEMAIN_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameRefData_RoleExpiredStatus GetFinalRoleExpiredStatus(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightGameRefData_RoleExpiredStatus(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameRefTrait* GetGameRefTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGameRefTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETGAMEREFTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}
	};
}
