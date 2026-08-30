#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

#define CYSHARP_THREADING_TASKS_LINQ_RANGE_GETASYNCENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE5E6E0)
#define CYSHARP_THREADING_TASKS_LINQ_RANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5E6D0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Range_TypeDefinitionIndex = 44403;

	class Range : public ::System::Object
	{
	public:
		::System::Int32 start; // 0x10
		::System::Int32 end; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_RANGE__CTOR_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Int32>* GetAsyncEnumerator(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_RANGE_GETASYNCENUMERATOR_OFFSET))(this, a1);
		}
	};
}
