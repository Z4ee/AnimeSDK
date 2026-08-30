#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_20.h"
#include "unitysdk/RPG/GameCore/GridFightSettleRankType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_856;
class Class_0_16E4307DCC419505_857;
class Class_0_16E4307DCC419505_858;
class Class_1_075C34D03AFA1215_35;
class Class_1_1C706860DB902897_1;
class Class_1_21C7581DFE99F091_50;
class Class_1_21C7581DFE99F091_52;
class Class_1_4A2801D02B2BB246_6;
class Class_1_C9DFE5EE7107C629_16;
class Class_1_D17272E82AE804C2_438;
class Class_1_D40936EF3BF54118_42;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightDamageStatisticInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterData; }
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

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_CREATE_OFFSET UNITYSDK_OFFSET(0xD3198B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD31FF20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETBANROLEIDS_OFFSET UNITYSDK_OFFSET(0xD3216B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0xD31FC40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0xD31F9E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0xD31FB50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0xD31ED30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0xD31F870)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0xD31F740)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0xD31ED80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0xD31F060)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0xD31EF50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0xD31E950)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0xD31EC30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xD320D20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xD31FD60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AFFIXDATALIST_OFFSET UNITYSDK_OFFSET(0xD31F340)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0xD31FCD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xD31FC90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0xD31F200)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xD31F2E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0xD31F1C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0xD31F290)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0xD31F170)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0xD31FED0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTSWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0xD321E80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTS_OFFSET UNITYSDK_OFFSET(0xD321E60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_BOSSINFOS_OFFSET UNITYSDK_OFFSET(0xD31F5C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xD321B80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xD321F60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DIVISIONUPPROGRESS_OFFSET UNITYSDK_OFFSET(0xD321CB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ENTEREDDIVISIONID_OFFSET UNITYSDK_OFFSET(0xD321B40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xD321DA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0xD31F320)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0xD321C70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0xD321D50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDROUTEID_OFFSET UNITYSDK_OFFSET(0xD321C50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDSECTIONID_OFFSET UNITYSDK_OFFSET(0xD321C90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISCURSEASON_OFFSET UNITYSDK_OFFSET(0xD320720)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD321CF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0xD321D10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xD321D30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD321A30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xD31E8D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_LEFTHP_OFFSET UNITYSDK_OFFSET(0xD321AC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_NPCS_OFFSET UNITYSDK_OFFSET(0xD321DC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PORTALS_OFFSET UNITYSDK_OFFSET(0xD321F40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PROJECTIONS_OFFSET UNITYSDK_OFFSET(0xD321DE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0xD321B00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANK_OFFSET UNITYSDK_OFFSET(0xD321B20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_REASON_OFFSET UNITYSDK_OFFSET(0xD321A80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ROLES_OFFSET UNITYSDK_OFFSET(0xD31EAD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD321BA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONROLES_OFFSET UNITYSDK_OFFSET(0xD321E00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xD321B60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SUBSEASONID_OFFSET UNITYSDK_OFFSET(0xD321BF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xD31E890)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMVALUE_OFFSET UNITYSDK_OFFSET(0xD321CD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0xD321AA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALHP_OFFSET UNITYSDK_OFFSET(0xD321AE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xD31E910)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xD321E40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRIALROLEUIDS_OFFSET UNITYSDK_OFFSET(0xD321E20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xD31EEF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_AUGMENTS_OFFSET UNITYSDK_OFFSET(0xD321E70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xD321B90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xD321F70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DIVISIONUPPROGRESS_OFFSET UNITYSDK_OFFSET(0xD321CC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ENTEREDDIVISIONID_OFFSET UNITYSDK_OFFSET(0xD321B50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xD321DB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0xD31F330)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0xD321C80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDROUTEID_OFFSET UNITYSDK_OFFSET(0xD321C60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDSECTIONID_OFFSET UNITYSDK_OFFSET(0xD321CA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD321D00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0xD321D20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xD321D40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_LEFTHP_OFFSET UNITYSDK_OFFSET(0xD321AD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_NPCS_OFFSET UNITYSDK_OFFSET(0xD321DD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PORTALS_OFFSET UNITYSDK_OFFSET(0xD321F50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PROJECTIONS_OFFSET UNITYSDK_OFFSET(0xD321DF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0xD321B10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANK_OFFSET UNITYSDK_OFFSET(0xD321B30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_REASON_OFFSET UNITYSDK_OFFSET(0xD321A90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONROLES_OFFSET UNITYSDK_OFFSET(0xD321E10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xD321B70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TEAMVALUE_OFFSET UNITYSDK_OFFSET(0xD321CE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0xD321AB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALHP_OFFSET UNITYSDK_OFFSET(0xD321AF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xD321E50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRIALROLEUIDS_OFFSET UNITYSDK_OFFSET(0xD321E30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xD319A90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__GETFINISHEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0xD320C00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__GET_AUGMENTSWITHCONTEXT_B__167_0_OFFSET UNITYSDK_OFFSET(0xD321F80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__INITHACKEQUIPEFFECTS_OFFSET UNITYSDK_OFFSET(0xD320060)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTNPC_OFFSET UNITYSDK_OFFSET(0xD3208D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTROLE_OFFSET UNITYSDK_OFFSET(0xD320410)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCAUGMENTS_OFFSET UNITYSDK_OFFSET(0xD31CC50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCDAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xD31D170)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCEQUIPS_OFFSET UNITYSDK_OFFSET(0xD319D80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPORTALBUFFS_OFFSET UNITYSDK_OFFSET(0xD31C730)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCRANK_OFFSET UNITYSDK_OFFSET(0xD319C80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0xD31AD10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTRAITS_OFFSET UNITYSDK_OFFSET(0xD319E50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord_TypeDefinitionIndex = 65268;

	class GridFightSettleRecord : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BanRoleIds; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* _DamageStatistics_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TrialRoleUIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x28
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* _ExceptedRoleIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _SeasonRoles_k__BackingField; // 0x40
		::Class_1_075C34D03AFA1215_35* _ContextData_k__BackingField; // 0x48
		::System::Collections::Generic::IList_1<::System::UInt32>* _ModuleIDs; // 0x50
		::Class_1_D40936EF3BF54118_42* _BossInfo; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _Augments_k__BackingField; // 0x60
		::System::Collections::Generic::IList_1<::Class_1_21C7581DFE99F091_50*>* _Affixs; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _Portals_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* _NPCs_k__BackingField; // 0x78
		::RPG::Client::GridFightSettleRankConfig* _Rank_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* _Projections_k__BackingField; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x90
		::System::UInt32 _EnteredDivisionID_k__BackingField; // 0x98
		::System::UInt32 _FinishedSectionID_k__BackingField; // 0x9C
		::System::UInt32 _TeamValue_k__BackingField; // 0xA0
		::System::UInt32 _SeasonUID_k__BackingField; // 0xA4
		::System::UInt32 _TotalHP_k__BackingField; // 0xA8
		::RPG::GameCore::GridFightSettleRankType _RankType_k__BackingField; // 0xAC
		::System::Int32 _LeftHP_k__BackingField; // 0xB0
		::System::UInt32 _FinishedChapterID_k__BackingField; // 0xB4
		::System::UInt32 _TotalCoin_k__BackingField; // 0xB8
		::System::UInt32 _DivisionUpProgress_k__BackingField; // 0xBC
		::Enum_3_4608E37A1B3D374A_20 _Reason_k__BackingField; // 0xC0
		::System::Boolean _IsPromotion_k__BackingField; // 0xC4
		::System::Boolean _IsFinished_k__BackingField; // 0xC5
		::System::Boolean _IsOverChargeMode_k__BackingField; // 0xC6
		::System::UInt32 _FinishedRouteID_k__BackingField; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightSettleRecord* Create(::Class_1_C9DFE5EE7107C629_16* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightSettleRecord*(*)(::Class_1_C9DFE5EE7107C629_16*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_CREATE_OFFSET))(a1, a2);
		}

		::Class_0_16E4307DCC419505_856* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_856*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_857* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_857*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_858* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_858*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLEBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETFORGEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETNPCBYUID_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_ISROLEUNLOCK_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYID_OFFSET))(this, a1);
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

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_ExceptedRoleIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EXCEPTEDROLEIDS_OFFSET))(this);
		}

		::System::Void set_ExceptedRoleIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EXCEPTEDROLEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>* get_AffixDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AFFIXDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* get_BossInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_BOSSINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERSBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERBYPOS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPSBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETCONSUMABLEBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETTRAITBYID_OFFSET))(this, a1);
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

		::System::Void _SyncEquips(::System::Collections::Generic::IList_1<::Class_1_1C706860DB902897_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1C706860DB902897_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCEQUIPS_OFFSET))(this, a1);
		}

		::System::Void _SyncTeam(::Class_1_C9DFE5EE7107C629_16* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTEAM_OFFSET))(this, a1);
		}

		::System::Void _InitHackEquipEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__INITHACKEQUIPEFFECTS_OFFSET))(this);
		}

		::System::Int32 _SortRole(::RPG::Client::GridFightSeasonRole* a1, ::RPG::Client::GridFightSeasonRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTROLE_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortNPC(::RPG::Client::GridFightNPC* a1, ::RPG::Client::GridFightNPC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightNPC*, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTNPC_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncTraits(::System::Collections::Generic::IEnumerable_1<::Class_1_4A2801D02B2BB246_6*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_4A2801D02B2BB246_6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTRAITS_OFFSET))(this, a1);
		}

		::System::Void _SyncPortalBuffs(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_438*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_438*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPORTALBUFFS_OFFSET))(this, a1);
		}

		::System::Void _SyncAugments(::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_52*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_52*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCAUGMENTS_OFFSET))(this, a1);
		}

		::System::Void _SyncDamageStatistics(::Class_1_C9DFE5EE7107C629_16* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCDAMAGESTATISTICS_OFFSET))(this, a1);
		}

		::System::UInt32 _GetFinishedDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__GETFINISHEDDIVISIONID_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::System::Void GetBanRoleIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETBANROLEIDS_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISWIN_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_20 get_Reason()
		{
			return ((::Enum_3_4608E37A1B3D374A_20(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::Enum_3_4608E37A1B3D374A_20 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_20))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_REASON_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::Void set_TotalCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALCOIN_OFFSET))(this, a1);
		}

		::System::Int32 get_LeftHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_LEFTHP_OFFSET))(this);
		}

		::System::Void set_LeftHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_LEFTHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALHP_OFFSET))(this);
		}

		::System::Void set_TotalHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightSettleRankType get_RankType()
		{
			return ((::RPG::GameCore::GridFightSettleRankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANKTYPE_OFFSET))(this);
		}

		::System::Void set_RankType(::RPG::GameCore::GridFightSettleRankType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANKTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSettleRankConfig* get_Rank()
		{
			return ((::RPG::Client::GridFightSettleRankConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::RPG::Client::GridFightSettleRankConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSettleRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnteredDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ENTEREDDIVISIONID_OFFSET))(this);
		}

		::System::Void set_EnteredDivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ENTEREDDIVISIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONUID_OFFSET))(this);
		}

		::System::Void set_SeasonUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONUID_OFFSET))(this, a1);
		}

		::Class_1_075C34D03AFA1215_35* get_ContextData()
		{
			return ((::Class_1_075C34D03AFA1215_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::Class_1_075C34D03AFA1215_35* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_CONTEXTDATA_OFFSET))(this, a1);
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

		::System::Void set_FinishedRouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDROUTEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDCHAPTERID_OFFSET))(this);
		}

		::System::Void set_FinishedChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDCHAPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDSECTIONID_OFFSET))(this);
		}

		::System::Void set_FinishedSectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDSECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionUpProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DIVISIONUPPROGRESS_OFFSET))(this);
		}

		::System::Void set_DivisionUpProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DIVISIONUPPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TeamValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMVALUE_OFFSET))(this);
		}

		::System::Void set_TeamValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TEAMVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISOVERCHARGEMODE_OFFSET))(this);
		}

		::System::Void set_IsOverChargeMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISOVERCHARGEMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISPROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDDIVISIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EQUIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* get_NPCs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_NPCS_OFFSET))(this);
		}

		::System::Void set_NPCs(::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_NPCS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* get_Projections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PROJECTIONS_OFFSET))(this);
		}

		::System::Void set_Projections(::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PROJECTIONS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_Roles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_SeasonRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONROLES_OFFSET))(this);
		}

		::System::Void set_SeasonRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONROLES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_TrialRoleUIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRIALROLEUIDS_OFFSET))(this);
		}

		::System::Void set_TrialRoleUIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRIALROLEUIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Augments()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTS_OFFSET))(this);
		}

		::System::Void set_Augments(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_AUGMENTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* get_AugmentsWithContext()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTSWITHCONTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Portals()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PORTALS_OFFSET))(this);
		}

		::System::Void set_Portals(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PORTALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* get_DamageStatistics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DAMAGESTATISTICS_OFFSET))(this);
		}

		::System::Void set_DamageStatistics(::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DAMAGESTATISTICS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugment* _get_AugmentsWithContext_b__167_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__GET_AUGMENTSWITHCONTEXT_B__167_0_OFFSET))(this, a1);
		}
	};
}
