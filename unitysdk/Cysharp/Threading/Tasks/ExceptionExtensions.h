#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define CYSHARP_THREADING_TASKS_EXCEPTIONEXTENSIONS_ISOPERATIONCANCELEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F0EB9C0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ExceptionExtensions_TypeDefinitionIndex = 38160;

	class ExceptionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsOperationCanceledException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONEXTENSIONS_ISOPERATIONCANCELEDEXCEPTION_OFFSET))(a1);
		}
	};
}
