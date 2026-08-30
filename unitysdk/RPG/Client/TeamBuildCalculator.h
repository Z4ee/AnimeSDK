#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1;
class Class_1_14504497CA74CDDA_3;
class Class_1_185A388C9275732B;
class Class_1_33CFB36424333436;
class Class_1_704E3DFA89A430C4;
class Class_1_93D6797E7CD6923E;
class Class_1_A6B4D5686BDF6BEB;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildRecipe; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client { class TeamBuildUnit; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMBUILDCALCULATOR_CHECKDATAISVALID_OFFSET UNITYSDK_OFFSET(0x1A382A90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET UNITYSDK_OFFSET(0x1A37F8C0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDCANDIDATEPOOLASSOCIATION_OFFSET UNITYSDK_OFFSET(0x1A380B40)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDPRIORITIZEDASSOCIATION_OFFSET UNITYSDK_OFFSET(0x1A380740)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDSYNOPSIS_OFFSET UNITYSDK_OFFSET(0x1A381850)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0x1A37F510)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET UNITYSDK_OFFSET(0x1A37ED90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A37EE90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x1A383F60)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDCANDIDATEPOOLFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1A3832A0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMBIGDATA_OFFSET UNITYSDK_OFFSET(0x1A383520)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1A383010)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPES_OFFSET UNITYSDK_OFFSET(0x1A382D90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CHECKHASUNRELEASEDAVATARCHANGED_OFFSET UNITYSDK_OFFSET(0x1A382EB0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1A37F0A0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A384AB0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__ENSURERESULTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A380670)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLTEAMBUILDRESULTS_OFFSET UNITYSDK_OFFSET(0x1A380E30)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHALTERNATIVEAVATARS_OFFSET UNITYSDK_OFFSET(0x1A380A10)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHMAINAVATARS_OFFSET UNITYSDK_OFFSET(0x1A380850)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETCANDIDATEPOOLS_OFFSET UNITYSDK_OFFSET(0x1A3802F0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDCANDIDATEPOOLASSOCIATION_B__19_0_OFFSET UNITYSDK_OFFSET(0x1A384D50)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDSYNOPSIS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1A384D80)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETUSINGTEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x1A37F800)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0x1A3849B0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARERECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1A37F1B0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARETEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x1A382BE0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPAREUNRELEASEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1A37F390)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET UNITYSDK_OFFSET(0x1A384A70)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRYGETTEAMMATEAVATARID_OFFSET UNITYSDK_OFFSET(0x1A381CB0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__UPDATEUNRELEASEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1A382F20)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_0_OFFSET UNITYSDK_OFFSET(0x1A384E00)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_1_OFFSET UNITYSDK_OFFSET(0x1A385140)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__30_0_OFFSET UNITYSDK_OFFSET(0x1A3851C0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A3851B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator_TypeDefinitionIndex = 68081;

	class TeamBuildCalculator : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MaxAlternativeCount = 0x2; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_93D6797E7CD6923E*>* _TeamBuildCandidatePoolDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* _ConfigTeamBuildRecipeDict; // 0x18
		::Class_1_704E3DFA89A430C4* _TeamBuildBuilder; // 0x20
		::System::Collections::Generic::List_1<::Class_1_10F56A639581CEB1*>* _RecommendLineups; // 0x28
		::Class_1_33CFB36424333436* _UnreleasedAvatarData; // 0x30
		::System::Collections::Generic::Dictionary_2<::Struct_2_276321B6B122C69C_6, ::Class_1_A6B4D5686BDF6BEB*>* _TeamBuildCandidateRecipeDict; // 0x38
		::Class_1_185A388C9275732B* _TeamBuildSynopsisBuilder; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnreleasedAvatarIDs; // 0x48
		::System::Collections::Generic::Dictionary_2<::Struct_2_276321B6B122C69C_6, ::RPG::Client::TeamBuildRecipe*>* _BigDataTeamBuildRecipeDict; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RecommendAvatarIDs; // 0x58
		::System::Nullable_1<::System::Int32> _MaxTeamBuildSynopsisCount; // 0x60
		::System::Boolean _HasData; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxTeamBuildSynopsisCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_REFRESH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuild*>* GetTeamBuilds(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuild*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildAssociation(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildPrioritizedAssociation(::System::Int32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDPRIORITIZEDASSOCIATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildCandidatePoolAssociation(::System::Int32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Boolean a4, ::System::Collections::Generic::IList_1<::RPG::Client::TeamBuildSynopsis*>* a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Collections::Generic::IList_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDCANDIDATEPOOLASSOCIATION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _FillWithMainAvatars(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1, ::System::Int32 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHMAINAVATARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _FillWithAlternativeAvatars(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::Collections::Generic::IList_1<::System::UInt32>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHALTERNATIVEAVATARS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _FillTeamBuildResults(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1, ::System::Int32 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::Boolean a5, ::System::Action_1<::Class_1_185A388C9275732B*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Action_1<::Class_1_185A388C9275732B*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLTEAMBUILDRESULTS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _EnsureResultCount(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__ENSURERESULTCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_93D6797E7CD6923E*>*>* _GetCandidatePools(::RPG::Client::TeamBuildRecipe* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_93D6797E7CD6923E*>*>*(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETCANDIDATEPOOLS_OFFSET))(this, a1);
		}

		::RPG::Client::TeamBuildSynopsis* GetTeamBuildSynopsis(::RPG::Client::TeamBuild* a1)
		{
			return ((::RPG::Client::TeamBuildSynopsis*(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDSYNOPSIS_OFFSET))(this, a1);
		}

		::System::Boolean CheckDataIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_CHECKDATAISVALID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareRecommendLineupData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARERECOMMENDLINEUPDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareUnreleasedAvatarData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPAREUNRELEASEDAVATARDATA_OFFSET))(this);
		}

		::System::Void _ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__CLEARDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareTeamBuildRecipe()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARETEAMBUILDRECIPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _BuildTeamBuildRecipes()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPES_OFFSET))(this);
		}

		::System::Void _BuildTeamBuildRecipeFromConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMCONFIG_OFFSET))(this);
		}

		::System::Void _BuildTeamBuildCandidatePoolFromConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDCANDIDATEPOOLFROMCONFIG_OFFSET))(this);
		}

		::System::Boolean _CheckHasUnreleasedAvatarChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__CHECKHASUNRELEASEDAVATARCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateUnreleasedAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__UPDATEUNRELEASEDAVATARIDS_OFFSET))(this);
		}

		::System::Void _BuildTeamBuildRecipeFromBigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMBIGDATA_OFFSET))(this);
		}

		::System::Void _AddTeamBuildRecipe(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* a1, ::RPG::Client::TeamBuildRecipe* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>*, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TeamBuildRecipe* _GetUsingTeamBuildRecipe(::RPG::Client::TeamBuildRecipe* a1)
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETUSINGTEAMBUILDRECIPE_OFFSET))(this, a1);
		}

		static ::System::Boolean _TryGetTeammateAvatarID(::RPG::Client::TeamBuildUnit* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::Class_1_93D6797E7CD6923E*>* a3, ::System::UInt32& a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::TeamBuildUnit*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::Class_1_93D6797E7CD6923E*>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__TRYGETTEAMMATEAVATARID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _HasAvatarChecker(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET))(a1);
		}

		static ::System::Boolean _TrueChecker(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET))(a1);
		}

		::System::Void _GetTeamBuildCandidatePoolAssociation_b__19_0(::Class_1_185A388C9275732B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_185A388C9275732B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDCANDIDATEPOOLASSOCIATION_B__19_0_OFFSET))(this, a1);
		}

		::Class_1_93D6797E7CD6923E* _GetTeamBuildSynopsis_b__25_0(::System::UInt32 a1)
		{
			return ((::Class_1_93D6797E7CD6923E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDSYNOPSIS_B__25_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareRecommendLineupData_b__27_0(::Class_1_14504497CA74CDDA_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14504497CA74CDDA_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareRecommendLineupData_b__27_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_1_OFFSET))(this, a1);
		}

		::System::Void __PrepareUnreleasedAvatarData_b__28_0(::Class_1_33CFB36424333436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_33CFB36424333436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__28_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareTeamBuildRecipe_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__30_0_OFFSET))(this);
		}
	};
}
