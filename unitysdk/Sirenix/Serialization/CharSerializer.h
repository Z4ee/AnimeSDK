#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_CHARSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1B0FD600)
#define SIRENIX_SERIALIZATION_CHARSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1B0FDBF0)
#define SIRENIX_SERIALIZATION_CHARSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FDCD0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int CharSerializer_TypeDefinitionIndex = 7407;

	class CharSerializer : public ::Sirenix::Serialization::Serializer_1<::System::Char>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CHARSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Char ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Char(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CHARSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Char value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CHARSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
