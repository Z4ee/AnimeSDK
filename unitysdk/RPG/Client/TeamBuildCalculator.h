#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1ED936FF8C554768.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_33CFB36424333436;
class Class_1_4BC858D7C27E10ED;
class Class_1_819F0DD6CB28FAB6;
class Class_1_93D6797E7CD6923E;
class Class_1_9F7A7BFCC6CA78B0;
class Class_1_A6B4D5686BDF6BEB;
class Class_1_D64053D4FAF0C0C7;
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

#define RPG_CLIENT_TEAMBUILDCALCULATOR_CHECKDATAISVALID_OFFSET UNITYSDK_OFFSET(0xB2A1620)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET UNITYSDK_OFFSET(0xB29E4A0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDCANDIDATEPOOLASSOCIATION_OFFSET UNITYSDK_OFFSET(0xB29F830)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDPRIORITIZEDASSOCIATION_OFFSET UNITYSDK_OFFSET(0xB29F3D0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDSYNOPSIS_OFFSET UNITYSDK_OFFSET(0xB2A0430)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0xB29E0B0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET UNITYSDK_OFFSET(0xB29D9C0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0xB29DAC0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xB2A2AB0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDCANDIDATEPOOLFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xB2A1DD0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMBIGDATA_OFFSET UNITYSDK_OFFSET(0xB2A2010)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xB2A1B80)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPES_OFFSET UNITYSDK_OFFSET(0xB2A1900)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CHECKHASUNRELEASEDAVATARCHANGED_OFFSET UNITYSDK_OFFSET(0xB2A1A20)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CLEARDATA_OFFSET UNITYSDK_OFFSET(0xB29DCE0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A35C0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__ENSURERESULTCOUNT_OFFSET UNITYSDK_OFFSET(0xB29F310)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLTEAMBUILDRESULTS_OFFSET UNITYSDK_OFFSET(0xB29FB30)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHALTERNATIVEAVATARS_OFFSET UNITYSDK_OFFSET(0xB29F710)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHMAINAVATARS_OFFSET UNITYSDK_OFFSET(0xB29F570)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETCANDIDATEPOOLS_OFFSET UNITYSDK_OFFSET(0xB29EE60)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDCANDIDATEPOOLASSOCIATION_B__19_0_OFFSET UNITYSDK_OFFSET(0xB2A3860)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDSYNOPSIS_B__25_0_OFFSET UNITYSDK_OFFSET(0xB2A3890)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETUSINGTEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xB29E3A0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0xB2A3440)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARERECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xB29DDB0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARETEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xB2A1770)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPAREUNRELEASEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0xB29DF50)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET UNITYSDK_OFFSET(0xB2A3580)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRYGETTEAMMATEAVATARID_OFFSET UNITYSDK_OFFSET(0xB2A08C0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__UPDATEUNRELEASEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB2A1A90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_0_OFFSET UNITYSDK_OFFSET(0xB2A3940)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_1_OFFSET UNITYSDK_OFFSET(0xB2A3BE0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__30_0_OFFSET UNITYSDK_OFFSET(0xB2A3C30)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__28_0_OFFSET UNITYSDK_OFFSET(0xB2A3C20)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator_TypeDefinitionIndex = 62770;

	class TeamBuildCalculator : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MaxAlternativeCount = 0x2; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_93D6797E7CD6923E*>* _TeamBuildCandidatePoolDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* _ConfigTeamBuildRecipeDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::Struct_2_1ED936FF8C554768, ::RPG::Client::TeamBuildRecipe*>* _BigDataTeamBuildRecipeDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::Struct_2_1ED936FF8C554768, ::Class_1_A6B4D5686BDF6BEB*>* _TeamBuildCandidateRecipeDict; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnreleasedAvatarIDs; // 0x30
		::Class_1_819F0DD6CB28FAB6* _TeamBuildSynopsisBuilder; // 0x38
		::Class_1_9F7A7BFCC6CA78B0* _TeamBuildBuilder; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RecommendAvatarIDs; // 0x48
		::Class_1_33CFB36424333436* _UnreleasedAvatarData; // 0x50
		::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED*>* _RecommendLineups; // 0x58
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

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuild*>* GetTeamBuilds(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuild*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildAssociation(::System::Collections::Generic::IList_1<::System::UInt32>* partialAvatarIDs, ::System::Collections::Generic::IList_1<::System::UInt32>* excludedAvatarIDs, ::System::Boolean checkHasAvatar, ::System::Boolean useCandidatePool)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET))(this, partialAvatarIDs, excludedAvatarIDs, checkHasAvatar, useCandidatePool);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildPrioritizedAssociation(::System::Int32 count, ::System::Collections::Generic::IList_1<::System::UInt32>* partialAvatarIDs, ::System::Collections::Generic::IList_1<::System::UInt32>* excludedAvatarIDs, ::System::Boolean checkHasAvatar)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDPRIORITIZEDASSOCIATION_OFFSET))(this, count, partialAvatarIDs, excludedAvatarIDs, checkHasAvatar);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildCandidatePoolAssociation(::System::Int32 count, ::System::Collections::Generic::IList_1<::System::UInt32>* partialAvatarIDs, ::System::Collections::Generic::IList_1<::System::UInt32>* excludedAvatarIDs, ::System::Boolean checkHasAvatar, ::System::Collections::Generic::IList_1<::RPG::Client::TeamBuildSynopsis*>* existingResults)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Collections::Generic::IList_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDCANDIDATEPOOLASSOCIATION_OFFSET))(this, count, partialAvatarIDs, excludedAvatarIDs, checkHasAvatar, existingResults);
		}

		::System::Void _FillWithMainAvatars(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* result, ::System::Int32 count, ::System::Collections::Generic::IList_1<::System::UInt32>* partialAvatarIDs, ::System::Collections::Generic::IList_1<::System::UInt32>* excludedAvatarIDs, ::System::Boolean checkHasAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHMAINAVATARS_OFFSET))(this, result, count, partialAvatarIDs, excludedAvatarIDs, checkHasAvatar);
		}

		::System::Void _FillWithAlternativeAvatars(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* result, ::System::Int32 count, ::System::Int32 altIndex, ::System::Collections::Generic::IList_1<::System::UInt32>* partialAvatarIDs, ::System::Collections::Generic::IList_1<::System::UInt32>* excludedAvatarIDs, ::System::Boolean checkHasAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHALTERNATIVEAVATARS_OFFSET))(this, result, count, altIndex, partialAvatarIDs, excludedAvatarIDs, checkHasAvatar);
		}

		::System::Void _FillTeamBuildResults(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* result, ::System::Int32 count, ::System::Collections::Generic::IList_1<::System::UInt32>* partialAvatarIDs, ::System::Collections::Generic::IList_1<::System::UInt32>* excludedAvatarIDs, ::System::Boolean checkHasAvatar, ::System::Action_1<::Class_1_819F0DD6CB28FAB6*>* configureBuilder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Action_1<::Class_1_819F0DD6CB28FAB6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLTEAMBUILDRESULTS_OFFSET))(this, result, count, partialAvatarIDs, excludedAvatarIDs, checkHasAvatar, configureBuilder);
		}

		::System::Void _EnsureResultCount(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* result, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__ENSURERESULTCOUNT_OFFSET))(this, result, count);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_93D6797E7CD6923E*>*>* _GetCandidatePools(::RPG::Client::TeamBuildRecipe* recipe)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_93D6797E7CD6923E*>*>*(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETCANDIDATEPOOLS_OFFSET))(this, recipe);
		}

		::RPG::Client::TeamBuildSynopsis* GetTeamBuildSynopsis(::RPG::Client::TeamBuild* teamBuild)
		{
			return ((::RPG::Client::TeamBuildSynopsis*(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDSYNOPSIS_OFFSET))(this, teamBuild);
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

		::System::Void _AddTeamBuildRecipe(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* teamBuildRecipeDict, ::RPG::Client::TeamBuildRecipe* teamBuildRecipe)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>*, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET))(this, teamBuildRecipeDict, teamBuildRecipe);
		}

		::RPG::Client::TeamBuildRecipe* _GetUsingTeamBuildRecipe(::RPG::Client::TeamBuildRecipe* originalRecipe)
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETUSINGTEAMBUILDRECIPE_OFFSET))(this, originalRecipe);
		}

		static ::System::Boolean _TryGetTeammateAvatarID(::RPG::Client::TeamBuildUnit* teammate, ::System::Collections::Generic::HashSet_1<::System::UInt32>* exclusiveAvatarIDs, ::System::Collections::Generic::List_1<::Class_1_93D6797E7CD6923E*>* candidatePools, ::System::UInt32& avatarID)
		{
			return ((::System::Boolean(*)(::RPG::Client::TeamBuildUnit*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::Class_1_93D6797E7CD6923E*>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__TRYGETTEAMMATEAVATARID_OFFSET))(teammate, exclusiveAvatarIDs, candidatePools, avatarID);
		}

		static ::System::Boolean _HasAvatarChecker(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET))(avatarID);
		}

		static ::System::Boolean _TrueChecker(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET))(avatarID);
		}

		::System::Void _GetTeamBuildCandidatePoolAssociation_b__19_0(::Class_1_819F0DD6CB28FAB6* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_819F0DD6CB28FAB6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDCANDIDATEPOOLASSOCIATION_B__19_0_OFFSET))(this, builder);
		}

		::Class_1_93D6797E7CD6923E* _GetTeamBuildSynopsis_b__25_0(::System::UInt32 id)
		{
			return ((::Class_1_93D6797E7CD6923E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDSYNOPSIS_B__25_0_OFFSET))(this, id);
		}

		::System::Void __PrepareRecommendLineupData_b__27_0(::Class_1_D64053D4FAF0C0C7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D64053D4FAF0C0C7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_0_OFFSET))(this, rsp);
		}

		::System::Void __PrepareRecommendLineupData_b__27_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_1_OFFSET))(this, ex);
		}

		::System::Void __PrepareUnreleasedAvatarData_b__28_0(::Class_1_33CFB36424333436* blockData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_33CFB36424333436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__28_0_OFFSET))(this, blockData);
		}

		::System::Void __PrepareTeamBuildRecipe_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__30_0_OFFSET))(this);
		}
	};
}
