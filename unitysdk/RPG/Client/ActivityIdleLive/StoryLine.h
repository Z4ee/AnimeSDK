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

#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDALLCHAPTERUIDATAS_OFFSET UNITYSDK_OFFSET(0xB181EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNEXTNODEUIDATAS_OFFSET UNITYSDK_OFFSET(0xB182800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDNODEREWARDUIDATA_OFFSET UNITYSDK_OFFSET(0xB182C40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_BUILDPRENODEUIDATAS_OFFSET UNITYSDK_OFFSET(0xB182410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_CLEARPROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0xB185D40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESSWHENCHAPTERFINISH_OFFSET UNITYSDK_OFFSET(0xB1861D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETLEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0xB185DC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTCHAPTER_OFFSET UNITYSDK_OFFSET(0xB1856E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTORCURBATTLENODE_OFFSET UNITYSDK_OFFSET(0xB185990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETNEXTORCURNODE_OFFSET UNITYSDK_OFFSET(0xB15FF50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVCHAPTER_OFFSET UNITYSDK_OFFSET(0xB185C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETPREVORCURBATTLENODE_OFFSET UNITYSDK_OFFSET(0xB185790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSPECIFIEDNODENEXTBATTLENODE_OFFSET UNITYSDK_OFFSET(0xB15F700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GETSTATESTR_OFFSET UNITYSDK_OFFSET(0xB160590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_CURCHAPTER_OFFSET UNITYSDK_OFFSET(0xB15EE90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_CURNODE_OFFSET UNITYSDK_OFFSET(0xB184D50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXFINISHEDCHAPTER_OFFSET UNITYSDK_OFFSET(0xB184DE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXFINISHEDNODE_OFFSET UNITYSDK_OFFSET(0xB184DF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xB184D60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODEINDEX_OFFSET UNITYSDK_OFFSET(0xB184D80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_MAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0xB184DA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_GET_PROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0xB184DC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HASANYDROPRATEINCREASE_OFFSET UNITYSDK_OFFSET(0xB182F90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_HAVENEXTNODE_OFFSET UNITYSDK_OFFSET(0xB15FE50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISCHAPTERFINISHED_OFFSET UNITYSDK_OFFSET(0xB185420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISLASTCHAPTER_OFFSET UNITYSDK_OFFSET(0xB185380)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_ISPREVBATTLENODECURNODE_OFFSET UNITYSDK_OFFSET(0xB185730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_MARKTAROTFIRSTANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xB1867C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SETMAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0xB185300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xB184D70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODEINDEX_OFFSET UNITYSDK_OFFSET(0xB184D90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_MAXREACHEDNODE_OFFSET UNITYSDK_OFFSET(0xB184DB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SET_PROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0xB184DD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_SHOULDPLAYTAROTFIRSTANIM_OFFSET UNITYSDK_OFFSET(0xB1865F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETCHAPTERBYINDEX_OFFSET UNITYSDK_OFFSET(0xB183930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_TRYGETNODEBYCHAPTERANDINDEX_OFFSET UNITYSDK_OFFSET(0xB185540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATECURSTORYLINE_OFFSET UNITYSDK_OFFSET(0xB1851F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXFINISHEDNODEBYLASTFINISHEDNODE_OFFSET UNITYSDK_OFFSET(0xB161070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEMAXREACHEDNODEBYLASTENTEREDNODE_OFFSET UNITYSDK_OFFSET(0xB1855F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE_UPDATEPROCESSINGEVENTID_OFFSET UNITYSDK_OFFSET(0xB185CF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xB184E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETNEXTCHAPTERBYCHAPTER_OFFSET UNITYSDK_OFFSET(0xB185B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVCHAPTERBYCHAPTER_OFFSET UNITYSDK_OFFSET(0xB185C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__GETPREVORCURNODE_OFFSET UNITYSDK_OFFSET(0xB185860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STORYLINE__INITALLCHAPTERS_OFFSET UNITYSDK_OFFSET(0xB184FC0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int StoryLine_TypeDefinitionIndex = 70029;

	class StoryLine : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _CurNode; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveChapter*>* _AllChapters; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _CurChapter; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _MaxReachedNode_k__BackingField; // 0x28
		::System::UInt32 _MaxFinishedChapter; // 0x30
		::System::UInt32 _MaxReachedChapterIndex_k__BackingField; // 0x34
		::System::UInt32 _MaxReachedNodeIndex_k__BackingField; // 0x38
		::System::UInt32 _ProcessingEventId_k__BackingField; // 0x3C
		::System::UInt32 _MaxFinishedNode; // 0x40

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
