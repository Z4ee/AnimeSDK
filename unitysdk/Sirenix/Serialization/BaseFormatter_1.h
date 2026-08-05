#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class BaseFormatter_1_SerializationCallback; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseFormatter_1_TypeDefinitionIndex = 7450;

	template <typename T>
	class BaseFormatter_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Sirenix::Serialization::BaseFormatter_1_SerializationCallback<T>*>** StaticGet_OnSerializingCallbacks()
		{
			return (::Il2CppArray<::Sirenix::Serialization::BaseFormatter_1_SerializationCallback<T>*>**)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::Sirenix::Serialization::BaseFormatter_1_SerializationCallback<T>*>** StaticGet_OnSerializedCallbacks()
		{
			return (::Il2CppArray<::Sirenix::Serialization::BaseFormatter_1_SerializationCallback<T>*>**)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::Sirenix::Serialization::BaseFormatter_1_SerializationCallback<T>*>** StaticGet_OnDeserializingCallbacks()
		{
			return (::Il2CppArray<::Sirenix::Serialization::BaseFormatter_1_SerializationCallback<T>*>**)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::Sirenix::Serialization::BaseFormatter_1_SerializationCallback<T>*>** StaticGet_OnDeserializedCallbacks()
		{
			return (::Il2CppArray<::Sirenix::Serialization::BaseFormatter_1_SerializationCallback<T>*>**)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ImplementsISerializationCallbackReceiver()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ImplementsIDeserializationCallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ImplementsIObjectReference()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
