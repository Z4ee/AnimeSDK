#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_SBYTESERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1FB98490)
#define SIRENIX_SERIALIZATION_SBYTESERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1FB98A80)
#define SIRENIX_SERIALIZATION_SBYTESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB98B60)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SByteSerializer_TypeDefinitionIndex = 7553;

	class SByteSerializer : public ::Sirenix::Serialization::Serializer_1<::System::SByte>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SBYTESERIALIZER__CTOR_OFFSET))(this);
		}

		::System::SByte ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::SByte(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SBYTESERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::SByte value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::SByte, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SBYTESERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
