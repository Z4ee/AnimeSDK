#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_STRINGSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1FA7F360)
#define SIRENIX_SERIALIZATION_STRINGSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1FA7FC30)
#define SIRENIX_SERIALIZATION_STRINGSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA7FDB0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int StringSerializer_TypeDefinitionIndex = 7557;

	class StringSerializer : public ::Sirenix::Serialization::Serializer_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_STRINGSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::String* ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::String*(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_STRINGSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::String* value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_STRINGSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
