#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ImmutableList_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ImmutableList_1_TypeDefinitionIndex = 43116;

	template <typename T>
	class ImmutableList_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>** StaticGet_Empty()
		{
			return (::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* data; // 0x0
	};
}
