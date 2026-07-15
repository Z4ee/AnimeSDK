#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_16D78633781F25C4;
class Class_1_3E6E1020B071C118;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_CONVERTORDERTOPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x19D18890)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_CONVERTSLOTDATASTOAVATARDICT_OFFSET UNITYSDK_OFFSET(0x19D18C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_CREATEBATTLESTATINFO_OFFSET UNITYSDK_OFFSET(0x19D195A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_FORMATPERCENTWITHONEDECIMAL_1_OFFSET UNITYSDK_OFFSET(0x19D194A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_FORMATPERCENTWITHONEDECIMAL_OFFSET UNITYSDK_OFFSET(0x19D19210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GETCANSHOWPROPERTYTYPES_OFFSET UNITYSDK_OFFSET(0x19D189D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GETCHAPTERNUMTEXTIDBYNODEINDEX_OFFSET UNITYSDK_OFFSET(0x19D19180)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GETSOLTDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x19D188D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x19D1B270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_ASSISTREWARDID_OFFSET UNITYSDK_OFFSET(0x19D1AF70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_CHESTID_OFFSET UNITYSDK_OFFSET(0x19D1A7F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_CRYSTALID_OFFSET UNITYSDK_OFFSET(0x19D1A5F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_DUNGEONMULTIPLEPLAYERSETTLERATIOLIST_OFFSET UNITYSDK_OFFSET(0x19D1A110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_DUNGEONREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x19D1B070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_FORCETOTRACESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x19D1B2D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHACOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x19D1A8F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHACRYSTALID_OFFSET UNITYSDK_OFFSET(0x19D1A6F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHAGUARANTEECOUNT_OFFSET UNITYSDK_OFFSET(0x19D1ABF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHAMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x19D1A9F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHAREDOTCOUNT_OFFSET UNITYSDK_OFFSET(0x19D1AAF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_INITIALBASEPOWER_OFFSET UNITYSDK_OFFSET(0x19D1ACF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_INITIALMAXFRIENDSOLTCOUNT_OFFSET UNITYSDK_OFFSET(0x19D1AEA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x19D1A0D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_NEWREDDOTEXCLUDEAVATARIDS_OFFSET UNITYSDK_OFFSET(0x19D1B330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_POWERSIGNIFICANTFIGURES_OFFSET UNITYSDK_OFFSET(0x19D1B170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_TABICONFEMALE_OFFSET UNITYSDK_OFFSET(0x19D13210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_TABICONMALE_OFFSET UNITYSDK_OFFSET(0x19D13150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_TAGLEVELLIST_OFFSET UNITYSDK_OFFSET(0x19D1A380)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_TECHPOINTID_OFFSET UNITYSDK_OFFSET(0x19D1ADA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x19D1B2A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_SET_FORCETOTRACESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x19D1B300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_SET_NEWREDDOTEXCLUDEAVATARIDS_OFFSET UNITYSDK_OFFSET(0x19D1B360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D1B3B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1B3A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS__ISAVATARINTEAM_OFFSET UNITYSDK_OFFSET(0x19D19B80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ActivityIdleLiveUtils_TypeDefinitionIndex = 71459;

	class ActivityIdleLiveUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__NewRedDotExcludeAvatarIDs_k__BackingField()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils_TypeDefinitionIndex)->GetStaticField(0x3C090);
		}
		static ::System::UInt32* StaticGet__ActivityID_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils_TypeDefinitionIndex)->GetStaticField(0xA030);
		}
		static ::System::UInt32* StaticGet__ForceToTraceSubMissionID_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils_TypeDefinitionIndex)->GetStaticField(0xA034);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveAvatarPropertyType ConvertOrderToPropertyType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_CONVERTORDERTOPROPERTYTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* GetSoltDataByType(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1, ::RPG::GameCore::ILBattleCharacterLocation a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GETSOLTDATABYTYPE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IdleLiveAvatarPropertyType>* GetCanShowPropertyTypes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IdleLiveAvatarPropertyType>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GETCANSHOWPROPERTYTYPES_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ConvertSlotDatasToAvatarDict(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_CONVERTSLOTDATASTOAVATARDICT_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetChapterNumTextIDByNodeIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GETCHAPTERNUMTEXTIDBYNODEINDEX_OFFSET))(a1);
		}

		static ::System::String* FormatPercentWithOneDecimal(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::String*(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_FORMATPERCENTWITHONEDECIMAL_OFFSET))(a1);
		}

		static ::System::String* FormatPercentWithOneDecimal_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_FORMATPERCENTWITHONEDECIMAL_1_OFFSET))(a1);
		}

		static ::Class_1_16D78633781F25C4* CreateBattleStatInfo(::Class_1_3E6E1020B071C118* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
		{
			return ((::Class_1_16D78633781F25C4*(*)(::Class_1_3E6E1020B071C118*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_CREATEBATTLESTATINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsAvatarInTeam(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS__ISAVATARINTEAM_OFFSET))(a1, a2);
		}

		static ::System::UInt32 get_InitialMaxLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_INITIALMAXLEVEL_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* get_DungeonMultiplePlayerSettleRatioList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_DUNGEONMULTIPLEPLAYERSETTLERATIOLIST_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* get_TagLevelList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_TAGLEVELLIST_OFFSET))();
		}

		static ::System::UInt32 get_CrystalID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_CRYSTALID_OFFSET))();
		}

		static ::System::UInt32 get_GachaCrystalID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHACRYSTALID_OFFSET))();
		}

		static ::System::UInt32 get_ChestID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_CHESTID_OFFSET))();
		}

		static ::System::UInt32 get_GachaCostCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHACOSTCOUNT_OFFSET))();
		}

		static ::System::UInt32 get_GachaMaxCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHAMAXCOUNT_OFFSET))();
		}

		static ::System::UInt32 get_GachaRedotCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHAREDOTCOUNT_OFFSET))();
		}

		static ::System::String* get_TabIconMale()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_TABICONMALE_OFFSET))();
		}

		static ::System::String* get_TabIconFemale()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_TABICONFEMALE_OFFSET))();
		}

		static ::System::UInt32 get_GachaGuaranteeCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_GACHAGUARANTEECOUNT_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint get_InitialBasePower()
		{
			return ((::RPG::GameCore::FixPoint(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_INITIALBASEPOWER_OFFSET))();
		}

		static ::System::UInt32 get_TechPointID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_TECHPOINTID_OFFSET))();
		}

		static ::System::UInt32 get_InitialMaxFriendSoltCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_INITIALMAXFRIENDSOLTCOUNT_OFFSET))();
		}

		static ::System::UInt32 get_AssistRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_ASSISTREWARDID_OFFSET))();
		}

		static ::System::UInt32 get_DungeonRefreshTime()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_DUNGEONREFRESHTIME_OFFSET))();
		}

		static ::System::UInt32 get_PowerSignificantFigures()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_POWERSIGNIFICANTFIGURES_OFFSET))();
		}

		static ::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_ACTIVITYID_OFFSET))();
		}

		static ::System::Void set_ActivityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_SET_ACTIVITYID_OFFSET))(a1);
		}

		static ::System::UInt32 get_ForceToTraceSubMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_FORCETOTRACESUBMISSIONID_OFFSET))();
		}

		static ::System::Void set_ForceToTraceSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_SET_FORCETOTRACESUBMISSIONID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_NewRedDotExcludeAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_GET_NEWREDDOTEXCLUDEAVATARIDS_OFFSET))();
		}

		static ::System::Void set_NewRedDotExcludeAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS_SET_NEWREDDOTEXCLUDEAVATARIDS_OFFSET))(a1);
		}
	};
}
