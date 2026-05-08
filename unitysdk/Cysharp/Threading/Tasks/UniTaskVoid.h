#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CYSHARP_THREADING_TASKS_UNITASKVOID_FORGET_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskVoid_TypeDefinitionIndex = 28650;

	struct alignas(1) UniTaskVoid
	{
		::System::Void Forget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKVOID_FORGET_OFFSET))(this);
		}
	};
}
