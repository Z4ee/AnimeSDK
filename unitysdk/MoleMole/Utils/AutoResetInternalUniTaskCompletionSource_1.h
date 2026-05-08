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
	inline static constexpr unsigned int AutoResetInternalUniTaskCompletionSource_1_TypeDefinitionIndex = 41585;

	template <typename T>
	class AutoResetInternalUniTaskCompletionSource_1 : public ::System::Object
	{
	public:
		::MoleMole::Utils::TypeErasedCompletionSourceImpl_1<T> _impl; // 0x0
	};
}
