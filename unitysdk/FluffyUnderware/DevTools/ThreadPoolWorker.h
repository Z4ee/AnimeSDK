#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace FluffyUnderware::DevTools { class QueuedCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitCallback; }

#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D69FDD0)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_DONEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1D69FBD0)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_HANDLEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1D69FCE0)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_1_OFFSET UNITYSDK_OFFSET(0x1D69F710)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_2_OFFSET UNITYSDK_OFFSET(0x1D69F7E0)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_3_OFFSET UNITYSDK_OFFSET(0x1D69F6A0)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_4_OFFSET UNITYSDK_OFFSET(0x1D69F720)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1D69F630)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x1D69F900)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_WAITALL_1_OFFSET UNITYSDK_OFFSET(0x1D69FB80)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_WAITALL_2_OFFSET UNITYSDK_OFFSET(0x1D69F9B0)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_WAITALL_OFFSET UNITYSDK_OFFSET(0x1D69F9A0)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69FE00)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ThreadPoolWorker_TypeDefinitionIndex = 28378;

	class ThreadPoolWorker : public ::System::Object
	{
	public:
		::System::Threading::ManualResetEvent* _done; // 0x10
		::System::Int32 _remainingWorkItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER__CTOR_OFFSET))(this);
		}

		::System::Void QueueWorkItem(::System::Threading::WaitCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::WaitCallback*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_OFFSET))(this, callback);
		}

		::System::Void QueueWorkItem_1(::System::Action* act)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_1_OFFSET))(this, act);
		}

		::System::Void QueueWorkItem_2(::FluffyUnderware::DevTools::QueuedCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::QueuedCallback*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_2_OFFSET))(this, callback);
		}

		::System::Void QueueWorkItem_3(::System::Threading::WaitCallback* callback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::WaitCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_3_OFFSET))(this, callback, state);
		}

		::System::Void QueueWorkItem_4(::System::Action* act, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_QUEUEWORKITEM_4_OFFSET))(this, act, state);
		}

		::System::Boolean WaitAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_WAITALL_OFFSET))(this);
		}

		::System::Boolean WaitAll_1(::System::TimeSpan timeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_WAITALL_1_OFFSET))(this, timeout, exitContext);
		}

		::System::Boolean WaitAll_2(::System::Int32 millisecondsTimeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_WAITALL_2_OFFSET))(this, millisecondsTimeout, exitContext);
		}

		::System::Void HandleWorkItem(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_HANDLEWORKITEM_OFFSET))(this, state);
		}

		::System::Void DoneWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_DONEWORKITEM_OFFSET))(this);
		}

		::System::Void ThrowIfDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_THROWIFDISPOSED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER_DISPOSE_OFFSET))(this);
		}
	};
}
