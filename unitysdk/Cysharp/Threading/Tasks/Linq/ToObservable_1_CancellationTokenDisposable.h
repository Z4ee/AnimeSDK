#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Threading { class CancellationTokenSource; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToObservable_1_CancellationTokenDisposable_TypeDefinitionIndex = 44561;

	template <typename T>
	class ToObservable_1_CancellationTokenDisposable : public ::System::Object
	{
	public:
		::System::Threading::CancellationTokenSource* cts; // 0x0
	};
}
