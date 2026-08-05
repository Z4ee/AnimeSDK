#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReaderWriter.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class SerializationContext; }
namespace System { class String; }
namespace System { class Type; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_BASEDATAWRITER_FLUSHTOSTREAM_OFFSET UNITYSDK_OFFSET(0x1F8C6C70)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1F8C6010)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1F8C6B50)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1F8C6CA0)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1F8C6C60)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1F8C6B60)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C6AC0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseDataWriter_TypeDefinitionIndex = 7418;

	class BaseDataWriter : public ::Sirenix::Serialization::BaseDataReaderWriter
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::Sirenix::Serialization::SerializationContext* context; // 0x30

		::System::Void _ctor(::System::IO::Stream* stream, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER__CTOR_OFFSET))(this, stream, context);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_STREAM_OFFSET))(this, value);
		}

		::Sirenix::Serialization::SerializationContext* get_Context()
		{
			return ((::Sirenix::Serialization::SerializationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::Sirenix::Serialization::SerializationContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void FlushToStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_FLUSHTOSTREAM_OFFSET))(this);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}
	};
}
