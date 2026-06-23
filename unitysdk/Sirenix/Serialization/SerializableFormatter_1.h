#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class ReflectionFormatter_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializableFormatter_1_TypeDefinitionIndex = 7485;

	template <typename T>
	class SerializableFormatter_1 : public ::Sirenix::Serialization::BaseFormatter_1<T>
	{
	public:
		static ::System::Func_3<::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, T>** StaticGet_ISerializableConstructor()
		{
			return (::System::Func_3<::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, T>**)Il2CppClass::FromTypeDefinitionIndex(SerializableFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::ReflectionFormatter_1<T>** StaticGet_ReflectionFormatter()
		{
			return (::Sirenix::Serialization::ReflectionFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(SerializableFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
