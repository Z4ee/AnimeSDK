#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_UINT16SERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F91CCE0)
#define SIRENIX_SERIALIZATION_UINT16SERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1F91D2D0)
#define SIRENIX_SERIALIZATION_UINT16SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F91D3B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UInt16Serializer_TypeDefinitionIndex = 7558;

	class UInt16Serializer : public ::Sirenix::Serialization::Serializer_1<::System::UInt16>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT16SERIALIZER__CTOR_OFFSET))(this);
		}

		::System::UInt16 ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::UInt16(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT16SERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::UInt16 value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINT16SERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
