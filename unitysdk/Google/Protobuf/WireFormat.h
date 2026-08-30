#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/WireFormat_WireType.h"
#include "unitysdk/System/Object.h"

#define GOOGLE_PROTOBUF_WIREFORMAT_GETTAGFIELDNUMBER_OFFSET UNITYSDK_OFFSET(0x1DBBBBC0)
#define GOOGLE_PROTOBUF_WIREFORMAT_GETTAGWIRETYPE_OFFSET UNITYSDK_OFFSET(0x1DBBBBD0)
#define GOOGLE_PROTOBUF_WIREFORMAT_MAKETAG_OFFSET UNITYSDK_OFFSET(0x1DBBBBE0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int WireFormat_TypeDefinitionIndex = 5408;

	class WireFormat : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WireFormat_WireType GetTagWireType(::System::UInt32 a1)
		{
			return ((::Google::Protobuf::WireFormat_WireType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WIREFORMAT_GETTAGWIRETYPE_OFFSET))(a1);
		}

		static ::System::Int32 GetTagFieldNumber(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WIREFORMAT_GETTAGFIELDNUMBER_OFFSET))(a1);
		}

		static ::System::UInt32 MakeTag(::System::Int32 a1, ::Google::Protobuf::WireFormat_WireType a2)
		{
			return ((::System::UInt32(*)(::System::Int32, ::Google::Protobuf::WireFormat_WireType))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WIREFORMAT_MAKETAG_OFFSET))(a1, a2);
		}
	};
}
