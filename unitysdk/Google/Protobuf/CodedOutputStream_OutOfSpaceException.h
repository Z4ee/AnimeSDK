#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"

#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_OUTOFSPACEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3510D0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int CodedOutputStream_OutOfSpaceException_TypeDefinitionIndex = 5363;

	class CodedOutputStream_OutOfSpaceException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_OUTOFSPACEEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
