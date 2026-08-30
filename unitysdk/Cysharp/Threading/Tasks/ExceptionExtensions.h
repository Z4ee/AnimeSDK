#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define CYSHARP_THREADING_TASKS_EXCEPTIONEXTENSIONS_ISOPERATIONCANCELEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA51A10)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ExceptionExtensions_TypeDefinitionIndex = 42575;

	class ExceptionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsOperationCanceledException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONEXTENSIONS_ISOPERATIONCANCELEDEXCEPTION_OFFSET))(a1);
		}
	};
}
