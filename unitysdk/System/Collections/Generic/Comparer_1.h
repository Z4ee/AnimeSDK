#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class Comparer_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Comparer_1_TypeDefinitionIndex = 1537;

	template <typename T>
	class Comparer_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Comparer_1<T>** StaticGet_defaultComparer()
		{
			return (::System::Collections::Generic::Comparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Comparer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
