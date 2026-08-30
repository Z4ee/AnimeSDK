#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class CancellationTokenSource; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Publish_1_ConnectDisposable_TypeDefinitionIndex = 44396;

	template <typename TSource>
	class Publish_1_ConnectDisposable : public ::System::Object
	{
	public:
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x0
	};
}
