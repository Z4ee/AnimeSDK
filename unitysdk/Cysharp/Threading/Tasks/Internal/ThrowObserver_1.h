#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ThrowObserver_1; }
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ThrowObserver_1_TypeDefinitionIndex = 43114;

	template <typename T>
	class ThrowObserver_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::ThrowObserver_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::Internal::ThrowObserver_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ThrowObserver_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
