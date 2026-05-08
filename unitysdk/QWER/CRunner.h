#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/STask.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CApplication; }
namespace QWER { class CClockMgr; }
namespace QWER { class CServiceFrontend; }
namespace QWER { class CTimerMgr; }
namespace QWER { class IPollInRunner; }
namespace QWER { class IService; }
namespace QWER { template <typename T> class CService_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define QWER_CRUNNER_ADDPOLL_OFFSET UNITYSDK_OFFSET(0x1BE88420)
#define QWER_CRUNNER_GET_APPLICATION_OFFSET UNITYSDK_OFFSET(0x1BE882F0)
#define QWER_CRUNNER_GET_ASYNCTASKCOUNT_OFFSET UNITYSDK_OFFSET(0x1BE88320)
#define QWER_CRUNNER_GET_CLOCKMGR_OFFSET UNITYSDK_OFFSET(0x1BE883C0)
#define QWER_CRUNNER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1BE88310)
#define QWER_CRUNNER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE859C0)
#define QWER_CRUNNER_GET_EXECSYNCCONTEXTCALLBACKCOUNTPERPOLL_OFFSET UNITYSDK_OFFSET(0x1BE88400)
#define QWER_CRUNNER_GET_EXECTIMERCOUNTPERPOLL_OFFSET UNITYSDK_OFFSET(0x1BE883E0)
#define QWER_CRUNNER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BE882C0)
#define QWER_CRUNNER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BE882D0)
#define QWER_CRUNNER_GET_TIMERMGR_OFFSET UNITYSDK_OFFSET(0x1BE883B0)
#define QWER_CRUNNER_HASUPDATETASK_OFFSET UNITYSDK_OFFSET(0x1BE85BB0)
#define QWER_CRUNNER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1BE85B10)
#define QWER_CRUNNER_POLL_OFFSET UNITYSDK_OFFSET(0x1BE85B00)
#define QWER_CRUNNER_POST_1_OFFSET UNITYSDK_OFFSET(0x1BE88CD0)
#define QWER_CRUNNER_POST_OFFSET UNITYSDK_OFFSET(0x1BE88BF0)
#define QWER_CRUNNER_REMOVEPOLL_OFFSET UNITYSDK_OFFSET(0x1BE884A0)
#define QWER_CRUNNER_SET_APPLICATION_OFFSET UNITYSDK_OFFSET(0x1BE88300)
#define QWER_CRUNNER_SET_CLOCKMGR_OFFSET UNITYSDK_OFFSET(0x1BE883D0)
#define QWER_CRUNNER_SET_EXECSYNCCONTEXTCALLBACKCOUNTPERPOLL_OFFSET UNITYSDK_OFFSET(0x1BE88410)
#define QWER_CRUNNER_SET_EXECTIMERCOUNTPERPOLL_OFFSET UNITYSDK_OFFSET(0x1BE883F0)
#define QWER_CRUNNER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BE882E0)
#define QWER_CRUNNER_WAITFORLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE88DE0)
#define QWER_CRUNNER_WAITFORUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE88DB0)
#define QWER_CRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE88070)
#define QWER_CRUNNER__POLL_OFFSET UNITYSDK_OFFSET(0x1BE88520)

namespace QWER
{
	inline static constexpr unsigned int CRunner_TypeDefinitionIndex = 85851;

	class CRunner : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_m_dwRunnerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRunner_TypeDefinitionIndex)->GetStaticField(0x120D0);
		}
		static ::QWER::CRunner** StaticGet_m_oCurrent()
		{
			return (::QWER::CRunner**)Il2CppClass::FromTypeDefinitionIndex(CRunner_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::List_1<::QWER::IPollInRunner*>* m_oPollInRunnerList; // 0x10
		::QWER::CApplication* _Application_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::QWER::CTimerMgr* _TimerMgr_k__BackingField; // 0x28
		::QWER::CClockMgr* _ClockMgr_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::QWER::IService*, ::QWER::CServiceFrontend*>* m_oConnectedFrontends; // 0x38
		::QWER::STask m_oLateUpdateEndTask; // 0x40
		::System::Threading::SynchronizationContext* _Context_k__BackingField; // 0x50
		::QWER::STask m_oUpdateEndTask; // 0x58
		::System::Int32 _ID_k__BackingField; // 0x68
		::System::Boolean m_bIsNodeSynchronizationContext; // 0x6C
		::System::Boolean m_bIsNodeSynchronizationContextQueueEmpty; // 0x6D
		::System::Int32 _ExecSyncContextCallbackCountPerPoll_k__BackingField; // 0x70
		::System::Int32 _ExecTimerCountPerPoll_k__BackingField; // 0x74
		::System::UInt32 m_dwTime; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER__CTOR_OFFSET))(this);
		}

		static ::QWER::CRunner* get_Current()
		{
			return ((::QWER::CRunner*(*)())((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_CURRENT_OFFSET))();
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + QWER_CRUNNER_SET_NAME_OFFSET))(this, value);
		}

		::QWER::CApplication* get_Application()
		{
			return ((::QWER::CApplication*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_APPLICATION_OFFSET))(this);
		}

		::System::Void set_Application(::QWER::CApplication* value)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CApplication*))((::PBYTE)hIl2Cpp + QWER_CRUNNER_SET_APPLICATION_OFFSET))(this, value);
		}

		::System::Threading::SynchronizationContext* get_Context()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Int32 get_AsyncTaskCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_ASYNCTASKCOUNT_OFFSET))(this);
		}

		::QWER::CTimerMgr* get_TimerMgr()
		{
			return ((::QWER::CTimerMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_TIMERMGR_OFFSET))(this);
		}

		::QWER::CClockMgr* get_ClockMgr()
		{
			return ((::QWER::CClockMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_CLOCKMGR_OFFSET))(this);
		}

		::System::Void set_ClockMgr(::QWER::CClockMgr* value)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CClockMgr*))((::PBYTE)hIl2Cpp + QWER_CRUNNER_SET_CLOCKMGR_OFFSET))(this, value);
		}

		::System::Int32 get_ExecTimerCountPerPoll()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_EXECTIMERCOUNTPERPOLL_OFFSET))(this);
		}

		::System::Void set_ExecTimerCountPerPoll(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CRUNNER_SET_EXECTIMERCOUNTPERPOLL_OFFSET))(this, value);
		}

		::System::Int32 get_ExecSyncContextCallbackCountPerPoll()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_GET_EXECSYNCCONTEXTCALLBACKCOUNTPERPOLL_OFFSET))(this);
		}

		::System::Void set_ExecSyncContextCallbackCountPerPoll(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CRUNNER_SET_EXECSYNCCONTEXTCALLBACKCOUNTPERPOLL_OFFSET))(this, value);
		}

		::System::Void AddPoll(::QWER::IPollInRunner* oPollInRunner)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::IPollInRunner*))((::PBYTE)hIl2Cpp + QWER_CRUNNER_ADDPOLL_OFFSET))(this, oPollInRunner);
		}

		::System::Void RemovePoll(::QWER::IPollInRunner* oPollInRunner)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::IPollInRunner*))((::PBYTE)hIl2Cpp + QWER_CRUNNER_REMOVEPOLL_OFFSET))(this, oPollInRunner);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean HasUpdateTask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_HASUPDATETASK_OFFSET))(this);
		}

		::System::Void Poll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_POLL_OFFSET))(this);
		}

		::System::Void _Poll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER__POLL_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* Post(::System::Action* cbAction)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + QWER_CRUNNER_POST_OFFSET))(this, cbAction);
		}

		::System::Threading::Tasks::Task* Post_1(::System::Func_1<::System::Threading::Tasks::Task*>* cbAction)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Func_1<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + QWER_CRUNNER_POST_1_OFFSET))(this, cbAction);
		}

		::System::Threading::Tasks::Task* WaitForUpdate()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_WAITFORUPDATE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* WaitForLateUpdate()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER_WAITFORLATEUPDATE_OFFSET))(this);
		}
	};
}
