#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameRefData_RoleExpiredStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
class Class_0_16E4307DCC419505_956;
class Class_0_16E4307DCC419505_957;
class Class_0_16E4307DCC419505_964;
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

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0xD13E920)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0xD13E7B0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0xD13E6C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETFINALROLEEXPIREDSTATUS_OFFSET UNITYSDK_OFFSET(0xD140F90)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0xD13D760)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETGAMEREFTRAITBYID_OFFSET UNITYSDK_OFFSET(0xD1410E0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0xD13E550)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0xD13E420)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0xD13D7B0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0xD13D850)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0xD13D800)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0xD13D040)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0xD13D450)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xD140410)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0xD13D550)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETSEASONROLE_OFFSET UNITYSDK_OFFSET(0xD13D660)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xD13CE90)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ACTIVATEDTRAITS_OFFSET UNITYSDK_OFFSET(0xD13CAF0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0xD13E9B0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xD13E970)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0xD13D8A0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xD13DA50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0xD13D930)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0xD13D9C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0xD13D210)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0xD13D000)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD13DB80)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xD13CAD0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xD13DBD0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xD13CE10)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xD13CDB0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xD13EA40)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xD13CDD0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITLAYERCALCULATOR_OFFSET UNITYSDK_OFFSET(0xD13E400)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xD13CE50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITSWITHLAYERMORETHANONE_OFFSET UNITYSDK_OFFSET(0xD13CC50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xD13CAB0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0xD141130)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_ISROLEMAIN_OFFSET UNITYSDK_OFFSET(0xD140F10)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xD13DA90)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0xD13FFE0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xD13CAE0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_MAINROLES_OFFSET UNITYSDK_OFFSET(0xD13CDC0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xD13EA50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_TRAITLAYERCALCULATOR_OFFSET UNITYSDK_OFFSET(0xD13E410)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xD13CAC0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__CCTOR_OFFSET UNITYSDK_OFFSET(0xD141360)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD13EA60)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__INITROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0xD13FF90)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xD13DC20)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__REASSIGNEQUIP_OFFSET UNITYSDK_OFFSET(0xD140050)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0xD13ED80)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM__SYNCTRAITS_OFFSET UNITYSDK_OFFSET(0xD13EBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam_TypeDefinitionIndex = 64662;

	class GridFightFormationTeam : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::GridFightGameFormationEditor_EquipDressRule*>** StaticGet__DressRules()
		{
			return (::Il2CppArray<::RPG::Client::GridFightGameFormationEditor_EquipDressRule*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam_TypeDefinitionIndex)->GetStaticField(0x6BFE0);
		}
		::RPG::Client::GridFightRefTraitLayerCalculator* _TraitLayerCalculator_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _MainRoles_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_964*>* _Rules; // 0x28
		::Class_1_AF67E01114A98070* _Formation; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x38
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

		::Class_0_16E4307DCC419505_955* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_955*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_956* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_956*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_957* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_957*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM_GET_TRAITREPOSITORY_OFFSET))(this);
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
