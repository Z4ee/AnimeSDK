#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class ExecutionEngineException; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SIRENIX_SERIALIZATION_SERIALIZER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E737540)
#define SIRENIX_SERIALIZATION_SERIALIZER_FIREONSERIALIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E7371A0)
#define SIRENIX_SERIALIZATION_SERIALIZER_GETFORVALUE_OFFSET UNITYSDK_OFFSET(0x1E7371B0)
#define SIRENIX_SERIALIZATION_SERIALIZER_GET_OFFSET UNITYSDK_OFFSET(0x1E737230)
#define SIRENIX_SERIALIZATION_SERIALIZER_LOGAOTERROR_OFFSET UNITYSDK_OFFSET(0x1E737DA0)
#define SIRENIX_SERIALIZATION_SERIALIZER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1E737A70)
#define SIRENIX_SERIALIZATION_SERIALIZER_WRITEVALUEWEAK_OFFSET UNITYSDK_OFFSET(0x1E737D70)
#define SIRENIX_SERIALIZATION_SERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E737EE0)
#define SIRENIX_SERIALIZATION_SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E737ED0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Serializer_TypeDefinitionIndex = 7550;

	class Serializer : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Serializer_TypeDefinitionIndex)->GetStaticField(0x6380);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>** StaticGet_PrimitiveReaderWriterTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Serializer_TypeDefinitionIndex)->GetStaticField(0x6388);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Sirenix::Serialization::Serializer*>** StaticGet_ReaderWriterCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Sirenix::Serialization::Serializer*>**)Il2CppClass::FromTypeDefinitionIndex(Serializer_TypeDefinitionIndex)->GetStaticField(0x6390);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER__CCTOR_OFFSET))();
		}

		static ::System::Void FireOnSerializedType(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER_FIREONSERIALIZEDTYPE_OFFSET))(type);
		}

		static ::Sirenix::Serialization::Serializer* GetForValue(::System::Object* value)
		{
			return ((::Sirenix::Serialization::Serializer*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER_GETFORVALUE_OFFSET))(value);
		}

		static ::Sirenix::Serialization::Serializer* Get(::System::Type* type)
		{
			return ((::Sirenix::Serialization::Serializer*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER_GET_OFFSET))(type);
		}

		static ::System::Void Register(::System::Type* type, ::Sirenix::Serialization::Serializer* serializer)
		{
			return ((::System::Void(*)(::System::Type*, ::Sirenix::Serialization::Serializer*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER_REGISTER_OFFSET))(type, serializer);
		}

		::System::Void WriteValueWeak(::System::Object* value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER_WRITEVALUEWEAK_OFFSET))(this, value, writer);
		}

		static ::Sirenix::Serialization::Serializer* Create(::System::Type* type)
		{
			return ((::Sirenix::Serialization::Serializer*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER_CREATE_OFFSET))(type);
		}

		static ::System::Void LogAOTError(::System::Type* type, ::System::ExecutionEngineException* ex)
		{
			return ((::System::Void(*)(::System::Type*, ::System::ExecutionEngineException*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZER_LOGAOTERROR_OFFSET))(type, ex);
		}
	};
}
