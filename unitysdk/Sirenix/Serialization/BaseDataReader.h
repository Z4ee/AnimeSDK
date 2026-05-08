#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReaderWriter.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class String; }
namespace System { class Type; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_BASEDATAREADER_ENTERNODE_OFFSET UNITYSDK_OFFSET(0x1C505810)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1C505760)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODEDEPTH_OFFSET UNITYSDK_OFFSET(0x1C5055F0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODEID_OFFSET UNITYSDK_OFFSET(0x1C505550)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODENAME_OFFSET UNITYSDK_OFFSET(0x1C505600)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1C5056A0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1C5063E0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1C505800)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1C5056B0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_SKIPENTRY_OFFSET UNITYSDK_OFFSET(0x1C505840)
#define SIRENIX_SERIALIZATION_BASEDATAREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5054C0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseDataReader_TypeDefinitionIndex = 7281;

	class BaseDataReader : public ::Sirenix::Serialization::BaseDataReaderWriter
	{
	public:
		::Sirenix::Serialization::DeserializationContext* context; // 0x28
		::System::IO::Stream* stream; // 0x30

		::System::Void _ctor(::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER__CTOR_OFFSET))(this, stream, context);
		}

		::System::Int32 get_CurrentNodeId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODEID_OFFSET))(this);
		}

		::System::Int32 get_CurrentNodeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODEDEPTH_OFFSET))(this);
		}

		::Sirenix::Serialization::BufferedString get_CurrentNodeName()
		{
			return ((::Sirenix::Serialization::BufferedString(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODENAME_OFFSET))(this);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_SET_STREAM_OFFSET))(this, value);
		}

		::Sirenix::Serialization::DeserializationContext* get_Context()
		{
			return ((::Sirenix::Serialization::DeserializationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::Sirenix::Serialization::DeserializationContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Boolean EnterNode(::System::Type*& type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_ENTERNODE_OFFSET))(this, type);
		}

		::System::Void SkipEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_SKIPENTRY_OFFSET))(this);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}
	};
}
