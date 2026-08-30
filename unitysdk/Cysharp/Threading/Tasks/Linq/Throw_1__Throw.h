#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Exception; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Throw_1__Throw_TypeDefinitionIndex = 44533;

	template <typename TValue>
	class Throw_1__Throw : public ::System::Object
	{
	public:
		::System::Exception* exception; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
