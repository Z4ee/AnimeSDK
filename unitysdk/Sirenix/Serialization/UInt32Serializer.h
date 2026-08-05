#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_UINT32SERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1E8EFD70)
#define SIRENIX_SERIALIZATION_UINT32SERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1E8F0360)
#define SIRENIX_SERIALIZATION_UINT32SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F0440)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UInt32Serializer_TypeDefinitionIndex = 7559;

	class UInt32Serializer : public ::Sirenix::Serialization::Serializer_1<::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT32SERIALIZER__CTOR_OFFSET))(this);
		}

		::System::UInt32 ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::UInt32(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT32SERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::UInt32 value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT32SERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
