#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace Sirenix::Serialization::Utilities { template <typename T1, typename T2, typename T3> class DoubleLookupDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DoubleLookupDictionaryFormatter_3_TypeDefinitionIndex = 7455;

	template <typename TPrimary, typename TSecondary, typename TValue>
	class DoubleLookupDictionaryFormatter_3 : public ::Sirenix::Serialization::BaseFormatter_1<::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<TPrimary, TSecondary, TValue>*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<TPrimary>** StaticGet_PrimaryReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<TPrimary>**)Il2CppClass::FromTypeDefinitionIndex(DoubleLookupDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<TSecondary, TValue>*>** StaticGet_InnerReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<TSecondary, TValue>*>**)Il2CppClass::FromTypeDefinitionIndex(DoubleLookupDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
