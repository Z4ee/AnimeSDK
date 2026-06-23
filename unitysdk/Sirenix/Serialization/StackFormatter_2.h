#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int StackFormatter_2_TypeDefinitionIndex = 7487;

	template <typename TStack, typename TValue>
	class StackFormatter_2 : public ::Sirenix::Serialization::BaseFormatter_1<TStack>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<TValue>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(StackFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_List_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(StackFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<TValue>** StaticGet_List()
		{
			return (::System::Collections::Generic::List_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(StackFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsPlainStack()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StackFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
