#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Array; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int MultiDimensionalArrayFormatter_2_TypeDefinitionIndex = 7472;

	template <typename TArray, typename TElement>
	class MultiDimensionalArrayFormatter_2 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<TArray>
	{
	public:
		// static const ::System::String* RANKS_NAME; // 0x0
		// static const ::System::Char RANKS_SEPARATOR; // 0x0
		static ::System::Int32* StaticGet_ArrayRank()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MultiDimensionalArrayFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<TElement>** StaticGet_ValueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<TElement>**)Il2CppClass::FromTypeDefinitionIndex(MultiDimensionalArrayFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
