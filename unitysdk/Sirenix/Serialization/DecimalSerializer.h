#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"
#include "unitysdk/System/Decimal.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_DECIMALSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1C3F4720)
#define SIRENIX_SERIALIZATION_DECIMALSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1C3F4D60)
#define SIRENIX_SERIALIZATION_DECIMALSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F4E50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DecimalSerializer_TypeDefinitionIndex = 7409;

	class DecimalSerializer : public ::Sirenix::Serialization::Serializer_1<::System::Decimal>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DECIMALSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Decimal ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Decimal(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DECIMALSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Decimal value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Decimal, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DECIMALSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
