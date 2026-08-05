#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/MoleMole/Utils/TypeErasedCompletionSourceImpl_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Exception; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int InternalUniTaskCompletionSource_1_TypeDefinitionIndex = 73094;

	template <typename T>
	class InternalUniTaskCompletionSource_1 : public ::System::Object
	{
	public:
		::MoleMole::Utils::TypeErasedCompletionSourceImpl_1<T> _impl; // 0x0
	};
}
