#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ThreeDimensionalArrayFormatter_1_TypeDefinitionIndex = 7477;

	template <typename T>
	class ThreeDimensionalArrayFormatter_1 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::Il2CppArray<T>*>
	{
	public:
		// static const ::System::String* RANKS_NAME; // 0x0
		// static const ::System::Char RANKS_SEPARATOR; // 0x0
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_ValueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ThreeDimensionalArrayFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Text::StringBuilder** StaticGet_StrBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(ThreeDimensionalArrayFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
