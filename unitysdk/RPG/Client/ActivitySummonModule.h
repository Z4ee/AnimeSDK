#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1CBA230307F9C289_62;
class Class_1_D17272E82AE804C2_959;
class Class_1_E69ACE438A1D0786;
namespace RPG::Client { class ActivitySummonBattleResult; }
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSUMMONMODULE_ALLHARDSTAGECHALLENGED_OFFSET UNITYSDK_OFFSET(0xB2042F0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKACTIVITYSUMMONLEVELHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB201980)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0xB204230)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYID_OFFSET UNITYSDK_OFFSET(0xB201480)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xB2032A0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETALLSORTEDSTAGES_OFFSET UNITYSDK_OFFSET(0xB203380)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETCURRENTSTARS_OFFSET UNITYSDK_OFFSET(0xB201EF0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xB203C00)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xB2028B0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB202850)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0xB202800)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0xB2028D0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0xB2028F0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_HASANYNEWSTAGE_OFFSET UNITYSDK_OFFSET(0xB204030)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB202910)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_MARKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0xB204290)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_RESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0xB203B60)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0xB203D20)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xB202FD0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SETAUTOSHOWSTAGEID_OFFSET UNITYSDK_OFFSET(0xB203FD0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xB2028C0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0xB2028E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0xB202900)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_STARTSUMMONACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0xB203540)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB203EA0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYCONSUMEUNLOCKFLAG_OFFSET UNITYSDK_OFFSET(0xB2026C0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET UNITYSDK_OFFSET(0xB203410)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB202DA0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__CLEARBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB204BF0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB204EF0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONACTIVITYAVATAR_OFFSET UNITYSDK_OFFSET(0xB203660)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0xB203760)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__INITCONSTVALUES_OFFSET UNITYSDK_OFFSET(0xB202C00)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__INITSTAGES_OFFSET UNITYSDK_OFFSET(0xB2029B0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB204AE0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONENTERSUMMONACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xB204790)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONGETSUMMONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB204440)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONSUMMONACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB204880)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__PREPARERELATEDMISSIONS_OFFSET UNITYSDK_OFFSET(0xB2030A0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__SAVEBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB203960)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__STARTSUMMONBATTLE_OFFSET UNITYSDK_OFFSET(0xB203A10)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__UPDATESRVDATA_OFFSET UNITYSDK_OFFSET(0xB204910)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB205050)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB2050D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonModule_TypeDefinitionIndex = 57906;

	class ActivitySummonModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ActivitySummonBattleResult* _BattleResult; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>* _Stages; // 0x18
		::Class_1_E69ACE438A1D0786* _BattleInfo; // 0x20
		::System::String* _DifficultyLevelTutorialUnlockKey_k__BackingField; // 0x28
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty>>* _UnlockFlags; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _StarsCache; // 0x38
		::System::UInt32 _GuideMissionID_k__BackingField; // 0x40
		::System::Nullable_1<::System::UInt32> _AutoShowStageID; // 0x44
		::System::UInt32 _ActivityRewardID_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTSTAGEID_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySummonDifficulty get_CurrentDifficulty()
		{
			return ((::RPG::GameCore::ActivitySummonDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTDIFFICULTY_OFFSET))(this);
		}

		::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_ACTIVITYREWARDID_OFFSET))(this);
		}

		::System::Void set_ActivityRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_ACTIVITYREWARDID_OFFSET))(this, a1);
		}

		::System::String* get_DifficultyLevelTutorialUnlockKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET))(this);
		}

		::System::Void set_DifficultyLevelTutorialUnlockKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET))(this, a1);
		}

		::System::UInt32 get_GuideMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_GUIDEMISSIONID_OFFSET))(this);
		}

		::System::Void set_GuideMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_GUIDEMISSIONID_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::ActivitySummonStage* GetActivitySummonStageByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYID_OFFSET))(this, a1);
		}

		::RPG::Client::ActivitySummonStage* GetActivitySummonStageByMappingInfoID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYMAPPINGINFOID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>* GetAllSortedStages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETALLSORTEDSTAGES_OFFSET))(this);
		}

		::System::UInt32 GetCurrentStars(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETCURRENTSTARS_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryShowLevelResultDialog(::RPG::Client::LuaUIController*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LuaUIController*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET))(this, a1);
		}

		::System::Boolean CheckActivitySummonLevelHasUnlocked(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKACTIVITYSUMMONLEVELHASUNLOCKED_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryConsumeUnlockFlag(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYCONSUMEUNLOCKFLAG_OFFSET))(this, a1, a2);
		}

		::System::Void StartSummonActivityStage(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_STARTSUMMONACTIVITYSTAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_RESTARTBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupData(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETLINEUPDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SaveLineupData(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SAVELINEUPDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SETAUTOSHOWSTAGEID_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyNewStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_HASANYNEWSTAGE_OFFSET))(this);
		}

		::System::Boolean CheckRewardHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Void MarkRewardHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_MARKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Boolean AllHardStageChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_ALLHARDSTAGECHALLENGED_OFFSET))(this);
		}

		::System::Void _OnGetSummonActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONGETSUMMONACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterSummonActivityStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONENTERSUMMONACTIVITYSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSummonActivityBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONSUMMONACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _UpdateSrvData(::Class_1_D17272E82AE804C2_959* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_959*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__UPDATESRVDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_62*>* _GetSummonAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_62*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONAVATARLISTFROMIDLIST_OFFSET))(this, a1);
		}

		::Class_1_1CBA230307F9C289_62* _GetSummonActivityAvatar(::System::UInt32 a1)
		{
			return ((::Class_1_1CBA230307F9C289_62*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONACTIVITYAVATAR_OFFSET))(this, a1);
		}

		::System::Void _StartSummonBattle(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2, ::Class_1_1CBA230307F9C289_62* a3, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_62*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_1CBA230307F9C289_62*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_62*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__STARTSUMMONBATTLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SaveBattleInfo(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2, ::Class_1_1CBA230307F9C289_62* a3, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_62*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_1CBA230307F9C289_62*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_62*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__SAVEBATTLEINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ClearBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__CLEARBATTLEINFO_OFFSET))(this);
		}

		::System::Void _InitStages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__INITSTAGES_OFFSET))(this);
		}

		::System::Void _PrepareRelatedMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__PREPARERELATEDMISSIONS_OFFSET))(this);
		}

		::System::Void _InitConstValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__INITCONSTVALUES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
