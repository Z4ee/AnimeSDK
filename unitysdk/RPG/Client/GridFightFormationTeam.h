#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameRefData_RoleExpiredStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_805;
class Class_0_16E4307DCC419505_806;
class Class_0_16E4307DCC419505_807;
class Class_0_16E4307DCC419505_814;
class Class_1_AF67E01114A98070;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightGameFormationEditor_EquipDressRule; }
namespace RPG::Client { class GridFightGameRefTrait; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRefTraitLayerCalculator; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0x1A6B0090)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x1A6AFF20)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0x1A6AFE30)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1A6B29B0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0x1A6AEED0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETGAMEREFTRAITBYID_OFFSET UNITYSDK_OFFSET(0x1A6B2B00)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0x1A6AFCC0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0x1A6AFB90)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0x1A6AEF20)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0x1A6AEFC0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0x1A6AEF70)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0x1A6AE7B0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0x1A6AEBC0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x1A6B1E40)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0x1A6AECC0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETSEASONROLE_OFFSET UNITYSDK_OFFSET(0x1A6AEDD0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x1A6AE600)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ACTIVATEDTRAITS_OFFSET UNITYSDK_OFFSET(0x1A6AE260)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0x1A6B0120)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x1A6B00E0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0x1A6AF010)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A6AF1C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0x1A6AF0A0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0x1A6AF130)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0x1A6AE980)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0x1A6AE770)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A6AF2F0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1A6AE240)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1A6AF340)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1A6AE580)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_MAINROLES_OFFSET UNITYSDK_OFFSET(0x1A6AE520)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x1A6B01B0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1A6AE540)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITLAYERCALCULATOR_OFFSET UNITYSDK_OFFSET(0x1A6AFB70)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1A6AE5C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITSWITHLAYERMORETHANONE_OFFSET UNITYSDK_OFFSET(0x1A6AE3C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1A6AE220)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0x1A6B2B50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_ISROLEMAIN_OFFSET UNITYSDK_OFFSET(0x1A6B2930)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A6AF200)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x1A6B1A50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1A6AE250)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_MAINROLES_OFFSET UNITYSDK_OFFSET(0x1A6AE530)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x1A6B01C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_TRAITLAYERCALCULATOR_OFFSET UNITYSDK_OFFSET(0x1A6AFB80)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1A6AE230)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6B2D80)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B01D0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__INITROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1A6B16C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1A6AF390)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__REASSIGNEQUIP_OFFSET UNITYSDK_OFFSET(0x1A6B1AA0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0x1A6B04F0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__SYNCTRAITS_OFFSET UNITYSDK_OFFSET(0x1A6B0350)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam_TypeDefinitionIndex = 61738;

	class GridFightFormationTeam : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::GridFightGameFormationEditor_EquipDressRule*>** StaticGet__DressRules()
		{
			return (::Il2CppArray<::RPG::Client::GridFightGameFormationEditor_EquipDressRule*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam_TypeDefinitionIndex)->GetStaticField(0x248A0);
		}
		::Class_1_AF67E01114A98070* _Formation; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_814*>* _Rules; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _MainRoles_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x30
		::RPG::Client::GridFightRefTraitLayerCalculator* _TraitLayerCalculator_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x40
		::System::UInt32 _SeasonUID_k__BackingField; // 0x48

		::System::Void _ctor(::Class_1_AF67E01114A98070* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AF67E01114A98070*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_TRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_EQUIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_ActivatedTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ACTIVATEDTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_TraitsWithLayerMoreThanOne()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITSWITHLAYERMORETHANONE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_MainRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_MAINROLES_OFFSET))(this);
		}

		::System::Void set_MainRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_MAINROLES_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_805* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_805*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_806* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_806*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_807* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_807*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLTRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLEBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLESBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* GetRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonRole* GetSeasonRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETSEASONROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETFORGEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETNPCBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETPROJBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETPROJBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_ISROLEUNLOCK_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ISEXPIRED_OFFSET))(this);
		}

		::RPG::Client::GridFightRefTraitLayerCalculator* get_TraitLayerCalculator()
		{
			return ((::RPG::Client::GridFightRefTraitLayerCalculator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITLAYERCALCULATOR_OFFSET))(this);
		}

		::System::Void set_TraitLayerCalculator(::RPG::Client::GridFightRefTraitLayerCalculator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRefTraitLayerCalculator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_TRAITLAYERCALCULATOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETMEMBERSBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETMEMBERBYPOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETEQUIPSBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETEQUIPBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETCONSUMABLEBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_SEASONUID_OFFSET))(this);
		}

		::System::Void set_SeasonUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_SEASONUID_OFFSET))(this, a1);
		}

		::System::Void _InitRoleSwitchRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__INITROLESWITCHROLE_OFFSET))(this);
		}

		::System::Void _SyncTraits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__SYNCTRAITS_OFFSET))(this);
		}

		::System::Void RefreshTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_REFRESHTEAM_OFFSET))(this);
		}

		::System::Void _SyncTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__SYNCTEAM_OFFSET))(this);
		}

		::System::Void _ReassignEquip(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__REASSIGNEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleMain(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_ISROLEMAIN_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameRefData_RoleExpiredStatus GetFinalRoleExpiredStatus(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightGameRefData_RoleExpiredStatus(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean _IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__ISEXPIRED_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefTrait* GetGameRefTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGameRefTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETGAMEREFTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}
	};
}
