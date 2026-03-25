#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_19.h"
#include "unitysdk/RPG/GameCore/GridFightSettleRankType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_627;
class Class_0_16E4307DCC419505_628;
class Class_0_16E4307DCC419505_629;
class Class_1_2341347423DFDC46_1;
class Class_1_6E708EAB438EC183_31;
class Class_1_735612C94F558EAE_31;
class Class_1_A291A0C2D65983FA;
class Class_1_C9DFE5EE7107C629_9;
class Class_1_E577B5580A99D425_3;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightDamageStatisticInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightSettleRankConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_CREATE_OFFSET UNITYSDK_OFFSET(0x98A5D00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98AA720)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETBANROLEIDS_OFFSET UNITYSDK_OFFSET(0x98AB620)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0x98AA4A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x98AA210)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0x98AA3C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0x98A9AF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0x98AA060)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0x98A9F80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0x98A9B40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0x98A9DE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0x98A9CF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0x98A9720)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0x98A9A10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x98AB260)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x98AA560)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0x98AA500)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x98AA4F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0x98A9EF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x98A9F60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0x98A9EE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0x98A9F50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0x98A9ED0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0x98AA710)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTSWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x98ABC40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTS_OFFSET UNITYSDK_OFFSET(0x98ABC20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x98AB980)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x98ABD10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DIVISIONUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x98ABAB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ENTEREDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x98AB940)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x98ABB60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0x98ABA70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x98ABB50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDROUTEID_OFFSET UNITYSDK_OFFSET(0x98ABA50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDSECTIONID_OFFSET UNITYSDK_OFFSET(0x98ABA90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISCURSEASON_OFFSET UNITYSDK_OFFSET(0x98AAB80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x98ABAF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x98ABB10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x98ABB30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x98AB870)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x98A9700)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_LEFTHP_OFFSET UNITYSDK_OFFSET(0x98AB8C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_NPCS_OFFSET UNITYSDK_OFFSET(0x98ABB80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PORTALS_OFFSET UNITYSDK_OFFSET(0x98ABCF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PROJECTIONS_OFFSET UNITYSDK_OFFSET(0x98ABBA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0x98AB900)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANK_OFFSET UNITYSDK_OFFSET(0x98AB920)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_REASON_OFFSET UNITYSDK_OFFSET(0x98AB880)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ROLES_OFFSET UNITYSDK_OFFSET(0x98A98D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x98AB9A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONROLES_OFFSET UNITYSDK_OFFSET(0x98ABBC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x98AB960)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SUBSEASONID_OFFSET UNITYSDK_OFFSET(0x98AB9F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x98A96F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMVALUE_OFFSET UNITYSDK_OFFSET(0x98ABAD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x98AB8A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALHP_OFFSET UNITYSDK_OFFSET(0x98AB8E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x98A9710)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x98ABC00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRIALROLEUIDS_OFFSET UNITYSDK_OFFSET(0x98ABBE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0x98A9F70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_AUGMENTS_OFFSET UNITYSDK_OFFSET(0x98ABC30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x98AB990)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x98ABD20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DIVISIONUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x98ABAC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ENTEREDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x98AB950)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x98ABB70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0x98ABA80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDROUTEID_OFFSET UNITYSDK_OFFSET(0x98ABA60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDSECTIONID_OFFSET UNITYSDK_OFFSET(0x98ABAA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x98ABB00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x98ABB20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x98ABB40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_LEFTHP_OFFSET UNITYSDK_OFFSET(0x98AB8D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_NPCS_OFFSET UNITYSDK_OFFSET(0x98ABB90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PORTALS_OFFSET UNITYSDK_OFFSET(0x98ABD00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PROJECTIONS_OFFSET UNITYSDK_OFFSET(0x98ABBB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0x98AB910)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANK_OFFSET UNITYSDK_OFFSET(0x98AB930)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_REASON_OFFSET UNITYSDK_OFFSET(0x98AB890)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONROLES_OFFSET UNITYSDK_OFFSET(0x98ABBD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x98AB970)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TEAMVALUE_OFFSET UNITYSDK_OFFSET(0x98ABAE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x98AB8B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALHP_OFFSET UNITYSDK_OFFSET(0x98AB8F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x98ABC10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRIALROLEUIDS_OFFSET UNITYSDK_OFFSET(0x98ABBF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x98A5F60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__GETFINISHEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x98AB0C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__GET_AUGMENTSWITHCONTEXT_B__159_0_OFFSET UNITYSDK_OFFSET(0x98ABD30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTNPC_OFFSET UNITYSDK_OFFSET(0x98AAC70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTROLE_OFFSET UNITYSDK_OFFSET(0x98AA8B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCAUGMENTS_OFFSET UNITYSDK_OFFSET(0x98A8410)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCDAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x98A8750)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCEQUIPS_OFFSET UNITYSDK_OFFSET(0x98A61E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPORTALBUFFS_OFFSET UNITYSDK_OFFSET(0x98A80D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCRANK_OFFSET UNITYSDK_OFFSET(0x98A6140)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0x98A6E90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTRAITS_OFFSET UNITYSDK_OFFSET(0x98A62B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord_TypeDefinitionIndex = 52947;

	class GridFightSettleRecord : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _Augments_k__BackingField; // 0x10
		::System::Collections::Generic::IList_1<::System::UInt32>* _ModuleIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* _DamageStatistics_k__BackingField; // 0x20
		::System::Collections::Generic::IList_1<::System::UInt32>* _UnlockedExpertRoleIDs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _BanRoleIds; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* _NPCs_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TrialRoleUIDs_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _SeasonRoles_k__BackingField; // 0x58
		::RPG::Client::GridFightSettleRankConfig* _Rank_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _Portals_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* _Projections_k__BackingField; // 0x78
		::Class_1_6E708EAB438EC183_31* _ContextData_k__BackingField; // 0x80
		::System::UInt32 _EnteredDivisionID_k__BackingField; // 0x88
		::RPG::GameCore::GridFightSettleRankType _RankType_k__BackingField; // 0x8C
		::System::UInt32 _FinishedRouteID_k__BackingField; // 0x90
		::System::UInt32 _TotalHP_k__BackingField; // 0x94
		::System::Boolean _IsPromotion_k__BackingField; // 0x98
		::System::Boolean _IsFinished_k__BackingField; // 0x99
		::System::Boolean _IsOverChargeMode_k__BackingField; // 0x9A
		::System::UInt32 _FinishedSectionID_k__BackingField; // 0x9C
		::Enum_3_4608E37A1B3D374A_19 _Reason_k__BackingField; // 0xA0
		::System::Int32 _LeftHP_k__BackingField; // 0xA4
		::System::UInt32 _FinishedChapterID_k__BackingField; // 0xA8
		::System::UInt32 _SeasonUID_k__BackingField; // 0xAC
		::System::UInt32 _TeamValue_k__BackingField; // 0xB0
		::System::UInt32 _TotalCoin_k__BackingField; // 0xB4
		::System::UInt32 _DivisionUpProgress_k__BackingField; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightSettleRecord* Create(::Class_1_C9DFE5EE7107C629_9* settleInfo, ::System::UInt32 seasonUID)
		{
			return ((::RPG::Client::GridFightSettleRecord*(*)(::Class_1_C9DFE5EE7107C629_9*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_CREATE_OFFSET))(settleInfo, seasonUID);
		}

		::Class_0_16E4307DCC419505_627* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_627*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_628* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_628*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_629* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_629*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLEBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETFORGEBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETNPCBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERSBYTRAITID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 pos)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERBYPOS_OFFSET))(this, pos);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPSBYID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETCONSUMABLEBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETTRAITBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLTRAITS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_DISPOSE_OFFSET))(this);
		}

		::System::Void _SyncRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCRANK_OFFSET))(this);
		}

		::System::Void _SyncEquips(::System::Collections::Generic::IList_1<::Class_1_A291A0C2D65983FA*>* equips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_A291A0C2D65983FA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCEQUIPS_OFFSET))(this, equips);
		}

		::System::Void _SyncTeam(::Class_1_C9DFE5EE7107C629_9* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTEAM_OFFSET))(this, settleInfo);
		}

		::System::Int32 _SortRole(::RPG::Client::GridFightSeasonRole* roleA, ::RPG::Client::GridFightSeasonRole* roleB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTROLE_OFFSET))(this, roleA, roleB);
		}

		::System::Int32 _SortNPC(::RPG::Client::GridFightNPC* npcA, ::RPG::Client::GridFightNPC* npcB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightNPC*, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTNPC_OFFSET))(this, npcA, npcB);
		}

		::System::Void _SyncTraits(::System::Collections::Generic::IEnumerable_1<::Class_1_E577B5580A99D425_3*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_E577B5580A99D425_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTRAITS_OFFSET))(this, traits);
		}

		::System::Void _SyncPortalBuffs(::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_31*>* portalBuffs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_31*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPORTALBUFFS_OFFSET))(this, portalBuffs);
		}

		::System::Void _SyncAugments(::System::Collections::Generic::IEnumerable_1<::Class_1_2341347423DFDC46_1*>* augments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_2341347423DFDC46_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCAUGMENTS_OFFSET))(this, augments);
		}

		::System::Void _SyncDamageStatistics(::Class_1_C9DFE5EE7107C629_9* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCDAMAGESTATISTICS_OFFSET))(this, settleInfo);
		}

		::System::UInt32 _GetFinishedDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__GETFINISHEDDIVISIONID_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYTRAIT_OFFSET))(this, traitID);
		}

		::System::Void GetBanRoleIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETBANROLEIDS_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISWIN_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_19 get_Reason()
		{
			return ((::Enum_3_4608E37A1B3D374A_19(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::Enum_3_4608E37A1B3D374A_19 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_19))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_REASON_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::Void set_TotalCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALCOIN_OFFSET))(this, value);
		}

		::System::Int32 get_LeftHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_LEFTHP_OFFSET))(this);
		}

		::System::Void set_LeftHP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_LEFTHP_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALHP_OFFSET))(this);
		}

		::System::Void set_TotalHP(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALHP_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightSettleRankType get_RankType()
		{
			return ((::RPG::GameCore::GridFightSettleRankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANKTYPE_OFFSET))(this);
		}

		::System::Void set_RankType(::RPG::GameCore::GridFightSettleRankType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANKTYPE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightSettleRankConfig* get_Rank()
		{
			return ((::RPG::Client::GridFightSettleRankConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::RPG::Client::GridFightSettleRankConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSettleRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANK_OFFSET))(this, value);
		}

		::System::UInt32 get_EnteredDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ENTEREDDIVISIONID_OFFSET))(this);
		}

		::System::Void set_EnteredDivisionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ENTEREDDIVISIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONUID_OFFSET))(this);
		}

		::System::Void set_SeasonUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONUID_OFFSET))(this, value);
		}

		::Class_1_6E708EAB438EC183_31* get_ContextData()
		{
			return ((::Class_1_6E708EAB438EC183_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::Class_1_6E708EAB438EC183_31* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_CONTEXTDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONID_OFFSET))(this);
		}

		::System::UInt32 get_SubSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SUBSEASONID_OFFSET))(this);
		}

		::System::Boolean get_IsCurSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISCURSEASON_OFFSET))(this);
		}

		::System::UInt32 get_FinishedRouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDROUTEID_OFFSET))(this);
		}

		::System::Void set_FinishedRouteID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDROUTEID_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishedChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDCHAPTERID_OFFSET))(this);
		}

		::System::Void set_FinishedChapterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDCHAPTERID_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishedSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDSECTIONID_OFFSET))(this);
		}

		::System::Void set_FinishedSectionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDSECTIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionUpProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DIVISIONUPPROGRESS_OFFSET))(this);
		}

		::System::Void set_DivisionUpProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DIVISIONUPPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_TeamValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMVALUE_OFFSET))(this);
		}

		::System::Void set_TeamValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TEAMVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_IsOverChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISOVERCHARGEMODE_OFFSET))(this);
		}

		::System::Void set_IsOverChargeMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISOVERCHARGEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISPROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishedDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDDIVISIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EQUIPS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* get_NPCs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_NPCS_OFFSET))(this);
		}

		::System::Void set_NPCs(::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_NPCS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* get_Projections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PROJECTIONS_OFFSET))(this);
		}

		::System::Void set_Projections(::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PROJECTIONS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_Roles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_SeasonRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONROLES_OFFSET))(this);
		}

		::System::Void set_SeasonRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONROLES_OFFSET))(this, value);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_TrialRoleUIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRIALROLEUIDS_OFFSET))(this);
		}

		::System::Void set_TrialRoleUIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRIALROLEUIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRAITS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Augments()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTS_OFFSET))(this);
		}

		::System::Void set_Augments(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_AUGMENTS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* get_AugmentsWithContext()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTSWITHCONTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Portals()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PORTALS_OFFSET))(this);
		}

		::System::Void set_Portals(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PORTALS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* get_DamageStatistics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DAMAGESTATISTICS_OFFSET))(this);
		}

		::System::Void set_DamageStatistics(::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DAMAGESTATISTICS_OFFSET))(this, value);
		}

		::RPG::Client::GridFightAugment* _get_AugmentsWithContext_b__159_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__GET_AUGMENTSWITHCONTEXT_B__159_0_OFFSET))(this, x);
		}
	};
}
