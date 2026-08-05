#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_INT64SERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F917490)
#define SIRENIX_SERIALIZATION_INT64SERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1F917A80)
#define SIRENIX_SERIALIZATION_INT64SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F917B60)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Int64Serializer_TypeDefinitionIndex = 7551;

	class Int64Serializer : public ::Sirenix::Serialization::Serializer_1<::System::Int64>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT64SERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Int64 ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Int64(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT64SERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Int64 value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT64SERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
