#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_DOUBLESERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1E511A10)
#define SIRENIX_SERIALIZATION_DOUBLESERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1E512090)
#define SIRENIX_SERIALIZATION_DOUBLESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E512180)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DoubleSerializer_TypeDefinitionIndex = 7542;

	class DoubleSerializer : public ::Sirenix::Serialization::Serializer_1<::System::Double>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DOUBLESERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Double ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Double(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DOUBLESERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Double value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DOUBLESERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
