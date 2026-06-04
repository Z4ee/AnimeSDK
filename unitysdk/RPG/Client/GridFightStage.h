#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightStageMonsterSelectType.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_768;
class Class_1_21C7581DFE99F091_42;
class Class_1_31B87651CEDF5B41;
class Class_1_963E317C37FB5E9A_28;
class Class_1_A5ECC5BBA0109924;
class Class_1_D17272E82AE804C2_403;
class Class_1_D17272E82AE804C2_424;
class Class_1_D40936EF3BF54118_42;
class Class_1_FB0633E85BD6CF8E_4;
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

#define RPG_CLIENT_GRIDFIGHTSTAGE_DISTANCE_OFFSET UNITYSDK_OFFSET(0xBC03850)
#define RPG_CLIENT_GRIDFIGHTSTAGE_EDITELITEBRANCH_OFFSET UNITYSDK_OFFSET(0xBC01110)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETALLDIFFADDLV_OFFSET UNITYSDK_OFFSET(0xBC00850)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETBASEDIFFADDLV_OFFSET UNITYSDK_OFFSET(0xBC00700)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETBOSSDATABYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xBC00EE0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCHAPTERPROGRESS_OFFSET UNITYSDK_OFFSET(0xBC036C0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTBOSSDATA_OFFSET UNITYSDK_OFFSET(0xBC00320)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTMONSTERDIFFADDLV_OFFSET UNITYSDK_OFFSET(0xBC006A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETFUNCTIONISUNLOCK_OFFSET UNITYSDK_OFFSET(0xBC02500)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_AFFIXDATALIST_OFFSET UNITYSDK_OFFSET(0xBC03D00)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CAMPDATALIST_OFFSET UNITYSDK_OFFSET(0xBC03F80)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERANDSECTIONID_OFFSET UNITYSDK_OFFSET(0xBC02BF0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xBC03530)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xBC02BB0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURCAMPID_OFFSET UNITYSDK_OFFSET(0xBC004E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURELITEBRANCHOPTIONPOS_OFFSET UNITYSDK_OFFSET(0xBC01300)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xBC00240)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xBC01270)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODECONFIGROW_OFFSET UNITYSDK_OFFSET(0xBC02AC0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODEINFO_OFFSET UNITYSDK_OFFSET(0xBC02E70)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODE_OFFSET UNITYSDK_OFFSET(0xBC02B30)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_DIFFICULTYMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xBC00C40)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ELITEBRANCHACTION_OFFSET UNITYSDK_OFFSET(0xBC01380)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBATTLENODE_OFFSET UNITYSDK_OFFSET(0xBC011D0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBOSSNODE_OFFSET UNITYSDK_OFFSET(0xBC02C40)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISDIFFDOWN_OFFSET UNITYSDK_OFFSET(0xBC013A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISELITEBRANCHHANDLED_OFFSET UNITYSDK_OFFSET(0xBC01100)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xBC035B0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTBATTENODE_OFFSET UNITYSDK_OFFSET(0xBC02E90)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTMONSTERNODE_OFFSET UNITYSDK_OFFSET(0xBC03060)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_MONSTERSELECTTYPE_OFFSET UNITYSDK_OFFSET(0xBC01320)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_NORMALMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xBC01340)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_POWERFULMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xBC01360)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xBC032D0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xBC02B90)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xBC02BD0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_SHOWHINT_OFFSET UNITYSDK_OFFSET(0xBC02DC0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_TOTALSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBC03230)
#define RPG_CLIENT_GRIDFIGHTSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0xBC01560)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ISAFFIXREMOVED_OFFSET UNITYSDK_OFFSET(0xBC03730)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xBC01770)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xBC01AE0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0xBC01940)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBC01CB0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xBC02BC0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURELITEBRANCHOPTIONPOS_OFFSET UNITYSDK_OFFSET(0xBC01310)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURNODEINFO_OFFSET UNITYSDK_OFFSET(0xBC02E80)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_ELITEBRANCHACTION_OFFSET UNITYSDK_OFFSET(0xBC01390)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_MONSTERSELECTTYPE_OFFSET UNITYSDK_OFFSET(0xBC01330)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_NORMALMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xBC01350)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_POWERFULMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xBC01370)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xBC02BA0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xBC02BE0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_1_OFFSET UNITYSDK_OFFSET(0xBC00640)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_OFFSET UNITYSDK_OFFSET(0xBC00590)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNC_OFFSET UNITYSDK_OFFSET(0xBC02010)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEAFFIX_OFFSET UNITYSDK_OFFSET(0xBC02120)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATENODE_OFFSET UNITYSDK_OFFSET(0xBC02310)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATESTT_OFFSET UNITYSDK_OFFSET(0xBC024A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC013C0)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xBC00250)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xBC010A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GET_DIFFICULTYMODIFYVALUE_B__42_0_OFFSET UNITYSDK_OFFSET(0xBC04200)
#define RPG_CLIENT_GRIDFIGHTSTAGE__REFRESHMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xBBFFF60)
#define RPG_CLIENT_GRIDFIGHTSTAGE__SYNCROUTEINFO_OFFSET UNITYSDK_OFFSET(0xBC020A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage_TypeDefinitionIndex = 61001;

	class GridFightStage : public ::Sofa::Core::ObservableObject
	{
	public:
		// static const ::System::UInt32 ELITE_BRANCH_OPTION_POS_LEFT = 0x1; // 0x0
		// static const ::System::UInt32 ELITE_BRANCH_OPTION_POS_RIGHT = 0x2; // 0x0
		::RPG::Client::GridFightEliteBranchSelectAction* _EliteBranchAction_k__BackingField; // 0x18
		::RPG::Client::GridFightStageRoute* Route; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* ModifiedSectionIDs; // 0x28
		::Class_1_A5ECC5BBA0109924* _CurNodeInfo_k__BackingField; // 0x30
		::RPG::Client::GridFightMonsterBattleStageData* _PowerfulMonsterStageData_k__BackingField; // 0x38
		::RPG::Client::GridFightMonsterBattleStageData* _NormalMonsterStageData_k__BackingField; // 0x40
		::Class_1_D40936EF3BF54118_42* _BossInfo; // 0x48
		::Class_1_FB0633E85BD6CF8E_4* _LevelInfo; // 0x50
		::System::UInt32 _SectionID_k__BackingField; // 0x58
		::RPG::Client::GridFightStageMonsterSelectType _MonsterSelectType_k__BackingField; // 0x5C
		::System::UInt32 _RouteID_k__BackingField; // 0x60
		::System::UInt32 _CurEliteBranchOptionPos_k__BackingField; // 0x64
		::System::UInt32 _ChapterID_k__BackingField; // 0x68

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

		::System::Void SyncEliteBranch(::Class_1_D17272E82AE804C2_424* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_424*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_OFFSET))(this, a1, a2);
		}

		::System::Void SyncEliteBranch_1(::Class_1_D17272E82AE804C2_403* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_403*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_1_OFFSET))(this, a1);
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

		::RPG::Client::GridFightMonsterData* GetBossDataByChapterID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETBOSSDATABYCHAPTERID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterStageData* _GetCurMonsterStageData(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Void EditEliteBranch(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_EDITELITEBRANCH_OFFSET))(this, a1);
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

		::System::Void set_CurEliteBranchOptionPos(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURELITEBRANCHOPTIONPOS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightStageMonsterSelectType get_MonsterSelectType()
		{
			return ((::RPG::Client::GridFightStageMonsterSelectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_MONSTERSELECTTYPE_OFFSET))(this);
		}

		::System::Void set_MonsterSelectType(::RPG::Client::GridFightStageMonsterSelectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightStageMonsterSelectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_MONSTERSELECTTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterBattleStageData* get_NormalMonsterStageData()
		{
			return ((::RPG::Client::GridFightMonsterBattleStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_NORMALMONSTERSTAGEDATA_OFFSET))(this);
		}

		::System::Void set_NormalMonsterStageData(::RPG::Client::GridFightMonsterBattleStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterBattleStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_NORMALMONSTERSTAGEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterBattleStageData* get_PowerfulMonsterStageData()
		{
			return ((::RPG::Client::GridFightMonsterBattleStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_POWERFULMONSTERSTAGEDATA_OFFSET))(this);
		}

		::System::Void set_PowerfulMonsterStageData(::RPG::Client::GridFightMonsterBattleStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterBattleStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_POWERFULMONSTERSTAGEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEliteBranchSelectAction* get_EliteBranchAction()
		{
			return ((::RPG::Client::GridFightEliteBranchSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ELITEBRANCHACTION_OFFSET))(this);
		}

		::System::Void set_EliteBranchAction(::RPG::Client::GridFightEliteBranchSelectAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEliteBranchSelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_ELITEBRANCHACTION_OFFSET))(this, a1);
		}

		::System::Int32 get_DifficultyModifyValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_DIFFICULTYMODIFYVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsDiffDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISDIFFDOWN_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_INIT_OFFSET))(this, a1);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void OnModifierUpdate(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_FB0633E85BD6CF8E_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateAffix(::Class_1_21C7581DFE99F091_42* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEAFFIX_OFFSET))(this, a1);
		}

		::System::Void UpdateNode(::Class_1_963E317C37FB5E9A_28* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATENODE_OFFSET))(this, a1);
		}

		::System::Void UpdateStt(::Class_1_31B87651CEDF5B41* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_31B87651CEDF5B41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATESTT_OFFSET))(this, a1);
		}

		::System::Boolean GetFunctionIsUnlock(::RPG::GameCore::GridFightFunctionNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightFunctionNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETFUNCTIONISUNLOCK_OFFSET))(this, a1);
		}

		::System::Void _SyncRouteInfo(::Class_1_FB0633E85BD6CF8E_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__SYNCROUTEINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightStageRouteConfigRow* get_CurNodeConfigRow()
		{
			return ((::RPG::GameCore::GridFightStageRouteConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODECONFIGROW_OFFSET))(this);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERID_OFFSET))(this);
		}

		::System::Void set_ChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CHAPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_SECTIONID_OFFSET))(this, a1);
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

		::System::Void set_CurNodeInfo(::Class_1_A5ECC5BBA0109924* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5ECC5BBA0109924*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURNODEINFO_OFFSET))(this, a1);
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

		::System::Single GetChapterProgress(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETCHAPTERPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean IsAffixRemoved(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ISAFFIXREMOVED_OFFSET))(this, a1);
		}

		::System::UInt32 Distance(::RPG::Client::GridFightStageNode* a1, ::RPG::Client::GridFightStageNode* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightStageNode*, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_DISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>* get_AffixDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_AFFIXDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterCampConfig*>* get_CampDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterCampConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CAMPDATALIST_OFFSET))(this);
		}

		::System::Boolean _get_DifficultyModifyValue_b__42_0(::Class_2_FD0167EB507B9435_2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_FD0167EB507B9435_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__GET_DIFFICULTYMODIFYVALUE_B__42_0_OFFSET))(this, a1);
		}
	};
}
