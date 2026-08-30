#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Empty_1__Empty_TypeDefinitionIndex = 44218;

	template <typename T>
	class Empty_1__Empty : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Empty_1__Empty_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
