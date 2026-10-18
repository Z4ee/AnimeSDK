#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F0EBAA0)
#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F0EBA20)
#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0EBA10)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ExceptionHolder_TypeDefinitionIndex = 38392;

	class ExceptionHolder : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x10
		::System::Boolean calledGet; // 0x18

		::System::Void _ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER__CTOR_OFFSET))(this, a1);
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
