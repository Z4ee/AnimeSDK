#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class PooledDelegate_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PooledDelegate_1_TypeDefinitionIndex = 43078;

	template <typename T>
	class PooledDelegate_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>*)Il2CppClass::FromTypeDefinitionIndex(PooledDelegate_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>* nextNode; // 0x0
		::System::Action_1<T>* runDelegate; // 0x0
		::System::Action* continuation; // 0x0
	};
}
