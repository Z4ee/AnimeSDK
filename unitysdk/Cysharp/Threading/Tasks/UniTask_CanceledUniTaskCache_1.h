#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_CanceledUniTaskCache_1_TypeDefinitionIndex = 31868;

	template <typename T>
	class UniTask_CanceledUniTaskCache_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<T>* StaticGet_Task()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<T>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_CanceledUniTaskCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
