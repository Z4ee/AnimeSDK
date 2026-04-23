#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/DropRateType.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1090;
class Class_1_55C18193DF76660E;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBossData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }
namespace RPG::GameCore { class IdleLiveNodeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETALLREWARDSDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9B6CDD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETCURSUBNODEPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B6CC90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETDROPRATE_OFFSET UNITYSDK_OFFSET(0x9B6D000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETMAXSUBNODEPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B6CD80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETNODEICON_OFFSET UNITYSDK_OFFSET(0x9B6C880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETRANKTEXTID_OFFSET UNITYSDK_OFFSET(0x9B6D1A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETSTAGEID_OFFSET UNITYSDK_OFFSET(0x9B6CB90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x9B6BE70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0x9B6BF10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CANTRIGGERAMPHOREUSBUFF_OFFSET UNITYSDK_OFFSET(0x9B6BF50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x9B6BDD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHATPHASE_OFFSET UNITYSDK_OFFSET(0x9B6BE30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHESTDROPRATE_OFFSET UNITYSDK_OFFSET(0x9B6BE40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CRYSTALDROPRATE_OFFSET UNITYSDK_OFFSET(0x9B6BE60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_DISPLAYREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9B6BF30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_EMOJIPHASEID_OFFSET UNITYSDK_OFFSET(0x9B6BEF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9B6BDF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISAUTONEXTNODE_OFFSET UNITYSDK_OFFSET(0x9B6BEC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9B6BE10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_LIVEROOMEXPGAINONFINISHED_OFFSET UNITYSDK_OFFSET(0x9B6BF00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_OWNERCHAPTER_OFFSET UNITYSDK_OFFSET(0x9B6BDC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDCRYSTALNUM_OFFSET UNITYSDK_OFFSET(0x9B54EE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDDUNGEONFLOOR_OFFSET UNITYSDK_OFFSET(0x9B54F40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUBNODEINDEX_OFFSET UNITYSDK_OFFSET(0x9B5C6A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0x9B6BE90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TICKETDROPRATE_OFFSET UNITYSDK_OFFSET(0x9B6BE50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPETITLE_OFFSET UNITYSDK_OFFSET(0x9B6BED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B6BDB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASBATTLE_OFFSET UNITYSDK_OFFSET(0x9B6C980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASDROPRATEINCREASE_OFFSET UNITYSDK_OFFSET(0x9B6D070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISATLASTSUBNODE_OFFSET UNITYSDK_OFFSET(0x9B6CBE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISBOSSNODE_OFFSET UNITYSDK_OFFSET(0x9B5EE80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISEVENTNODE_OFFSET UNITYSDK_OFFSET(0x9B6C9D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISSHOWBOSSSUCCHINT_OFFSET UNITYSDK_OFFSET(0x9B6CA20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x9B6BE80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0x9B6BF20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x9B6BDE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_DISPLAYREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9B6BF40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9B6BE00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9B6BE20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0x9B6BEB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_TYPETITLE_OFFSET UNITYSDK_OFFSET(0x9B6BEE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATECURSUBNODE_OFFSET UNITYSDK_OFFSET(0x9B6CAF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATEDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x9B6CA70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6BF60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__GETCURSUBNODEPROGRESS_B__89_0_OFFSET UNITYSDK_OFFSET(0x9B6D280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITCURSUBNODE_OFFSET UNITYSDK_OFFSET(0x9B6C720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITSUBNODES_OFFSET UNITYSDK_OFFSET(0x9B6C360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITTYPEDATA_OFFSET UNITYSDK_OFFSET(0x9B6C2D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__TRYINITBOSSDATA_OFFSET UNITYSDK_OFFSET(0x9B6C7A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveNode_TypeDefinitionIndex = 69208;

	class IdleLiveNode : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _OwnerChapter; // 0x10
		::System::Collections::Generic::List_1<::Class_1_55C18193DF76660E*>* _SubNodes; // 0x18
		::Class_1_55C18193DF76660E* _CurSubNode; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _SuggestPower_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_1090* _NodeIconProvider; // 0x40
		::System::String* _BGMState_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _PossibleEventIDs; // 0x50
		::RPG::Client::ActivityIdleLive::IdleLiveBossData* _BossData_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _DisplayRewardItems_k__BackingField; // 0x60
		::System::UInt32 _EmojiPhaseId_k__BackingField; // 0x68
		::System::UInt32 _ChatPhase_k__BackingField; // 0x6C
		::System::UInt32 _TicketDropRate_k__BackingField; // 0x70
		::System::Boolean _IsAutoNextNode_k__BackingField; // 0x74
		::System::Boolean _CanTriggerAmphoreusBuff_k__BackingField; // 0x75
		::System::Boolean _IsFinished_k__BackingField; // 0x76
		::RPG::GameCore::FixPoint _RankSTimeLimit; // 0x78
		::RPG::GameCore::FixPoint _RankATimeLimit; // 0x80
		::RPG::GameCore::IdleLiveNodeType _Type; // 0x88
		::System::UInt32 _IdleIncome; // 0x8C
		::System::UInt32 _Index_k__BackingField; // 0x90
		::System::UInt32 _ChapterIndex_k__BackingField; // 0x94
		::System::UInt32 _ChestDropRate_k__BackingField; // 0x98
		::RPG::Client::TextID _TypeTitle_k__BackingField; // 0xA0
		::System::UInt32 _CrystalDropRate_k__BackingField; // 0xB0
		::System::UInt32 _LiveRoomExpGainOnFinished_k__BackingField; // 0xB4

		::System::Void _ctor(::RPG::GameCore::IdleLiveNodeRow* row, ::Class_0_16E4307DCC419505_1090* nodeIconProvider, ::RPG::Client::ActivityIdleLive::IdleLiveChapter* ownerChapter)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeRow*, ::Class_0_16E4307DCC419505_1090*, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__CTOR_OFFSET))(this, row, nodeIconProvider, ownerChapter);
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

		::System::Void set_ChapterIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_CHAPTERINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_INDEX_OFFSET))(this, value);
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

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_ISFINISHED_OFFSET))(this, value);
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

		::System::Void set_BGMState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BGMSTATE_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_SuggestPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUGGESTPOWER_OFFSET))(this);
		}

		::System::Void set_SuggestPower(::RPG::Client::ActivityIdleLive::IdleLiveDecimal value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_SUGGESTPOWER_OFFSET))(this, value);
		}

		::System::Boolean get_IsAutoNextNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISAUTONEXTNODE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPETITLE_OFFSET))(this);
		}

		::System::Void set_TypeTitle(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_TYPETITLE_OFFSET))(this, value);
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

		::System::Void set_BossData(::RPG::Client::ActivityIdleLive::IdleLiveBossData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BOSSDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_DisplayRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_DISPLAYREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_DisplayRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_DISPLAYREWARDITEMS_OFFSET))(this, value);
		}

		::System::Boolean get_CanTriggerAmphoreusBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CANTRIGGERAMPHOREUSBUFF_OFFSET))(this);
		}

		::System::Void _InitTypeData(::RPG::GameCore::IdleLiveNodeType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITTYPEDATA_OFFSET))(this, type);
		}

		::System::Void _InitSubNodes(::RPG::GameCore::IdleLiveNodeRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITSUBNODES_OFFSET))(this, row);
		}

		::System::Void _InitCurSubNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITCURSUBNODE_OFFSET))(this);
		}

		::System::Void _TryInitBossData(::RPG::GameCore::IdleLiveNodeType nodeType, ::System::UInt32 bossId)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__TRYINITBOSSDATA_OFFSET))(this, nodeType, bossId);
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

		::System::Void UpdateDisplayRewards(::Proto::ItemList* rewards)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATEDISPLAYREWARDS_OFFSET))(this, rewards);
		}

		::System::Void UpdateCurSubNode(::System::UInt32 oneBasedSubNodeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATECURSUBNODE_OFFSET))(this, oneBasedSubNodeIndex);
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

		::System::UInt32 GetDropRate(::RPG::Client::ActivityIdleLive::DropRateType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::DropRateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETDROPRATE_OFFSET))(this, type);
		}

		::System::Boolean HasDropRateIncrease(::RPG::Client::ActivityIdleLive::DropRateType type, ::RPG::Client::ActivityIdleLive::IdleLiveNode* prevNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::DropRateType, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASDROPRATEINCREASE_OFFSET))(this, type, prevNode);
		}

		::RPG::Client::TextID GetRankTextID(::RPG::GameCore::FixPoint time)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETRANKTEXTID_OFFSET))(this, time);
		}

		::System::Boolean _GetCurSubNodeProgress_b__89_0(::Class_1_55C18193DF76660E* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_55C18193DF76660E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__GETCURSUBNODEPROGRESS_B__89_0_OFFSET))(this, x);
		}
	};
}
