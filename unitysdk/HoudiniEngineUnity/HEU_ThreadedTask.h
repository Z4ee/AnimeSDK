#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/ThreadPriority.h"

namespace System { class String; }
namespace System::Threading { class Thread; }

#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_ABORT_OFFSET UNITYSDK_OFFSET(0x849D2D0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_CLEANUP_OFFSET UNITYSDK_OFFSET(0x849D920)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_DOWORK_OFFSET UNITYSDK_OFFSET(0x849D8F0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x849C850)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x849DA20)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x849D170)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x849DA00)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_STOPREQUESTED_OFFSET UNITYSDK_OFFSET(0x849D840)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_TASKNAME_OFFSET UNITYSDK_OFFSET(0x849D9F0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x849D900)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x849D910)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_RESET_OFFSET UNITYSDK_OFFSET(0x849D320)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_RUN_OFFSET UNITYSDK_OFFSET(0x849D930)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x849CE50)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x849DA30)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x849CF00)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x849DA10)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_STOPREQUESTED_OFFSET UNITYSDK_OFFSET(0x849D220)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_START_OFFSET UNITYSDK_OFFSET(0x849CAE0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_STOP_OFFSET UNITYSDK_OFFSET(0x849CFB0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_UPDATE_OFFSET UNITYSDK_OFFSET(0x849D5D0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x849DA40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTask_TypeDefinitionIndex = 37795;

	class HEU_ThreadedTask : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::Object* _lockHandle; // 0x18
		::System::Threading::Thread* _thread; // 0x20
		::System::Boolean _isComplete; // 0x28
		::System::Boolean _isActive; // 0x29
		::System::Boolean _stopRequested; // 0x2A
		::System::Boolean _isBackground; // 0x2B
		::System::Threading::ThreadPriority _priority; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_STOP_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_ABORT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_UPDATE_OFFSET))(this);
		}

		::System::Void DoWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_DOWORK_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void OnStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_ONSTOPPED_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_CLEANUP_OFFSET))(this);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_RUN_OFFSET))(this);
		}

		::System::String* get_TaskName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_TASKNAME_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void set_IsComplete(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISCOMPLETE_OFFSET))(this, value);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_StopRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_STOPREQUESTED_OFFSET))(this);
		}

		::System::Void set_StopRequested(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_STOPREQUESTED_OFFSET))(this, value);
		}

		::System::Threading::ThreadPriority get_Priority()
		{
			return ((::System::Threading::ThreadPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Threading::ThreadPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPriority))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISBACKGROUND_OFFSET))(this);
		}

		::System::Void set_IsBackground(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISBACKGROUND_OFFSET))(this, value);
		}
	};
}
