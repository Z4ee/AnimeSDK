#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class EmptyObserver_1; }
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int EmptyObserver_1_TypeDefinitionIndex = 43113;

	template <typename T>
	class EmptyObserver_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::EmptyObserver_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::Internal::EmptyObserver_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyObserver_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
