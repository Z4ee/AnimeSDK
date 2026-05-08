#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLATBUFFERS_FLATBUFFERCONSTANTS_FLATBUFFERS_2_0_0_OFFSET UNITYSDK_OFFSET(0x1BEDA0D0)

namespace FlatBuffers
{
	inline static constexpr unsigned int FlatBufferConstants_TypeDefinitionIndex = 8741;

	class FlatBufferConstants : public ::System::Object
	{
	public:
		// static const ::System::Int32 FileIdentifierLength = 0x4; // 0x0
		// static const ::System::Int32 SizePrefixLength = 0x4; // 0x0

		static ::System::Void FLATBUFFERS_2_0_0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERCONSTANTS_FLATBUFFERS_2_0_0_OFFSET))();
		}
	};
}
