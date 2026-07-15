#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"

#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_OUTOFSPACEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19699FE0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int CodedOutputStream_OutOfSpaceException_TypeDefinitionIndex = 34277;

	class CodedOutputStream_OutOfSpaceException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_OUTOFSPACEEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
