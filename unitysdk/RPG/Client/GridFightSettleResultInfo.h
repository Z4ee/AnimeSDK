#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_20.h"
#include "unitysdk/System/Object.h"

class Class_1_919EEFBFAC71CCF3;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightDamageStatisticInfo; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSettleRankConfig; }
namespace RPG::Client { class GridFightSettleRecord; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD756D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD75C80)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_AUGMENTSWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AD768B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_AUGMENTS_OFFSET UNITYSDK_OFFSET(0x1AD76860)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_CURDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1AD75EF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1AD769E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_DIVISIONUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AD75FF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_EARNEDEXPBASE_OFFSET UNITYSDK_OFFSET(0x1AD76A30)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_EARNEDEXPEXTRA_OFFSET UNITYSDK_OFFSET(0x1AD76A50)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ENTEREDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1AD76710)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_FINISHEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1AD763C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_FINISHEDROUTEID_OFFSET UNITYSDK_OFFSET(0x1AD76370)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_FINISHEDSECTIONID_OFFSET UNITYSDK_OFFSET(0x1AD76410)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISLOSE_OFFSET UNITYSDK_OFFSET(0x1AD75DA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0x1AD75E70)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x1AD76610)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1AD76760)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1AD75D20)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_LEFTHP_OFFSET UNITYSDK_OFFSET(0x1AD76670)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_PORTALS_OFFSET UNITYSDK_OFFSET(0x1AD76990)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_PREVDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1AD75FD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1AD76280)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1AD75CD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ROLES_OFFSET UNITYSDK_OFFSET(0x1AD76810)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SCORINGCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1AD76460)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SCORINGSECTIONID_OFFSET UNITYSDK_OFFSET(0x1AD76560)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SEASONEXP_OFFSET UNITYSDK_OFFSET(0x1AD75F10)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SEASONLEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AD75F50)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SEASONLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD75F30)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SETTLERECORD_OFFSET UNITYSDK_OFFSET(0x1AD75FB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0x1AD75F90)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TEAMVALUE_OFFSET UNITYSDK_OFFSET(0x1AD76320)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x1AD762D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TOTALHP_OFFSET UNITYSDK_OFFSET(0x1AD766C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1AD767C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_WEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0x1AD75F70)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_CURDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1AD75F00)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_EARNEDEXPBASE_OFFSET UNITYSDK_OFFSET(0x1AD76A40)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_EARNEDEXPEXTRA_OFFSET UNITYSDK_OFFSET(0x1AD76A60)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_PREVDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1AD75FE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_SEASONEXP_OFFSET UNITYSDK_OFFSET(0x1AD75F20)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_SEASONLEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AD75F60)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_SEASONLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD75F40)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_SETTLERECORD_OFFSET UNITYSDK_OFFSET(0x1AD75FC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0x1AD75FA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_WEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0x1AD75F80)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD76A70)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD75760)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__GETDIVISIONUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AD76040)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__GET_AUGMENTSWITHCONTEXT_B__78_0_OFFSET UNITYSDK_OFFSET(0x1AD76B90)
#define RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__SYNC_OFFSET UNITYSDK_OFFSET(0x1AD75770)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleResultInfo_TypeDefinitionIndex = 62296;

	class GridFightSettleResultInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet__DivisionLevelUpTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleResultInfo_TypeDefinitionIndex)->GetStaticField(0x2C5D0);
		}
		::RPG::Client::GridFightSettleRecord* _SettleRecord_k__BackingField; // 0x10
		::System::UInt32 _SeasonExp_k__BackingField; // 0x18
		::System::UInt32 _EarnedExpBase_k__BackingField; // 0x1C
		::System::UInt32 _SeasonLevel_k__BackingField; // 0x20
		::System::UInt32 _PrevDivisionID_k__BackingField; // 0x24
		::System::UInt32 _TalentCoin_k__BackingField; // 0x28
		::System::UInt32 _WeeklyScore_k__BackingField; // 0x2C
		::System::UInt32 _CurDivisionID_k__BackingField; // 0x30
		::System::UInt32 _EarnedExpExtra_k__BackingField; // 0x34
		::System::Single _SeasonLevelProgress_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightSettleResultInfo* Create(::Class_1_919EEFBFAC71CCF3* a1)
		{
			return ((::RPG::Client::GridFightSettleResultInfo*(*)(::Class_1_919EEFBFAC71CCF3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _Sync(::Class_1_919EEFBFAC71CCF3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_919EEFBFAC71CCF3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__SYNC_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_20 get_Reason()
		{
			return ((::Enum_3_4608E37A1B3D374A_20(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_REASON_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Boolean get_IsLose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsManualQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISMANUALQUIT_OFFSET))(this);
		}

		::System::UInt32 get_CurDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_CURDIVISIONID_OFFSET))(this);
		}

		::System::Void set_CurDivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_CURDIVISIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SEASONEXP_OFFSET))(this);
		}

		::System::Void set_SeasonExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_SEASONEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SEASONLEVEL_OFFSET))(this);
		}

		::System::Void set_SeasonLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_SEASONLEVEL_OFFSET))(this, a1);
		}

		::System::Single get_SeasonLevelProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SEASONLEVELPROGRESS_OFFSET))(this);
		}

		::System::Void set_SeasonLevelProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_SEASONLEVELPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeeklyScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_WEEKLYSCORE_OFFSET))(this);
		}

		::System::Void set_WeeklyScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_WEEKLYSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TalentCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_TALENTCOIN_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSettleRecord* get_SettleRecord()
		{
			return ((::RPG::Client::GridFightSettleRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SETTLERECORD_OFFSET))(this);
		}

		::System::Void set_SettleRecord(::RPG::Client::GridFightSettleRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSettleRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_SETTLERECORD_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrevDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_PREVDIVISIONID_OFFSET))(this);
		}

		::System::Void set_PrevDivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_PREVDIVISIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionUpProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_DIVISIONUPPROGRESS_OFFSET))(this);
		}

		::RPG::Client::GridFightSettleRankConfig* get_Rank()
		{
			return ((::RPG::Client::GridFightSettleRankConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_TotalCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::UInt32 get_TeamValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TEAMVALUE_OFFSET))(this);
		}

		::System::UInt32 get_FinishedRouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_FINISHEDROUTEID_OFFSET))(this);
		}

		::System::UInt32 get_FinishedChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_FINISHEDCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_FinishedSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_FINISHEDSECTIONID_OFFSET))(this);
		}

		::System::UInt32 get_ScoringChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SCORINGCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_ScoringSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_SCORINGSECTIONID_OFFSET))(this);
		}

		::System::Boolean get_IsOverChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISOVERCHARGEMODE_OFFSET))(this);
		}

		::System::Int32 get_LeftHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_LEFTHP_OFFSET))(this);
		}

		::System::UInt32 get_TotalHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TOTALHP_OFFSET))(this);
		}

		::System::UInt32 get_EnteredDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ENTEREDDIVISIONID_OFFSET))(this);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_TRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_Roles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_ROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Augments()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_AUGMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* get_AugmentsWithContext()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_AUGMENTSWITHCONTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Portals()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_PORTALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* get_DamageStatistics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_DAMAGESTATISTICS_OFFSET))(this);
		}

		::System::UInt32 get_EarnedExpBase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_EARNEDEXPBASE_OFFSET))(this);
		}

		::System::Void set_EarnedExpBase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_EARNEDEXPBASE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EarnedExpExtra()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_GET_EARNEDEXPEXTRA_OFFSET))(this);
		}

		::System::Void set_EarnedExpExtra(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO_SET_EARNEDEXPEXTRA_OFFSET))(this, a1);
		}

		::System::UInt32 _GetDivisionUpProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__GETDIVISIONUPPROGRESS_OFFSET))(this);
		}

		::RPG::Client::GridFightAugment* _get_AugmentsWithContext_b__78_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERESULTINFO__GET_AUGMENTSWITHCONTEXT_B__78_0_OFFSET))(this, a1);
		}
	};
}
