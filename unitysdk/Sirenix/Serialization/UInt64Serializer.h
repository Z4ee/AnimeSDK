#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_UINT64SERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F4593F0)
#define SIRENIX_SERIALIZATION_UINT64SERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1F4599E0)
#define SIRENIX_SERIALIZATION_UINT64SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F459AC0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UInt64Serializer_TypeDefinitionIndex = 7560;

	class UInt64Serializer : public ::Sirenix::Serialization::Serializer_1<::System::UInt64>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT64SERIALIZER__CTOR_OFFSET))(this);
		}

		::System::UInt64 ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::UInt64(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT64SERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::UInt64 value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT64SERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
