#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ListPool_1___c; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int ListPool_1___c_TypeDefinitionIndex = 7994;

	template <typename T>
	class ListPool_1___c : public ::System::Object
	{
	public:
		static ::Foundation::ListPool_1___c<T>** StaticGet___9()
		{
			return (::Foundation::ListPool_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(ListPool_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
