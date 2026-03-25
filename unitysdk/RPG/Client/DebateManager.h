#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebateUIType.h"
#include "unitysdk/System/Object.h"

class Class_1_310D67B31C67B0C3;
class Class_1_683BE54A4D4D4711;
class Class_1_69FF5DE516C87A66;
namespace RPG::Client { class TalkDebateCountInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class DebateInitialize; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBATEMANAGER_CHECKFAIL_OFFSET UNITYSDK_OFFSET(0x9447BC0)
#define RPG_CLIENT_DEBATEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x94472B0)
#define RPG_CLIENT_DEBATEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9447250)
#define RPG_CLIENT_DEBATEMANAGER_GET_UITYPE_OFFSET UNITYSDK_OFFSET(0x94486F0)
#define RPG_CLIENT_DEBATEMANAGER_ISALLITEMSUBMITTED_OFFSET UNITYSDK_OFFSET(0x9447D20)
#define RPG_CLIENT_DEBATEMANAGER_RETURNTOTESTIMONY_OFFSET UNITYSDK_OFFSET(0x9447C60)
#define RPG_CLIENT_DEBATEMANAGER_STARTDEBATE_OFFSET UNITYSDK_OFFSET(0x9447550)
#define RPG_CLIENT_DEBATEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x94471A0)
#define RPG_CLIENT_DEBATEMANAGER_TRYMINUSCOUNT_OFFSET UNITYSDK_OFFSET(0x9447B30)
#define RPG_CLIENT_DEBATEMANAGER__CHECKTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0x94484A0)
#define RPG_CLIENT_DEBATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9448740)
#define RPG_CLIENT_DEBATEMANAGER__ONASK_OFFSET UNITYSDK_OFFSET(0x94483B0)
#define RPG_CLIENT_DEBATEMANAGER__ONPROMISEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x94485E0)
#define RPG_CLIENT_DEBATEMANAGER__ONSTARTTOASTEND_OFFSET UNITYSDK_OFFSET(0x9448180)
#define RPG_CLIENT_DEBATEMANAGER__ONSUBMITITEM_OFFSET UNITYSDK_OFFSET(0x9448420)
#define RPG_CLIENT_DEBATEMANAGER__ONTALKDEBATEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x9448230)
#define RPG_CLIENT_DEBATEMANAGER__PLAYDEBATE_OFFSET UNITYSDK_OFFSET(0x9447D90)
#define RPG_CLIENT_DEBATEMANAGER__PROMISESHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0x9447AA0)
#define RPG_CLIENT_DEBATEMANAGER__REGIST_OFFSET UNITYSDK_OFFSET(0x9447760)
#define RPG_CLIENT_DEBATEMANAGER__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0x9448120)
#define RPG_CLIENT_DEBATEMANAGER__RESOLVESHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0x9448090)
#define RPG_CLIENT_DEBATEMANAGER__SETTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0x9447800)
#define RPG_CLIENT_DEBATEMANAGER__SETUPCOUNT_OFFSET UNITYSDK_OFFSET(0x9447DF0)
#define RPG_CLIENT_DEBATEMANAGER__SHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0x9447ED0)
#define RPG_CLIENT_DEBATEMANAGER__SHOWTESTIMONY_OFFSET UNITYSDK_OFFSET(0x9447CB0)
#define RPG_CLIENT_DEBATEMANAGER__SORTTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0x9448560)
#define RPG_CLIENT_DEBATEMANAGER__UNREGIST_OFFSET UNITYSDK_OFFSET(0x94474B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebateManager_TypeDefinitionIndex = 49170;

	class DebateManager : public ::System::Object
	{
	public:
		::Class_1_310D67B31C67B0C3* _TestimonyTimelinePlayer; // 0x10
		::RPG::Client::TalkDebateCountInfo* _TalkDebateCountInfo; // 0x18
		::RPG::Client::Promises::Promise* _StartToastPromise; // 0x20
		::System::Action* _OnInitTaskEnd; // 0x28
		::Class_1_69FF5DE516C87A66* _StartToastExecuter; // 0x30
		::RPG::GameCore::TaskContext* _TaskContext; // 0x38
		::System::String* _FailStr; // 0x40
		::System::Collections::Generic::List_1<::Class_1_683BE54A4D4D4711*>* _TestimonyGroups; // 0x48
		::RPG::GameCore::DebateInitialize* _InitTaskConfig; // 0x50
		::System::Boolean _Running; // 0x58
		::System::Int32 _CurrentGroupIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void StartDebate(::RPG::GameCore::DebateInitialize* initConfig, ::RPG::GameCore::TaskContext* taskContext, ::System::Action* onInitTaskEnd)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DebateInitialize*, ::RPG::GameCore::TaskContext*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_STARTDEBATE_OFFSET))(this, initConfig, taskContext, onInitTaskEnd);
		}

		::System::Boolean TryMinusCount(::System::Int32 minusNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_TRYMINUSCOUNT_OFFSET))(this, minusNum);
		}

		::System::Boolean CheckFail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_CHECKFAIL_OFFSET))(this);
		}

		::System::Void ReturnToTestimony()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_RETURNTOTESTIMONY_OFFSET))(this);
		}

		::System::Boolean IsAllItemSubmitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_ISALLITEMSUBMITTED_OFFSET))(this);
		}

		::System::Void _PlayDebate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__PLAYDEBATE_OFFSET))(this);
		}

		::System::Void _SetupCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SETUPCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _PromiseShowStartToast()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__PROMISESHOWSTARTTOAST_OFFSET))(this);
		}

		::System::Void _ResolveShowStartToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__RESOLVESHOWSTARTTOAST_OFFSET))(this);
		}

		::System::Void _ShowStartToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SHOWSTARTTOAST_OFFSET))(this);
		}

		::System::Void _OnStartToastEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONSTARTTOASTEND_OFFSET))(this);
		}

		::System::Void _Regist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__REGIST_OFFSET))(this);
		}

		::System::Void _Unregist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__UNREGIST_OFFSET))(this);
		}

		::System::Void _OnTalkDebateButtonClick(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONTALKDEBATEBUTTONCLICK_OFFSET))(this, obj);
		}

		::System::Void _OnAsk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONASK_OFFSET))(this);
		}

		::System::Void _OnSubmitItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONSUBMITITEM_OFFSET))(this);
		}

		::System::Void _ShowTestimony()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SHOWTESTIMONY_OFFSET))(this);
		}

		::System::Void _SetTestimonyGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SETTESTIMONYGROUPS_OFFSET))(this);
		}

		::System::Int32 _SortTestimonyGroups(::Class_1_683BE54A4D4D4711* l, ::Class_1_683BE54A4D4D4711* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_683BE54A4D4D4711*, ::Class_1_683BE54A4D4D4711*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SORTTESTIMONYGROUPS_OFFSET))(this, l, r);
		}

		::System::Void _CheckTestimonyGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__CHECKTESTIMONYGROUPS_OFFSET))(this);
		}

		::System::Void _ResolvePromise(::RPG::Client::Promises::Promise* refPromise)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__RESOLVEPROMISE_OFFSET))(this, refPromise);
		}

		::System::Void _OnPromiseException(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONPROMISEEXCEPTION_OFFSET))(this, ex);
		}

		::RPG::GameCore::DebateUIType get_UIType()
		{
			return ((::RPG::GameCore::DebateUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_GET_UITYPE_OFFSET))(this);
		}
	};
}
