#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

namespace Foundation
{
	inline static constexpr unsigned int ComparisonCache_1_TypeDefinitionIndex = 7861;

	template <typename T>
	class ComparisonCache_1 : public ::System::Object
	{
	public:
		static ::System::Comparison_1<T>** StaticGet_Default()
		{
			return (::System::Comparison_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ComparisonCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
