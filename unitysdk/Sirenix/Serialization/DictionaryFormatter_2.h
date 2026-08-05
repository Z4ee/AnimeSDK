#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryFormatter_2_TypeDefinitionIndex = 7458;

	template <typename TKey, typename TValue>
	class DictionaryFormatter_2 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>
	{
	public:
		static ::System::Boolean* StaticGet_KeyIsValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DictionaryFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::IEqualityComparer_1<TKey>*>** StaticGet_EqualityComparerSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::IEqualityComparer_1<TKey>*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<TKey>** StaticGet_KeyReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<TKey>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<TValue>** StaticGet_ValueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
