#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_LINQ_CANCELLATIONTOKENDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EA36570)
#define CYSHARP_THREADING_TASKS_LINQ_CANCELLATIONTOKENDISPOSABLE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1EA364E0)
#define CYSHARP_THREADING_TASKS_LINQ_CANCELLATIONTOKENDISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA365B0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int CancellationTokenDisposable_TypeDefinitionIndex = 44461;

	class CancellationTokenDisposable : public ::System::Object
	{
	public:
		::System::Threading::CancellationTokenSource* cts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_CANCELLATIONTOKENDISPOSABLE__CTOR_OFFSET))(this);
		}

		::System::Threading::CancellationToken get_Token()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_CANCELLATIONTOKENDISPOSABLE_GET_TOKEN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_CANCELLATIONTOKENDISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
