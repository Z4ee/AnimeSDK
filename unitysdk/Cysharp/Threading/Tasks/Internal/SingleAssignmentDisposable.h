#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }

#define CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D74F8F0)
#define CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE_GET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1D74F660)
#define CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1D74F5B0)
#define CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE_SET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1D74F670)
#define CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74FAA0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int SingleAssignmentDisposable_TypeDefinitionIndex = 43109;

	class SingleAssignmentDisposable : public ::System::Object
	{
	public:
		::System::Object* gate; // 0x10
		::System::IDisposable* current; // 0x18
		::System::Boolean disposed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::IDisposable* get_Disposable()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE_GET_DISPOSABLE_OFFSET))(this);
		}

		::System::Void set_Disposable(::System::IDisposable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE_SET_DISPOSABLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_SINGLEASSIGNMENTDISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
