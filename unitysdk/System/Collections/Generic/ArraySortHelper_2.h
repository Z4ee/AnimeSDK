#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class ArraySortHelper_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ArraySortHelper_2_TypeDefinitionIndex = 1526;

	template <typename TKey, typename TValue>
	class ArraySortHelper_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>** StaticGet_s_defaultArraySortHelper()
		{
			return (::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ArraySortHelper_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
