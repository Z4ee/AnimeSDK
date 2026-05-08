#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_UINTPTRSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1C147480)
#define SIRENIX_SERIALIZATION_UINTPTRSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1C147AC0)
#define SIRENIX_SERIALIZATION_UINTPTRSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C147BD0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UIntPtrSerializer_TypeDefinitionIndex = 7425;

	class UIntPtrSerializer : public ::Sirenix::Serialization::Serializer_1<::System::UIntPtr>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINTPTRSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::UIntPtr ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::UIntPtr(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINTPTRSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::UIntPtr value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UIntPtr, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINTPTRSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
