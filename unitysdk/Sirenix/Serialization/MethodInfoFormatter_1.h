#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int MethodInfoFormatter_1_TypeDefinitionIndex = 7469;

	template <typename T>
	class MethodInfoFormatter_1 : public ::Sirenix::Serialization::BaseFormatter_1<T>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_StringSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MethodInfoFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_TypeSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(MethodInfoFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Type*>*>** StaticGet_TypeArraySerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Type*>*>**)Il2CppClass::FromTypeDefinitionIndex(MethodInfoFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
