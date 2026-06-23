#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { template <typename T> class DictionaryKeyUtility_KeyComparer_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryKeyUtility_KeyComparer_1_TypeDefinitionIndex = 7562;

	template <typename T>
	class DictionaryKeyUtility_KeyComparer_1 : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::DictionaryKeyUtility_KeyComparer_1<T>** StaticGet_Default()
		{
			return (::Sirenix::Serialization::DictionaryKeyUtility_KeyComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_KeyComparer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::IComparer_1<T>* actualComparer; // 0x0
	};
}
