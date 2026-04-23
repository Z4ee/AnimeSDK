#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ThreadDispatcher_MainThreadDispatcher; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_THREADDISPATCHER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17635B50)
#define MIHOYO_SDK_THREADDISPATCHER_RUNASYNC_1_OFFSET UNITYSDK_OFFSET(0x1765DDB0)
#define MIHOYO_SDK_THREADDISPATCHER_RUNASYNC_OFFSET UNITYSDK_OFFSET(0x1765DD10)
#define MIHOYO_SDK_THREADDISPATCHER_RUNONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x17635C60)
#define MIHOYO_SDK_THREADDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1765DC40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadDispatcher_TypeDefinitionIndex = 7070;

	class ThreadDispatcher : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ThreadDispatcher** StaticGet__instance()
		{
			return (::MiHoYo::SDK::ThreadDispatcher**)Il2CppClass::FromTypeDefinitionIndex(ThreadDispatcher_TypeDefinitionIndex)->GetStaticField(0x238E0);
		}
		::MiHoYo::SDK::ThreadDispatcher_MainThreadDispatcher* mainThreadDispatcher; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::ThreadDispatcher* get_Instance()
		{
			return ((::MiHoYo::SDK::ThreadDispatcher*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER_GET_INSTANCE_OFFSET))();
		}

		::System::Void RunAsync(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER_RUNASYNC_OFFSET))(this, action);
		}

		::System::Void RunAsync_1(::System::Action_1<::System::Object*>* action, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER_RUNASYNC_1_OFFSET))(this, action, state);
		}

		::System::Void RunOnMainThread(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER_RUNONMAINTHREAD_OFFSET))(this, action);
		}
	};
}
