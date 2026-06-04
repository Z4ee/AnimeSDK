#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebateUIType.h"
#include "unitysdk/System/Object.h"

class Class_1_059915F1CFEF189E;
class Class_1_683BE54A4D4D4711;
class Class_1_F3391C70DC37088D;
namespace RPG::Client { class TalkDebateCountInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class DebateInitialize; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBATEMANAGER_CHECKFAIL_OFFSET UNITYSDK_OFFSET(0xB734690)
#define RPG_CLIENT_DEBATEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xB733C80)
#define RPG_CLIENT_DEBATEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB733C20)
#define RPG_CLIENT_DEBATEMANAGER_GET_UITYPE_OFFSET UNITYSDK_OFFSET(0xB735270)
#define RPG_CLIENT_DEBATEMANAGER_ISALLITEMSUBMITTED_OFFSET UNITYSDK_OFFSET(0xB734810)
#define RPG_CLIENT_DEBATEMANAGER_RETURNTOTESTIMONY_OFFSET UNITYSDK_OFFSET(0xB734730)
#define RPG_CLIENT_DEBATEMANAGER_STARTDEBATE_OFFSET UNITYSDK_OFFSET(0xB733F60)
#define RPG_CLIENT_DEBATEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xB733B70)
#define RPG_CLIENT_DEBATEMANAGER_TRYMINUSCOUNT_OFFSET UNITYSDK_OFFSET(0xB734600)
#define RPG_CLIENT_DEBATEMANAGER__CHECKTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0xB735010)
#define RPG_CLIENT_DEBATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB7352C0)
#define RPG_CLIENT_DEBATEMANAGER__ONASK_OFFSET UNITYSDK_OFFSET(0xB734EE0)
#define RPG_CLIENT_DEBATEMANAGER__ONPROMISEEXCEPTION_OFFSET UNITYSDK_OFFSET(0xB735170)
#define RPG_CLIENT_DEBATEMANAGER__ONSTARTTOASTEND_OFFSET UNITYSDK_OFFSET(0xB734CB0)
#define RPG_CLIENT_DEBATEMANAGER__ONSUBMITITEM_OFFSET UNITYSDK_OFFSET(0xB734F70)
#define RPG_CLIENT_DEBATEMANAGER__ONTALKDEBATEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB734D60)
#define RPG_CLIENT_DEBATEMANAGER__PLAYDEBATE_OFFSET UNITYSDK_OFFSET(0xB7348A0)
#define RPG_CLIENT_DEBATEMANAGER__PROMISESHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0xB734570)
#define RPG_CLIENT_DEBATEMANAGER__REGIST_OFFSET UNITYSDK_OFFSET(0xB7341A0)
#define RPG_CLIENT_DEBATEMANAGER__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xB734C50)
#define RPG_CLIENT_DEBATEMANAGER__RESOLVESHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0xB734BC0)
#define RPG_CLIENT_DEBATEMANAGER__SETTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0xB734260)
#define RPG_CLIENT_DEBATEMANAGER__SETUPCOUNT_OFFSET UNITYSDK_OFFSET(0xB734910)
#define RPG_CLIENT_DEBATEMANAGER__SHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0xB7349F0)
#define RPG_CLIENT_DEBATEMANAGER__SHOWTESTIMONY_OFFSET UNITYSDK_OFFSET(0xB734780)
#define RPG_CLIENT_DEBATEMANAGER__SORTTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0xB7350F0)
#define RPG_CLIENT_DEBATEMANAGER__UNREGIST_OFFSET UNITYSDK_OFFSET(0xB733EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebateManager_TypeDefinitionIndex = 56723;

	class DebateManager : public ::System::Object
	{
	public:
		::Class_1_059915F1CFEF189E* _TestimonyTimelinePlayer; // 0x10
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::System::Action* _OnInitTaskEnd; // 0x20
		::RPG::GameCore::DebateInitialize* _InitTaskConfig; // 0x28
		::Class_1_F3391C70DC37088D* _StartToastExecuter; // 0x30
		::RPG::Client::TalkDebateCountInfo* _TalkDebateCountInfo; // 0x38
		::RPG::Client::Promises::Promise* _StartToastPromise; // 0x40
		::System::Collections::Generic::List_1<::Class_1_683BE54A4D4D4711*>* _TestimonyGroups; // 0x48
		::System::String* _FailStr; // 0x50
		::System::Int32 _CurrentGroupIndex; // 0x58
		::System::Boolean _Running; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void StartDebate(::RPG::GameCore::DebateInitialize* a1, ::RPG::GameCore::TaskContext* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DebateInitialize*, ::RPG::GameCore::TaskContext*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_STARTDEBATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryMinusCount(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_TRYMINUSCOUNT_OFFSET))(this, a1);
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

		::System::Void _OnTalkDebateButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONTALKDEBATEBUTTONCLICK_OFFSET))(this, a1);
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

		::System::Int32 _SortTestimonyGroups(::Class_1_683BE54A4D4D4711* a1, ::Class_1_683BE54A4D4D4711* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_683BE54A4D4D4711*, ::Class_1_683BE54A4D4D4711*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SORTTESTIMONYGROUPS_OFFSET))(this, a1, a2);
		}

		::System::Void _CheckTestimonyGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__CHECKTESTIMONYGROUPS_OFFSET))(this);
		}

		::System::Void _ResolvePromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__RESOLVEPROMISE_OFFSET))(this, a1);
		}

		::System::Void _OnPromiseException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONPROMISEEXCEPTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::DebateUIType get_UIType()
		{
			return ((::RPG::GameCore::DebateUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_GET_UITYPE_OFFSET))(this);
		}
	};
}
