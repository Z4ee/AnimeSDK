#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE_GETASYNCENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE51880)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE51870)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int EveryUpdate_TypeDefinitionIndex = 44573;

	class EveryUpdate : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::PlayerLoopTiming updateTiming; // 0x10
		::System::Boolean cancelImmediately; // 0x14

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__CTOR_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* GetAsyncEnumerator(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE_GETASYNCENUMERATOR_OFFSET))(this, a1);
		}
	};
}
