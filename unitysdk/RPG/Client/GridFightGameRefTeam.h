#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameRefData_RoleExpiredStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_718;
class Class_0_16E4307DCC419505_719;
class Class_0_16E4307DCC419505_720;
class Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869;
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

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0xA4D6E80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0xA4D6CD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0xA4D6BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET UNITYSDK_OFFSET(0xA4D8420)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0xA4D6610)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETGAMEREFTRAITBYID_OFFSET UNITYSDK_OFFSET(0xA4D8570)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0xA4D6A40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0xA4D6960)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0xA4D6660)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0xA4D6700)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0xA4D66B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0xA4D60D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0xA4D6350)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xA4D7CF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0xA4D6430)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETSEASONROLE_OFFSET UNITYSDK_OFFSET(0xA4D6520)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xA4D5F10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ACTIVATEDTRAITS_OFFSET UNITYSDK_OFFSET(0xA4D5D80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0xA4D6EF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xA4D6EE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0xA4D6750)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xA4D6870)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0xA4D67B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0xA4D6810)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0xA4D6210)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0xA4D60C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA4D6F50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xA4D5D60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA4D5EF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xA4D5EC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_REFDATA_OFFSET UNITYSDK_OFFSET(0xA4D6ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA4D5EE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA4D5F00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xA4D5D40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0xA4D85D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEMAIN_OFFSET UNITYSDK_OFFSET(0xA4D83C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xA4D6880)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xA4D5D70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xA4D5ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xA4D5D50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C5F30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__INITROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0xA4D7AA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0xA4D70F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTRAITS_OFFSET UNITYSDK_OFFSET(0xA4D6F70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam_TypeDefinitionIndex = 59646;

	class GridFightGameRefTeam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _MainRoles_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x28
		::RPG::Client::GridFightGameRefData* _Data; // 0x30
		::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>* _Rules; // 0x38

		::System::Void _ctor(::RPG::Client::GridFightGameRefData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__CTOR_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_TRAITS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_EQUIPS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_ActivatedTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ACTIVATEDTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_MainRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_MAINROLES_OFFSET))(this);
		}

		::System::Void set_MainRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_SET_MAINROLES_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_718* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_718*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_719* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_719*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_720* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_720*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETTRAITBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_ALLTRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLEBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightRole* GetRole(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLE_OFFSET))(this, id);
		}

		::RPG::Client::GridFightSeasonRole* GetSeasonRole(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETSEASONROLE_OFFSET))(this, id);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFORGEBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETNPCBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETPROJBYID_OFFSET))(this, id);
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

		::System::Boolean IsRoleUnlock(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEUNLOCK_OFFSET))(this, roleID);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERSBYTRAITID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 pos)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETMEMBERBYPOS_OFFSET))(this, pos);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPSBYID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETEQUIPBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETCONSUMABLEBYID_OFFSET))(this, id);
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

		::System::Void _SyncTeam(::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869* roles)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM__SYNCTEAM_OFFSET))(this, roles);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETROLESBYTRAIT_OFFSET))(this, traitID);
		}

		::System::Boolean IsRoleMain(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_ISROLEMAIN_OFFSET))(this, roleID);
		}

		::RPG::Client::GridFightGameRefData_RoleExpiredStatus GetFinalRoleExpiredStatus(::RPG::Client::GridFightSeasonRole* role)
		{
			return ((::RPG::Client::GridFightGameRefData_RoleExpiredStatus(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET))(this, role);
		}

		::RPG::Client::GridFightGameRefTrait* GetGameRefTraitByID(::System::UInt32 traitID)
		{
			return ((::RPG::Client::GridFightGameRefTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GETGAMEREFTRAITBYID_OFFSET))(this, traitID);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}
	};
}
