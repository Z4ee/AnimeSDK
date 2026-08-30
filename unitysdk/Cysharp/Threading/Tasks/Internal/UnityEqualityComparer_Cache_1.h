#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_Cache_1_TypeDefinitionIndex = 43090;

	template <typename T>
	class UnityEqualityComparer_Cache_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<T>** StaticGet_Comparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_Cache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
