#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ImmutableList_1; }
namespace System { class Exception; }
namespace System { template <typename T> class IObserver_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ListObserver_1_TypeDefinitionIndex = 43112;

	template <typename T>
	class ListObserver_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>* _observers; // 0x0
	};
}
