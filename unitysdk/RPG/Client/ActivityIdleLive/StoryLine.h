#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class ChapterUiData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class NodeRewardUiData; }
namespace RPG::Client::ActivityIdleLive { class NodeUIData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDALLCHAPTERUIDATAS_OFFSET UNITYSDK_OFFSET(0x1BA6E390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNEXTNODEUIDATAS_OFFSET UNITYSDK_OFFSET(0x1BA6EEF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNODEREWARDUIDATA_OFFSET UNITYSDK_OFFSET(0x1BA6F420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDPRENODEUIDATAS_OFFSET UNITYSDK_OFFSET(0x1BA6EA40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_CLEARPROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0x1BA72760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESSWHENCHAPTERFINISH_OFFSET UNITYSDK_OFFSET(0x1BA72BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0x1BA727E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTCHAPTER_OFFSET UNITYSDK_OFFSET(0x1BA72070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTORCURBATTLENODE_OFFSET UNITYSDK_OFFSET(0x1BA723A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTORCURNODE_OFFSET UNITYSDK_OFFSET(0x1BA493D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVCHAPTER_OFFSET UNITYSDK_OFFSET(0x1BA72620)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVORCURBATTLENODE_OFFSET UNITYSDK_OFFSET(0x1BA72150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSPECIFIEDNODENEXTBATTLENODE_OFFSET UNITYSDK_OFFSET(0x1BA48A30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSTATESTR_OFFSET UNITYSDK_OFFSET(0x1BA49B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_CURCHAPTER_OFFSET UNITYSDK_OFFSET(0x1BA47F30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_CURNODE_OFFSET UNITYSDK_OFFSET(0x1BA489F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXFINISHEDCHAPTER_OFFSET UNITYSDK_OFFSET(0x1BA716D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXFINISHEDNODE_OFFSET UNITYSDK_OFFSET(0x1BA71710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x1BA71650)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1BA71670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0x1BA71690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_PROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0x1BA716B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HASANYDROPRATEINCREASE_OFFSET UNITYSDK_OFFSET(0x1BA6F7D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HAVENEXTNODE_OFFSET UNITYSDK_OFFSET(0x1BA492D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISCHAPTERFINISHED_OFFSET UNITYSDK_OFFSET(0x1BA71DB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISLASTCHAPTER_OFFSET UNITYSDK_OFFSET(0x1BA71D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISPREVBATTLENODECURNODE_OFFSET UNITYSDK_OFFSET(0x1BA720C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_MARKTAROTFIRSTANIMPLAYED_OFFSET UNITYSDK_OFFSET(0x1BA731E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SETMAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0x1BA71C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x1BA71660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1BA71680)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0x1BA716A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_PROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0x1BA716C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SHOULDPLAYTAROTFIRSTANIM_OFFSET UNITYSDK_OFFSET(0x1BA73010)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETCHAPTERBYINDEX_OFFSET UNITYSDK_OFFSET(0x1BA70260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETNODEBYCHAPTERANDINDEX_OFFSET UNITYSDK_OFFSET(0x1BA71ED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATECURSTORYLINE_OFFSET UNITYSDK_OFFSET(0x1BA71B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXFINISHEDNODEBYLASTFINISHEDNODE_OFFSET UNITYSDK_OFFSET(0x1BA4AB20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXREACHEDNODEBYLASTENTEREDNODE_OFFSET UNITYSDK_OFFSET(0x1BA71F80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEPROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0x1BA72710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA71750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETNEXTCHAPTERBYCHAPTER_OFFSET UNITYSDK_OFFSET(0x1BA72580)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVCHAPTERBYCHAPTER_OFFSET UNITYSDK_OFFSET(0x1BA72670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVORCURNODE_OFFSET UNITYSDK_OFFSET(0x1BA72270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__INITALLCHAPTERS_OFFSET UNITYSDK_OFFSET(0x1BA71910)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int StoryLine_TypeDefinitionIndex = 74858;

	class StoryLine : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _CurChapter; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveChapter*>* _AllChapters; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _CurNode; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _MaxReachedNode_k__BackingField; // 0x28
		::System::UInt32 _MaxReachedNodeIndex_k__BackingField; // 0x30
		::System::UInt32 _MaxFinishedNode; // 0x34
		::System::UInt32 _ProcessingEventId_k__BackingField; // 0x38
		::System::UInt32 _MaxReachedChapterIndex_k__BackingField; // 0x3C
		::System::UInt32 _MaxFinishedChapter; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* get_CurNode()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_CURNODE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* get_CurChapter()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_CURCHAPTER_OFFSET))(this);
		}

		::System::UInt32 get_MaxReachedChapterIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDCHAPTERINDEX_OFFSET))(this);
		}

		::System::Void set_MaxReachedChapterIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDCHAPTERINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxReachedNodeIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODEINDEX_OFFSET))(this);
		}

		::System::Void set_MaxReachedNodeIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODEINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* get_MaxReachedNode()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODE_OFFSET))(this);
		}

		::System::Void set_MaxReachedNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ProcessingEventId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_PROCESSINGEVENTID_OFFSET))(this);
		}

		::System::Void set_ProcessingEventId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_PROCESSINGEVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxFinishedChapter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXFINISHEDCHAPTER_OFFSET))(this);
		}

		::System::UInt32 get_MaxFinishedNode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXFINISHEDNODE_OFFSET))(this);
		}

		::System::Void _InitAllChapters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__INITALLCHAPTERS_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* TryGetChapterByIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETCHAPTERBYINDEX_OFFSET))(this, a1);
		}

		::System::Boolean IsLastChapter(::RPG::Client::ActivityIdleLive::IdleLiveChapter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISLASTCHAPTER_OFFSET))(this, a1);
		}

		::System::Boolean IsChapterFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISCHAPTERFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* TryGetNodeByChapterAndIndex(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETNODEBYCHAPTERANDINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCurStoryLine(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATECURSTORYLINE_OFFSET))(this, a1, a2);
		}

		::System::Void SetMaxReachedNode(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SETMAXREACHEDNODE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMaxFinishedNodeByLastFinishedNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXFINISHEDNODEBYLASTFINISHEDNODE_OFFSET))(this, a1);
		}

		::System::Void UpdateMaxReachedNodeByLastEnteredNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXREACHEDNODEBYLASTENTEREDNODE_OFFSET))(this, a1);
		}

		::System::String* GetStateStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSTATESTR_OFFSET))(this);
		}

		::System::Boolean IsPrevBattleNodeCurNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISPREVBATTLENODECURNODE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* GetPrevOrCurBattleNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVORCURBATTLENODE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* _GetPrevOrCurNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVORCURNODE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* GetSpecifiedNodeNextBattleNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSPECIFIEDNODENEXTBATTLENODE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* GetNextOrCurBattleNode()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTORCURBATTLENODE_OFFSET))(this);
		}

		::System::Boolean HaveNextNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HAVENEXTNODE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* GetNextOrCurNode()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTORCURNODE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* GetNextChapter()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTCHAPTER_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _GetNextChapterByChapter(::RPG::Client::ActivityIdleLive::IdleLiveChapter* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETNEXTCHAPTERBYCHAPTER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* GetPrevChapter()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVCHAPTER_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _GetPrevChapterByChapter(::RPG::Client::ActivityIdleLive::IdleLiveChapter* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVCHAPTERBYCHAPTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterUiData*>* BuildAllChapterUiDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDALLCHAPTERUIDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeUIData*>* BuildPreNodeUiDatas(::System::UInt32 a1, ::RPG::Client::ActivityIdleLive::IdleLiveChapter* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeUIData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDPRENODEUIDATAS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeUIData*>* BuildNextNodeUiDatas(::System::UInt32 a1, ::RPG::Client::ActivityIdleLive::IdleLiveChapter* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeUIData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNEXTNODEUIDATAS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeRewardUiData*>* BuildNodeRewardUiData(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeRewardUiData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNODEREWARDUIDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyDropRateIncrease(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HASANYDROPRATEINCREASE_OFFSET))(this, a1);
		}

		::System::Void UpdateProcessingEventId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEPROCESSINGEVENTID_OFFSET))(this, a1);
		}

		::System::Void ClearProcessingEventId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_CLEARPROCESSINGEVENTID_OFFSET))(this);
		}

		::System::Single GetLevelProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESS_OFFSET))(this);
		}

		::System::Single GetLevelProgressWhenChapterFinish(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESSWHENCHAPTERFINISH_OFFSET))(this, a1);
		}

		::System::Boolean ShouldPlayTarotFirstAnim(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SHOULDPLAYTAROTFIRSTANIM_OFFSET))(this, a1);
		}

		::System::Void MarkTarotFirstAnimPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_MARKTAROTFIRSTANIMPLAYED_OFFSET))(this);
		}
	};
}
