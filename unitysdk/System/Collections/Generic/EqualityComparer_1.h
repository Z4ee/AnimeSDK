#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int EqualityComparer_1_TypeDefinitionIndex = 1542;

	template <typename T>
	class EqualityComparer_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_defaultComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EqualityComparer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
