#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class AsyncSubject_1; }
namespace System { template <typename T> class IObserver_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int AsyncSubject_1_Subscription_TypeDefinitionIndex = 43111;

	template <typename T>
	class AsyncSubject_1_Subscription : public ::System::Object
	{
	public:
		::System::Object* gate; // 0x0
		::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>* parent; // 0x0
		::System::IObserver_1<T>* unsubscribeTarget; // 0x0
	};
}
