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

#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDALLCHAPTERUIDATAS_OFFSET UNITYSDK_OFFSET(0x9BE5BB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNEXTNODEUIDATAS_OFFSET UNITYSDK_OFFSET(0x9BE6480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNODEREWARDUIDATA_OFFSET UNITYSDK_OFFSET(0x9BE6860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDPRENODEUIDATAS_OFFSET UNITYSDK_OFFSET(0x9BE60F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_CLEARPROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0x9BE9E20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESSWHENCHAPTERFINISH_OFFSET UNITYSDK_OFFSET(0x9BEA320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0x9BE9EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTCHAPTER_OFFSET UNITYSDK_OFFSET(0x9BE9550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTORCURBATTLENODE_OFFSET UNITYSDK_OFFSET(0x9BE9A30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTORCURNODE_OFFSET UNITYSDK_OFFSET(0x9BE5190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVCHAPTER_OFFSET UNITYSDK_OFFSET(0x9BE9CD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVORCURBATTLENODE_OFFSET UNITYSDK_OFFSET(0x9BE9610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSPECIFIEDNODENEXTBATTLENODE_OFFSET UNITYSDK_OFFSET(0x9BE9850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSTATESTR_OFFSET UNITYSDK_OFFSET(0x9BE9290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_CURCHAPTER_OFFSET UNITYSDK_OFFSET(0x9BE60D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_CURNODE_OFFSET UNITYSDK_OFFSET(0x9BE88E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXFINISHEDCHAPTER_OFFSET UNITYSDK_OFFSET(0x9BE8970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXFINISHEDNODE_OFFSET UNITYSDK_OFFSET(0x9BE8980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x9BE88F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODEINDEX_OFFSET UNITYSDK_OFFSET(0x9BE8910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0x9BE8930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_PROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0x9BE8950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HASANYDROPRATEINCREASE_OFFSET UNITYSDK_OFFSET(0x9BE6B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HAVENEXTNODE_OFFSET UNITYSDK_OFFSET(0x9BE79E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISCHAPTERFINISHED_OFFSET UNITYSDK_OFFSET(0x9BE8F50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISLASTCHAPTER_OFFSET UNITYSDK_OFFSET(0x9BE8EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISPREVBATTLENODECURNODE_OFFSET UNITYSDK_OFFSET(0x9BE95A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_MARKTAROTFIRSTANIMPLAYED_OFFSET UNITYSDK_OFFSET(0x9BEA9B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SETMAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0x9BE8E20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x9BE8900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODEINDEX_OFFSET UNITYSDK_OFFSET(0x9BE8920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0x9BE8940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_PROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0x9BE8960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SHOULDPLAYTAROTFIRSTANIM_OFFSET UNITYSDK_OFFSET(0x9BEA7E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETCHAPTERBYINDEX_OFFSET UNITYSDK_OFFSET(0x9BE7440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETNODEBYCHAPTERANDINDEX_OFFSET UNITYSDK_OFFSET(0x9BE9060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATECURSTORYLINE_OFFSET UNITYSDK_OFFSET(0x9BE8D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXFINISHEDNODEBYLASTFINISHEDNODE_OFFSET UNITYSDK_OFFSET(0x9BE9120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXREACHEDNODEBYLASTENTEREDNODE_OFFSET UNITYSDK_OFFSET(0x9BE91A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEPROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0x9BE9DD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BE8990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETNEXTCHAPTERBYCHAPTER_OFFSET UNITYSDK_OFFSET(0x9BE9C20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVCHAPTERBYCHAPTER_OFFSET UNITYSDK_OFFSET(0x9BE9D20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVORCURNODE_OFFSET UNITYSDK_OFFSET(0x9BE96F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__INITALLCHAPTERS_OFFSET UNITYSDK_OFFSET(0x9BE8B70)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int StoryLine_TypeDefinitionIndex = 69217;

	class StoryLine : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveChapter*>* _AllChapters; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _CurNode; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _MaxReachedNode_k__BackingField; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _CurChapter; // 0x28
		::System::UInt32 _ProcessingEventId_k__BackingField; // 0x30
		::System::UInt32 _MaxReachedNodeIndex_k__BackingField; // 0x34
		::System::UInt32 _MaxReachedChapterIndex_k__BackingField; // 0x38
		::System::UInt32 _MaxFinishedChapter; // 0x3C
		::System::UInt32 _MaxFinishedNode; // 0x40

		::System::Void _ctor(::System::UInt32 curChapterIndex, ::System::UInt32 curNodeIndex, ::System::UInt32 maxReachedChapterIndex, ::System::UInt32 maxReachedNodeIndex, ::System::UInt32 maxFinishedChapterIndex, ::System::UInt32 maxFinishedNodeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__CTOR_OFFSET))(this, curChapterIndex, curNodeIndex, maxReachedChapterIndex, maxReachedNodeIndex, maxFinishedChapterIndex, maxFinishedNodeIndex);
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

		::System::Void set_MaxReachedChapterIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDCHAPTERINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxReachedNodeIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODEINDEX_OFFSET))(this);
		}

		::System::Void set_MaxReachedNodeIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODEINDEX_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* get_MaxReachedNode()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODE_OFFSET))(this);
		}

		::System::Void set_MaxReachedNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODE_OFFSET))(this, value);
		}

		::System::UInt32 get_ProcessingEventId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_PROCESSINGEVENTID_OFFSET))(this);
		}

		::System::Void set_ProcessingEventId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_PROCESSINGEVENTID_OFFSET))(this, value);
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

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* TryGetChapterByIndex(::System::UInt32 chapterIndex)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETCHAPTERBYINDEX_OFFSET))(this, chapterIndex);
		}

		::System::Boolean IsLastChapter(::RPG::Client::ActivityIdleLive::IdleLiveChapter* chapter)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISLASTCHAPTER_OFFSET))(this, chapter);
		}

		::System::Boolean IsChapterFinished(::System::UInt32 chapterId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISCHAPTERFINISHED_OFFSET))(this, chapterId);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* TryGetNodeByChapterAndIndex(::System::UInt32 chapterIndex, ::System::UInt32 nodeIndex)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETNODEBYCHAPTERANDINDEX_OFFSET))(this, chapterIndex, nodeIndex);
		}

		::System::Void UpdateCurStoryLine(::System::UInt32 curChapterIndex, ::System::UInt32 curNodeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATECURSTORYLINE_OFFSET))(this, curChapterIndex, curNodeIndex);
		}

		::System::Void SetMaxReachedNode(::System::UInt32 maxReachedChapterIndex, ::System::UInt32 maxReachedNodeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SETMAXREACHEDNODE_OFFSET))(this, maxReachedChapterIndex, maxReachedNodeIndex);
		}

		::System::Void UpdateMaxFinishedNodeByLastFinishedNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* lastFinishedNode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXFINISHEDNODEBYLASTFINISHEDNODE_OFFSET))(this, lastFinishedNode);
		}

		::System::Void UpdateMaxReachedNodeByLastEnteredNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* lastEnteredNode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXREACHEDNODEBYLASTENTEREDNODE_OFFSET))(this, lastEnteredNode);
		}

		::System::String* GetStateStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSTATESTR_OFFSET))(this);
		}

		::System::Boolean IsPrevBattleNodeCurNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* curNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISPREVBATTLENODECURNODE_OFFSET))(this, curNode);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* GetPrevOrCurBattleNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* curNode)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVORCURBATTLENODE_OFFSET))(this, curNode);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* _GetPrevOrCurNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* curNode)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVORCURNODE_OFFSET))(this, curNode);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* GetSpecifiedNodeNextBattleNode(::RPG::Client::ActivityIdleLive::IdleLiveNode* specifiedNode)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSPECIFIEDNODENEXTBATTLENODE_OFFSET))(this, specifiedNode);
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

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _GetNextChapterByChapter(::RPG::Client::ActivityIdleLive::IdleLiveChapter* chapter)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETNEXTCHAPTERBYCHAPTER_OFFSET))(this, chapter);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* GetPrevChapter()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVCHAPTER_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _GetPrevChapterByChapter(::RPG::Client::ActivityIdleLive::IdleLiveChapter* chapter)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVCHAPTERBYCHAPTER_OFFSET))(this, chapter);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterUiData*>* BuildAllChapterUiDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDALLCHAPTERUIDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeUIData*>* BuildPreNodeUiDatas(::System::UInt32 curNodeIndex, ::RPG::Client::ActivityIdleLive::IdleLiveChapter* curChapter)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeUIData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDPRENODEUIDATAS_OFFSET))(this, curNodeIndex, curChapter);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeUIData*>* BuildNextNodeUiDatas(::System::UInt32 curNodeIndex, ::RPG::Client::ActivityIdleLive::IdleLiveChapter* curChapter)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeUIData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNEXTNODEUIDATAS_OFFSET))(this, curNodeIndex, curChapter);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeRewardUiData*>* BuildNodeRewardUiData(::RPG::Client::ActivityIdleLive::IdleLiveNode* node)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::NodeRewardUiData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNODEREWARDUIDATA_OFFSET))(this, node);
		}

		::System::Boolean HasAnyDropRateIncrease(::RPG::Client::ActivityIdleLive::IdleLiveNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HASANYDROPRATEINCREASE_OFFSET))(this, node);
		}

		::System::Void UpdateProcessingEventId(::System::UInt32 eventId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEPROCESSINGEVENTID_OFFSET))(this, eventId);
		}

		::System::Void ClearProcessingEventId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_CLEARPROCESSINGEVENTID_OFFSET))(this);
		}

		::System::Single GetLevelProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESS_OFFSET))(this);
		}

		::System::Single GetLevelProgressWhenChapterFinish(::System::UInt32 chapterId)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESSWHENCHAPTERFINISH_OFFSET))(this, chapterId);
		}

		::System::Boolean ShouldPlayTarotFirstAnim(::System::UInt32 cardId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SHOULDPLAYTAROTFIRSTANIM_OFFSET))(this, cardId);
		}

		::System::Void MarkTarotFirstAnimPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_MARKTAROTFIRSTANIMPLAYED_OFFSET))(this);
		}
	};
}
