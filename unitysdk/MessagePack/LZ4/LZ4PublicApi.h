#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_LZ4_LZ4PUBLICAPI_DECODE_OFFSET UNITYSDK_OFFSET(0x1A1F8730)
#define MESSAGEPACK_LZ4_LZ4PUBLICAPI_ENCODE_OFFSET UNITYSDK_OFFSET(0x1A1F8670)

namespace MessagePack::LZ4
{
	inline static constexpr unsigned int LZ4PublicApi_TypeDefinitionIndex = 27447;

	class LZ4PublicApi : public ::System::Object
	{
	public:
		static ::System::Int32 Encode(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4PUBLICAPI_ENCODE_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}

		static ::System::Int32 Decode(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4PUBLICAPI_DECODE_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}
	};
}
