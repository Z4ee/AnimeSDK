#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightStageMonsterSelectType.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_717;
class Class_1_21C7581DFE99F091_39;
class Class_1_31B87651CEDF5B41;
class Class_1_A5ECC5BBA0109924;
class Class_1_C4B679728AD83B32_8;
class Class_1_D17272E82AE804C2_390;
class Class_1_D17272E82AE804C2_411;
class Class_1_D40936EF3BF54118_39;
class Class_1_D7F3D169C3137F53_1;
class Class_2_FD0167EB507B9435_2;
namespace RPG::Client { class GridFightEliteBranchSelectAction; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterBattleStageData; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightMonsterStageData; }
namespace RPG::Client { class GridFightStageNode; }
namespace RPG::Client { class GridFightStageRoute; }
namespace RPG::Client { class IGridFightStageNode; }
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSTAGE_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA595E20)
#define RPG_CLIENT_GRIDFIGHTSTAGE_EDITELITEBRANCH_OFFSET UNITYSDK_OFFSET(0xA592950)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETALLDIFFADDLV_OFFSET UNITYSDK_OFFSET(0xA592160)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETBASEDIFFADDLV_OFFSET UNITYSDK_OFFSET(0xA592010)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETBOSSDATABYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA592770)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCHAPTERPROGRESS_OFFSET UNITYSDK_OFFSET(0xA595CA0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTBOSSDATA_OFFSET UNITYSDK_OFFSET(0xA591CD0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTMONSTERDIFFADDLV_OFFSET UNITYSDK_OFFSET(0xA591FB0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETFUNCTIONISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA593C10)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_AFFIXDATALIST_OFFSET UNITYSDK_OFFSET(0xA596350)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CAMPDATALIST_OFFSET UNITYSDK_OFFSET(0xA596590)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERANDSECTIONID_OFFSET UNITYSDK_OFFSET(0xA595010)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA595AA0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xA594FD0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURCAMPID_OFFSET UNITYSDK_OFFSET(0xA591E30)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURELITEBRANCHOPTIONPOS_OFFSET UNITYSDK_OFFSET(0xA592B40)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xA591BF0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xA592AB0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODECONFIGROW_OFFSET UNITYSDK_OFFSET(0xA594EE0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODEINFO_OFFSET UNITYSDK_OFFSET(0xA595290)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODE_OFFSET UNITYSDK_OFFSET(0xA594F50)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_DIFFICULTYMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xA592510)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ELITEBRANCHACTION_OFFSET UNITYSDK_OFFSET(0xA592BC0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBATTLENODE_OFFSET UNITYSDK_OFFSET(0xA592A10)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBOSSNODE_OFFSET UNITYSDK_OFFSET(0xA595060)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISDIFFDOWN_OFFSET UNITYSDK_OFFSET(0xA592BE0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISELITEBRANCHHANDLED_OFFSET UNITYSDK_OFFSET(0xA592940)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xA595B90)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTBATTENODE_OFFSET UNITYSDK_OFFSET(0xA595430)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTMONSTERNODE_OFFSET UNITYSDK_OFFSET(0xA595630)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_MONSTERSELECTTYPE_OFFSET UNITYSDK_OFFSET(0xA592B60)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_NORMALMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xA592B80)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_POWERFULMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xA592BA0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA595870)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xA594FB0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xA594FF0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_SHOWHINT_OFFSET UNITYSDK_OFFSET(0xA5951E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_TOTALSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA5957D0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0xA592E40)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ISAFFIXREMOVED_OFFSET UNITYSDK_OFFSET(0xA595D10)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xA593010)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xA593300)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0xA593190)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA593480)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xA594FE0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURELITEBRANCHOPTIONPOS_OFFSET UNITYSDK_OFFSET(0xA592B50)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURNODEINFO_OFFSET UNITYSDK_OFFSET(0xA5952A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_ELITEBRANCHACTION_OFFSET UNITYSDK_OFFSET(0xA592BD0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_MONSTERSELECTTYPE_OFFSET UNITYSDK_OFFSET(0xA592B70)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_NORMALMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xA592B90)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_POWERFULMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xA592BB0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xA594FC0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xA595000)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_1_OFFSET UNITYSDK_OFFSET(0xA591F50)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_OFFSET UNITYSDK_OFFSET(0xA591EE0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNC_OFFSET UNITYSDK_OFFSET(0xA593620)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEAFFIX_OFFSET UNITYSDK_OFFSET(0xA593720)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATENODE_OFFSET UNITYSDK_OFFSET(0xA5938F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATESTT_OFFSET UNITYSDK_OFFSET(0xA593B20)
#define RPG_CLIENT_GRIDFIGHTSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA592C00)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xA591C00)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xA5928E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GET_DIFFICULTYMODIFYVALUE_B__42_0_OFFSET UNITYSDK_OFFSET(0xA5967D0)
#define RPG_CLIENT_GRIDFIGHTSTAGE__REFRESHMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xA591940)
#define RPG_CLIENT_GRIDFIGHTSTAGE__SYNCROUTEINFO_OFFSET UNITYSDK_OFFSET(0xA5936A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage_TypeDefinitionIndex = 60066;

	class GridFightStage : public ::Sofa::Core::ObservableObject
	{
	public:
		// static const ::System::UInt32 ELITE_BRANCH_OPTION_POS_LEFT = 0x1; // 0x0
		// static const ::System::UInt32 ELITE_BRANCH_OPTION_POS_RIGHT = 0x2; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* ModifiedSectionIDs; // 0x18
		::Class_1_D7F3D169C3137F53_1* _LevelInfo; // 0x20
		::RPG::Client::GridFightEliteBranchSelectAction* _EliteBranchAction_k__BackingField; // 0x28
		::RPG::Client::GridFightMonsterBattleStageData* _NormalMonsterStageData_k__BackingField; // 0x30
		::RPG::Client::GridFightMonsterBattleStageData* _PowerfulMonsterStageData_k__BackingField; // 0x38
		::Class_1_D40936EF3BF54118_39* _BossInfo; // 0x40
		::Class_1_A5ECC5BBA0109924* _CurNodeInfo_k__BackingField; // 0x48
		::RPG::Client::GridFightStageRoute* Route; // 0x50
		::System::UInt32 _ChapterID_k__BackingField; // 0x58
		::System::UInt32 _CurEliteBranchOptionPos_k__BackingField; // 0x5C
		::System::UInt32 _RouteID_k__BackingField; // 0x60
		::RPG::Client::GridFightStageMonsterSelectType _MonsterSelectType_k__BackingField; // 0x64
		::System::UInt32 _SectionID_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMonsterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__REFRESHMONSTERDATA_OFFSET))(this);
		}

		::System::UInt32 _GetCurMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERLEVEL_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterData* GetCurrentBossData()
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTBOSSDATA_OFFSET))(this);
		}

		::System::Void SyncEliteBranch(::Class_1_D17272E82AE804C2_411* info, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_411*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_OFFSET))(this, info, actionID);
		}

		::System::Void SyncEliteBranch_1(::Class_1_D17272E82AE804C2_390* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_390*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_1_OFFSET))(this, info);
		}

		::System::UInt32 GetCurrentMonsterDiffAddLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTMONSTERDIFFADDLV_OFFSET))(this);
		}

		::System::Int32 GetAllDiffAddLv()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETALLDIFFADDLV_OFFSET))(this);
		}

		::System::UInt32 GetBaseDiffAddLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETBASEDIFFADDLV_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterData* GetBossDataByChapterID(::System::UInt32 chapterID)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETBOSSDATABYCHAPTERID_OFFSET))(this, chapterID);
		}

		::RPG::Client::GridFightMonsterStageData* _GetCurMonsterStageData(::System::UInt32 optionPos)
		{
			return ((::RPG::Client::GridFightMonsterStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERSTAGEDATA_OFFSET))(this, optionPos);
		}

		::System::Void EditEliteBranch(::System::UInt32 optionPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_EDITELITEBRANCH_OFFSET))(this, optionPos);
		}

		::System::Boolean get_IsBattleNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBATTLENODE_OFFSET))(this);
		}

		::System::UInt32 get_CurMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERLEVEL_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterStageData* get_CurMonsterStageData()
		{
			return ((::RPG::Client::GridFightMonsterStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERSTAGEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsEliteBranchHandled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISELITEBRANCHHANDLED_OFFSET))(this);
		}

		::System::UInt32 get_CurEliteBranchOptionPos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURELITEBRANCHOPTIONPOS_OFFSET))(this);
		}

		::System::Void set_CurEliteBranchOptionPos(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURELITEBRANCHOPTIONPOS_OFFSET))(this, value);
		}

		::RPG::Client::GridFightStageMonsterSelectType get_MonsterSelectType()
		{
			return ((::RPG::Client::GridFightStageMonsterSelectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_MONSTERSELECTTYPE_OFFSET))(this);
		}

		::System::Void set_MonsterSelectType(::RPG::Client::GridFightStageMonsterSelectType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightStageMonsterSelectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_MONSTERSELECTTYPE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightMonsterBattleStageData* get_NormalMonsterStageData()
		{
			return ((::RPG::Client::GridFightMonsterBattleStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_NORMALMONSTERSTAGEDATA_OFFSET))(this);
		}

		::System::Void set_NormalMonsterStageData(::RPG::Client::GridFightMonsterBattleStageData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterBattleStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_NORMALMONSTERSTAGEDATA_OFFSET))(this, value);
		}

		::RPG::Client::GridFightMonsterBattleStageData* get_PowerfulMonsterStageData()
		{
			return ((::RPG::Client::GridFightMonsterBattleStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_POWERFULMONSTERSTAGEDATA_OFFSET))(this);
		}

		::System::Void set_PowerfulMonsterStageData(::RPG::Client::GridFightMonsterBattleStageData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterBattleStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_POWERFULMONSTERSTAGEDATA_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEliteBranchSelectAction* get_EliteBranchAction()
		{
			return ((::RPG::Client::GridFightEliteBranchSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ELITEBRANCHACTION_OFFSET))(this);
		}

		::System::Void set_EliteBranchAction(::RPG::Client::GridFightEliteBranchSelectAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEliteBranchSelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_ELITEBRANCHACTION_OFFSET))(this, value);
		}

		::System::Int32 get_DifficultyModifyValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_DIFFICULTYMODIFYVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsDiffDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISDIFFDOWN_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::GridFightModifierInfo* gameModifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_INIT_OFFSET))(this, gameModifier);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERADD_OFFSET))(this, modifier);
		}

		::System::Void OnModifierUpdate(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERUPDATE_OFFSET))(this, modifier);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERREMOVE_OFFSET))(this, modifier);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Sync(::Class_1_D7F3D169C3137F53_1* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNC_OFFSET))(this, levelInfo);
		}

		::System::Void UpdateAffix(::Class_1_21C7581DFE99F091_39* affixInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEAFFIX_OFFSET))(this, affixInfo);
		}

		::System::Void UpdateNode(::Class_1_C4B679728AD83B32_8* stageUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4B679728AD83B32_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATENODE_OFFSET))(this, stageUpdate);
		}

		::System::Void UpdateStt(::Class_1_31B87651CEDF5B41* sttInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_31B87651CEDF5B41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATESTT_OFFSET))(this, sttInfo);
		}

		::System::Boolean GetFunctionIsUnlock(::RPG::GameCore::GridFightFunctionNodeType functionType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightFunctionNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETFUNCTIONISUNLOCK_OFFSET))(this, functionType);
		}

		::System::Void _SyncRouteInfo(::Class_1_D7F3D169C3137F53_1* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__SYNCROUTEINFO_OFFSET))(this, levelInfo);
		}

		::RPG::GameCore::GridFightStageRouteConfigRow* get_CurNodeConfigRow()
		{
			return ((::RPG::GameCore::GridFightStageRouteConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODECONFIGROW_OFFSET))(this);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_ROUTEID_OFFSET))(this, value);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERID_OFFSET))(this);
		}

		::System::Void set_ChapterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CHAPTERID_OFFSET))(this, value);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_SECTIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_ChapterAndSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERANDSECTIONID_OFFSET))(this);
		}

		::System::Boolean get_IsBossNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBOSSNODE_OFFSET))(this);
		}

		::System::Boolean get_ShowHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_SHOWHINT_OFFSET))(this);
		}

		::Class_1_A5ECC5BBA0109924* get_CurNodeInfo()
		{
			return ((::Class_1_A5ECC5BBA0109924*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODEINFO_OFFSET))(this);
		}

		::System::Void set_CurNodeInfo(::Class_1_A5ECC5BBA0109924* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5ECC5BBA0109924*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURNODEINFO_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::UInt32> get_CurCampID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURCAMPID_OFFSET))(this);
		}

		::RPG::Client::GridFightStageNode* get_CurNode()
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODE_OFFSET))(this);
		}

		::RPG::Client::IGridFightStageNode* get_LatestBatteNode()
		{
			return ((::RPG::Client::IGridFightStageNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTBATTENODE_OFFSET))(this);
		}

		::RPG::Client::IGridFightStageNode* get_LatestMonsterNode()
		{
			return ((::RPG::Client::IGridFightStageNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTMONSTERNODE_OFFSET))(this);
		}

		::System::Int32 get_TotalSectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_TOTALSECTIONCOUNT_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 get_ChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsTutorialNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISTUTORIALNODE_OFFSET))(this);
		}

		::System::Single GetChapterProgress(::System::Int32 chapterID)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETCHAPTERPROGRESS_OFFSET))(this, chapterID);
		}

		::System::Boolean IsAffixRemoved(::System::UInt32 affixID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ISAFFIXREMOVED_OFFSET))(this, affixID);
		}

		::System::UInt32 Distance(::RPG::Client::GridFightStageNode* node1, ::RPG::Client::GridFightStageNode* node2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightStageNode*, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_DISTANCE_OFFSET))(this, node1, node2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>* get_AffixDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_AFFIXDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterCampConfig*>* get_CampDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterCampConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CAMPDATALIST_OFFSET))(this);
		}

		::System::Boolean _get_DifficultyModifyValue_b__42_0(::Class_2_FD0167EB507B9435_2* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_FD0167EB507B9435_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__GET_DIFFICULTYMODIFYVALUE_B__42_0_OFFSET))(this, x);
		}
	};
}
