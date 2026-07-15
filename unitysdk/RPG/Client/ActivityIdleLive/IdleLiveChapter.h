#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_DA5E269DBF62B292;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::GameCore { class IdleLiveChapterRow; }
namespace RPG::GameCore { class IdleLiveNodeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GETCURPROGRESS_OFFSET UNITYSDK_OFFSET(0x19D1F5E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GETLIVEROOMEXPGAINEDINCURCHAPTER_OFFSET UNITYSDK_OFFSET(0x19D38480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_BACKGROUNDSTATE_OFFSET UNITYSDK_OFFSET(0x19D37C30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_BACKTOMAZEAFTERCHAPTERFINISH_OFFSET UNITYSDK_OFFSET(0x19D37BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x19D37BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_CHAPTERNAME_OFFSET UNITYSDK_OFFSET(0x19D37B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_FINALACTCHATPHASE_OFFSET UNITYSDK_OFFSET(0x19D37B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_FINALACT_OFFSET UNITYSDK_OFFSET(0x19D37B70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_FSVLIST_OFFSET UNITYSDK_OFFSET(0x19D37BB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19D37B50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_ISHARDMODE_OFFSET UNITYSDK_OFFSET(0x19D37C40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_MAXNODEINDEX_OFFSET UNITYSDK_OFFSET(0x19D37C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_NODES_OFFSET UNITYSDK_OFFSET(0x19D37C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0x19D37C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_HASFINALACT_OFFSET UNITYSDK_OFFSET(0x19D389A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_INITNODES_OFFSET UNITYSDK_OFFSET(0x19D37E60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_ISALLBOSSNODEFINISHED_OFFSET UNITYSDK_OFFSET(0x19D38670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_ISLASTNODEFINISHED_OFFSET UNITYSDK_OFFSET(0x19D1F6C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19D1F660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_BACKTOMAZEAFTERCHAPTERFINISH_OFFSET UNITYSDK_OFFSET(0x19D37BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_CHAPTERNAME_OFFSET UNITYSDK_OFFSET(0x19D37B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_FINALACTCHATPHASE_OFFSET UNITYSDK_OFFSET(0x19D37BA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_FINALACT_OFFSET UNITYSDK_OFFSET(0x19D37B80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_FSVLIST_OFFSET UNITYSDK_OFFSET(0x19D37BC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19D37B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_MAXNODEINDEX_OFFSET UNITYSDK_OFFSET(0x19D37C20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_TRYGETFIRSTNODE_OFFSET UNITYSDK_OFFSET(0x19D38CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_TRYGETLASTNODE_OFFSET UNITYSDK_OFFSET(0x19D389F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_TRYGETNODEBYINDEX_OFFSET UNITYSDK_OFFSET(0x19D38BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_UPDATENODEFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x19D38270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D37C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER__INITNODES_B__45_0_OFFSET UNITYSDK_OFFSET(0x19D38EA0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChapter_TypeDefinitionIndex = 71540;

	class IdleLiveChapter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_DA5E269DBF62B292*>* _FSVList_k__BackingField; // 0x10
		::RPG::Client::ScheduleData* _ScheduleData; // 0x18
		::System::String* _BackgroundState_k__BackingField; // 0x20
		::System::String* _IconPath_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveNode*>* _Nodes; // 0x30
		::RPG::Client::TextID _ChapterName_k__BackingField; // 0x38
		::System::UInt32 _ChapterIndex_k__BackingField; // 0x48
		::System::UInt32 _FinalAct_k__BackingField; // 0x4C
		::System::Boolean _IsHardMode_k__BackingField; // 0x50
		::System::Boolean _BackToMazeAfterChapterFinish_k__BackingField; // 0x51
		::System::UInt32 _FinalActChatPhase_k__BackingField; // 0x54
		::System::UInt32 _MaxNodeIndex_k__BackingField; // 0x58
		::RPG::Client::TextID _RomanNumber_k__BackingField; // 0x60

		::System::Void _ctor(::RPG::GameCore::IdleLiveChapterRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveChapterRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ChapterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_CHAPTERNAME_OFFSET))(this);
		}

		::System::Void set_ChapterName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_CHAPTERNAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinalAct()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_FINALACT_OFFSET))(this);
		}

		::System::Void set_FinalAct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_FINALACT_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinalActChatPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_FINALACTCHATPHASE_OFFSET))(this);
		}

		::System::Void set_FinalActChatPhase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_FINALACTCHATPHASE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_DA5E269DBF62B292*>* get_FSVList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_DA5E269DBF62B292*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_FSVLIST_OFFSET))(this);
		}

		::System::Void set_FSVList(::System::Collections::Generic::List_1<::Class_1_DA5E269DBF62B292*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DA5E269DBF62B292*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_FSVLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_BackToMazeAfterChapterFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_BACKTOMAZEAFTERCHAPTERFINISH_OFFSET))(this);
		}

		::System::Void set_BackToMazeAfterChapterFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_BACKTOMAZEAFTERCHAPTERFINISH_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChapterIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_CHAPTERINDEX_OFFSET))(this);
		}

		::RPG::Client::TextID get_RomanNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_ROMANNUMBER_OFFSET))(this);
		}

		::System::UInt32 get_MaxNodeIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_MAXNODEINDEX_OFFSET))(this);
		}

		::System::Void set_MaxNodeIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_SET_MAXNODEINDEX_OFFSET))(this, a1);
		}

		::System::String* get_BackgroundState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_BACKGROUNDSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsHardMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_ISHARDMODE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveNode*>* get_Nodes()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GET_NODES_OFFSET))(this);
		}

		::System::Void InitNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_INITNODES_OFFSET))(this);
		}

		::System::Void UpdateNodeFinishStatus(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_UPDATENODEFINISHSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_ISUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 GetLiveRoomExpGainedInCurChapter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GETLIVEROOMEXPGAINEDINCURCHAPTER_OFFSET))(this);
		}

		::System::Boolean IsAllBossNodeFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_ISALLBOSSNODEFINISHED_OFFSET))(this);
		}

		::System::Boolean HasFinalAct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_HASFINALACT_OFFSET))(this);
		}

		::System::Boolean IsLastNodeFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_ISLASTNODEFINISHED_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* TryGetNodeByIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_TRYGETNODEBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* TryGetLastNode()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_TRYGETLASTNODE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* TryGetFirstNode()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_TRYGETFIRSTNODE_OFFSET))(this);
		}

		::System::UInt32 GetCurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER_GETCURPROGRESS_OFFSET))(this);
		}

		::System::Boolean _InitNodes_b__45_0(::RPG::GameCore::IdleLiveNodeRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER__INITNODES_B__45_0_OFFSET))(this, a1);
		}
	};
}
