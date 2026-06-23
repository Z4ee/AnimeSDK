#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReaderWriter.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class SerializationContext; }
namespace System { class String; }
namespace System { class Type; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_BASEDATAWRITER_FLUSHTOSTREAM_OFFSET UNITYSDK_OFFSET(0x1E480460)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E47F800)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1E480340)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1E480490)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E480450)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1E480350)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4802B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseDataWriter_TypeDefinitionIndex = 7414;

	class BaseDataWriter : public ::Sirenix::Serialization::BaseDataReaderWriter
	{
	public:
		::Sirenix::Serialization::SerializationContext* context; // 0x28
		::System::IO::Stream* stream; // 0x30

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
