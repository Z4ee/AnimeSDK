#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FC0FAE0)
#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1FC0FA30)
#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0FA20)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ExceptionHolder_TypeDefinitionIndex = 31901;

	class ExceptionHolder : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x10
		::System::Boolean calledGet; // 0x18

		::System::Void _ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER__CTOR_OFFSET))(this, exception);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetException()
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_GETEXCEPTION_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_FINALIZE_OFFSET))(this);
		}
	};
}
