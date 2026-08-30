#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/DropRateType.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1246;
class Class_1_C055D64A15D9D59C;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBossData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }
namespace RPG::GameCore { class IdleLiveNodeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETALLREWARDSDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1C0FB7C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETCURSUBNODEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C0FB670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETDROPRATE_OFFSET UNITYSDK_OFFSET(0x1C0FBA00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETMAXSUBNODEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C0FB770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETNODEICON_OFFSET UNITYSDK_OFFSET(0x1C0FB230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETRANKTEXTID_OFFSET UNITYSDK_OFFSET(0x1C0FBBA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C0FB580)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1C0FA930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0x1C0FA9D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CANTRIGGERAMPHOREUSBUFF_OFFSET UNITYSDK_OFFSET(0x1C0FAA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x1C0FA890)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHATPHASE_OFFSET UNITYSDK_OFFSET(0x1C0FA8F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHESTDROPRATE_OFFSET UNITYSDK_OFFSET(0x1C0FA900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CRYSTALDROPRATE_OFFSET UNITYSDK_OFFSET(0x1C0FA920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_DISPLAYREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1C0FA9F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_EMOJIPHASEID_OFFSET UNITYSDK_OFFSET(0x1C0FA9B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C0FA8B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISAUTONEXTNODE_OFFSET UNITYSDK_OFFSET(0x1C0FA980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C0FA8D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_LIVEROOMEXPGAINONFINISHED_OFFSET UNITYSDK_OFFSET(0x1C0FA9C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_OWNERCHAPTER_OFFSET UNITYSDK_OFFSET(0x1C0FA850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDCRYSTALNUM_OFFSET UNITYSDK_OFFSET(0x1C0E13E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDDUNGEONFLOOR_OFFSET UNITYSDK_OFFSET(0x1C0E1440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUBNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1C0E9830)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0x1C0FA950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TICKETDROPRATE_OFFSET UNITYSDK_OFFSET(0x1C0FA910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPETITLE_OFFSET UNITYSDK_OFFSET(0x1C0FA990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C0E97F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASBATTLE_OFFSET UNITYSDK_OFFSET(0x1C0FB380)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASDROPRATEINCREASE_OFFSET UNITYSDK_OFFSET(0x1C0FBA70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISATLASTSUBNODE_OFFSET UNITYSDK_OFFSET(0x1C0FB5D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISBOSSNODE_OFFSET UNITYSDK_OFFSET(0x1C0EC4B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISEVENTNODE_OFFSET UNITYSDK_OFFSET(0x1C0FB3D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISSHOWBOSSSUCCHINT_OFFSET UNITYSDK_OFFSET(0x1C0FB420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1C0FA940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0x1C0FA9E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x1C0FA8A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_DISPLAYREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1C0FAA00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C0FA8C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C0FA8E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0x1C0FA970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_TYPETITLE_OFFSET UNITYSDK_OFFSET(0x1C0FA9A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATECURSUBNODE_OFFSET UNITYSDK_OFFSET(0x1C0FB4F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATEDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x1C0FB470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FAA20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__GETCURSUBNODEPROGRESS_B__89_0_OFFSET UNITYSDK_OFFSET(0x1C0FBD80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITCURSUBNODE_OFFSET UNITYSDK_OFFSET(0x1C0FB0D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITSUBNODES_OFFSET UNITYSDK_OFFSET(0x1C0FACC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1C0FAC30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__TRYINITBOSSDATA_OFFSET UNITYSDK_OFFSET(0x1C0FB150)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveNode_TypeDefinitionIndex = 74849;

	class IdleLiveNode : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveBossData* _BossData_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _OwnerChapter; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _SuggestPower_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _PossibleEventIDs; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _DisplayRewardItems_k__BackingField; // 0x40
		::Class_1_C055D64A15D9D59C* _CurSubNode; // 0x48
		::Class_0_16E4307DCC419505_1246* _NodeIconProvider; // 0x50
		::System::Collections::Generic::List_1<::Class_1_C055D64A15D9D59C*>* _SubNodes; // 0x58
		::System::String* _BGMState_k__BackingField; // 0x60
		::System::Boolean _IsFinished_k__BackingField; // 0x68
		::System::Boolean _CanTriggerAmphoreusBuff_k__BackingField; // 0x69
		::System::Boolean _IsAutoNextNode_k__BackingField; // 0x6A
		::System::UInt32 _ChapterIndex_k__BackingField; // 0x6C
		::System::UInt32 _IdleIncome; // 0x70
		::System::UInt32 _EmojiPhaseId_k__BackingField; // 0x74
		::RPG::GameCore::IdleLiveNodeType _Type; // 0x78
		::System::UInt32 _ChatPhase_k__BackingField; // 0x7C
		::System::UInt32 _TicketDropRate_k__BackingField; // 0x80
		::System::UInt32 _CrystalDropRate_k__BackingField; // 0x84
		::System::UInt32 _LiveRoomExpGainOnFinished_k__BackingField; // 0x88
		::RPG::Client::TextID _TypeTitle_k__BackingField; // 0x90
		::System::UInt32 _Index_k__BackingField; // 0xA0
		::System::UInt32 _ChestDropRate_k__BackingField; // 0xA4
		::RPG::GameCore::FixPoint _RankSTimeLimit; // 0xA8
		::RPG::GameCore::FixPoint _RankATimeLimit; // 0xB0

		::System::Void _ctor(::RPG::GameCore::IdleLiveNodeRow* a1, ::Class_0_16E4307DCC419505_1246* a2, ::RPG::Client::ActivityIdleLive::IdleLiveChapter* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeRow*, ::Class_0_16E4307DCC419505_1246*, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::IdleLiveNodeType get_Type()
		{
			return ((::RPG::GameCore::IdleLiveNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* get_OwnerChapter()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_OWNERCHAPTER_OFFSET))(this);
		}

		::System::UInt32 get_ChapterIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHAPTERINDEX_OFFSET))(this);
		}

		::System::Void set_ChapterIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_CHAPTERINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_INDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubNodeIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUBNODEINDEX_OFFSET))(this);
		}

		::System::UInt64 get_RecommendCrystalNum()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDCRYSTALNUM_OFFSET))(this);
		}

		::System::UInt16 get_RecommendDungeonFloor()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDDUNGEONFLOOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChatPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHATPHASE_OFFSET))(this);
		}

		::System::UInt32 get_ChestDropRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHESTDROPRATE_OFFSET))(this);
		}

		::System::UInt32 get_TicketDropRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TICKETDROPRATE_OFFSET))(this);
		}

		::System::UInt32 get_CrystalDropRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CRYSTALDROPRATE_OFFSET))(this);
		}

		::System::String* get_BGMState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void set_BGMState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BGMSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_SuggestPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUGGESTPOWER_OFFSET))(this);
		}

		::System::Void set_SuggestPower(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_SUGGESTPOWER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAutoNextNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISAUTONEXTNODE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPETITLE_OFFSET))(this);
		}

		::System::Void set_TypeTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_TYPETITLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EmojiPhaseId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_EMOJIPHASEID_OFFSET))(this);
		}

		::System::UInt32 get_LiveRoomExpGainOnFinished()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_LIVEROOMEXPGAINONFINISHED_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBossData* get_BossData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBossData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BOSSDATA_OFFSET))(this);
		}

		::System::Void set_BossData(::RPG::Client::ActivityIdleLive::IdleLiveBossData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BOSSDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_DisplayRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_DISPLAYREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_DisplayRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_DISPLAYREWARDITEMS_OFFSET))(this, a1);
		}

		::System::Boolean get_CanTriggerAmphoreusBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CANTRIGGERAMPHOREUSBUFF_OFFSET))(this);
		}

		::System::Void _InitTypeData(::RPG::GameCore::IdleLiveNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITTYPEDATA_OFFSET))(this, a1);
		}

		::System::Void _InitSubNodes(::RPG::GameCore::IdleLiveNodeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITSUBNODES_OFFSET))(this, a1);
		}

		::System::Void _InitCurSubNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITCURSUBNODE_OFFSET))(this);
		}

		::System::Void _TryInitBossData(::RPG::GameCore::IdleLiveNodeType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__TRYINITBOSSDATA_OFFSET))(this, a1, a2);
		}

		::System::String* GetNodeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETNODEICON_OFFSET))(this);
		}

		::System::Boolean HasBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASBATTLE_OFFSET))(this);
		}

		::System::Boolean IsEventNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISEVENTNODE_OFFSET))(this);
		}

		::System::Boolean IsShowBossSuccHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISSHOWBOSSSUCCHINT_OFFSET))(this);
		}

		::System::Boolean IsBossNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISBOSSNODE_OFFSET))(this);
		}

		::System::Void UpdateDisplayRewards(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATEDISPLAYREWARDS_OFFSET))(this, a1);
		}

		::System::Void UpdateCurSubNode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATECURSUBNODE_OFFSET))(this, a1);
		}

		::System::UInt32 GetStageId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETSTAGEID_OFFSET))(this);
		}

		::System::Boolean IsAtLastSubNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISATLASTSUBNODE_OFFSET))(this);
		}

		::System::Int32 GetCurSubNodeProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETCURSUBNODEPROGRESS_OFFSET))(this);
		}

		::System::Int32 GetMaxSubNodeProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETMAXSUBNODEPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetAllRewardsDisplayData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETALLREWARDSDISPLAYDATA_OFFSET))(this);
		}

		::System::UInt32 GetDropRate(::RPG::Client::ActivityIdleLive::DropRateType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::DropRateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETDROPRATE_OFFSET))(this, a1);
		}

		::System::Boolean HasDropRateIncrease(::RPG::Client::ActivityIdleLive::DropRateType a1, ::RPG::Client::ActivityIdleLive::IdleLiveNode* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::DropRateType, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASDROPRATEINCREASE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID GetRankTextID(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETRANKTEXTID_OFFSET))(this, a1);
		}

		::System::Boolean _GetCurSubNodeProgress_b__89_0(::Class_1_C055D64A15D9D59C* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_C055D64A15D9D59C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__GETCURSUBNODEPROGRESS_B__89_0_OFFSET))(this, a1);
		}
	};
}
