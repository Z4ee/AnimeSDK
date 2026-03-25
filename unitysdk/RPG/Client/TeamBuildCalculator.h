#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1ED936FF8C554768.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_33CFB36424333436;
class Class_1_3463368126F74BA9;
class Class_1_6D16597294F5284D_6;
class Class_1_80CB631BA8C90DD4;
class Class_1_93D6797E7CD6923E;
class Class_1_9F7A7BFCC6CA78B0;
class Class_1_A6B4D5686BDF6BEB;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildRecipe; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client { class TeamBuildUnit; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMBUILDCALCULATOR_CHECKDATAISVALID_OFFSET UNITYSDK_OFFSET(0xA5634F0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET UNITYSDK_OFFSET(0xA561390)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDSYNOPSIS_OFFSET UNITYSDK_OFFSET(0xA5620E0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0xA5610C0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET UNITYSDK_OFFSET(0xA5609C0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0xA560AC0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xA564920)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDCANDIDATEPOOLFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xA563CA0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMBIGDATA_OFFSET UNITYSDK_OFFSET(0xA563EE0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xA563A50)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPES_OFFSET UNITYSDK_OFFSET(0xA5637D0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CHECKHASUNRELEASEDAVATARCHANGED_OFFSET UNITYSDK_OFFSET(0xA5638F0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CLEARDATA_OFFSET UNITYSDK_OFFSET(0xA560CF0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA565410)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETCANDIDATEPOOLS_OFFSET UNITYSDK_OFFSET(0xA561C30)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDSYNOPSIS_B__18_0_OFFSET UNITYSDK_OFFSET(0xA5656B0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0xA5652B0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARERECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xA560DC0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARETEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xA563640)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPAREUNRELEASEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA560F60)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET UNITYSDK_OFFSET(0xA5653D0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRYGETTEAMMATEAVATARID_OFFSET UNITYSDK_OFFSET(0xA562570)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__UPDATEUNRELEASEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA563960)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0xA565760)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__20_1_OFFSET UNITYSDK_OFFSET(0xA565A00)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__23_0_OFFSET UNITYSDK_OFFSET(0xA565A50)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__21_0_OFFSET UNITYSDK_OFFSET(0xA565A40)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator_TypeDefinitionIndex = 55576;

	class TeamBuildCalculator : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_6D16597294F5284D_6*>* _RecommendLineups; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RecommendAvatarIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::Struct_2_1ED936FF8C554768, ::Class_1_A6B4D5686BDF6BEB*>* _TeamBuildCandidateRecipeDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* _BigDataTeamBuildRecipeDict; // 0x28
		::Class_1_80CB631BA8C90DD4* _TeamBuildSynopsisBuilder; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnreleasedAvatarIDs; // 0x38
		::Class_1_33CFB36424333436* _UnreleasedAvatarData; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* _ConfigTeamBuildRecipeDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_93D6797E7CD6923E*>* _TeamBuildCandidatePoolDict; // 0x50
		::Class_1_9F7A7BFCC6CA78B0* _TeamBuildBuilder; // 0x58
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

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildAssociation(::System::Collections::Generic::IList_1<::System::UInt32>* partialAvatarIDs, ::System::Boolean checkHasAvatar, ::System::Boolean useCandidatePool)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET))(this, partialAvatarIDs, checkHasAvatar, useCandidatePool);
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

		::Class_1_93D6797E7CD6923E* _GetTeamBuildSynopsis_b__18_0(::System::UInt32 id)
		{
			return ((::Class_1_93D6797E7CD6923E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDSYNOPSIS_B__18_0_OFFSET))(this, id);
		}

		::System::Void __PrepareRecommendLineupData_b__20_0(::Class_1_3463368126F74BA9* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3463368126F74BA9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__20_0_OFFSET))(this, rsp);
		}

		::System::Void __PrepareRecommendLineupData_b__20_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__20_1_OFFSET))(this, ex);
		}

		::System::Void __PrepareUnreleasedAvatarData_b__21_0(::Class_1_33CFB36424333436* blockData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_33CFB36424333436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__21_0_OFFSET))(this, blockData);
		}

		::System::Void __PrepareTeamBuildRecipe_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__23_0_OFFSET))(this);
		}
	};
}
