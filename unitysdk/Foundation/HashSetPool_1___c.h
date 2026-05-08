#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class HashSetPool_1___c; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Foundation
{
	inline static constexpr unsigned int HashSetPool_1___c_TypeDefinitionIndex = 7920;

	template <typename T>
	class HashSetPool_1___c : public ::System::Object
	{
	public:
		static ::Foundation::HashSetPool_1___c<T>** StaticGet___9()
		{
			return (::Foundation::HashSetPool_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(HashSetPool_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
