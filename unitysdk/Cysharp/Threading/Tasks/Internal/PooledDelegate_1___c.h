#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class PooledDelegate_1___c; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PooledDelegate_1___c_TypeDefinitionIndex = 43079;

	template <typename T>
	class PooledDelegate_1___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(PooledDelegate_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
