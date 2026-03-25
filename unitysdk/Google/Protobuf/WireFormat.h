#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/WireFormat_WireType.h"
#include "unitysdk/System/Object.h"

#define GOOGLE_PROTOBUF_WIREFORMAT_GETTAGFIELDNUMBER_OFFSET UNITYSDK_OFFSET(0x15B292B0)
#define GOOGLE_PROTOBUF_WIREFORMAT_GETTAGWIRETYPE_OFFSET UNITYSDK_OFFSET(0x15B292C0)
#define GOOGLE_PROTOBUF_WIREFORMAT_MAKETAG_OFFSET UNITYSDK_OFFSET(0x15B292D0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int WireFormat_TypeDefinitionIndex = 6202;

	class WireFormat : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WireFormat_WireType GetTagWireType(::System::UInt32 tag)
		{
			return ((::Google::Protobuf::WireFormat_WireType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WIREFORMAT_GETTAGWIRETYPE_OFFSET))(tag);
		}

		static ::System::Int32 GetTagFieldNumber(::System::UInt32 tag)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WIREFORMAT_GETTAGFIELDNUMBER_OFFSET))(tag);
		}

		static ::System::UInt32 MakeTag(::System::Int32 fieldNumber, ::Google::Protobuf::WireFormat_WireType wireType)
		{
			return ((::System::UInt32(*)(::System::Int32, ::Google::Protobuf::WireFormat_WireType))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WIREFORMAT_MAKETAG_OFFSET))(fieldNumber, wireType);
		}
	};
}
