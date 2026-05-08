#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CryptoStream.h"
#include "unitysdk/System/Security/Cryptography/CryptoStreamMode.h"

namespace ICSharpCode::SharpZipLib::Encryption { class ZipAESTransform; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C45CB60)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C45CF40)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45CAB0)

namespace ICSharpCode::SharpZipLib::Encryption
{
	inline static constexpr unsigned int ZipAESStream_TypeDefinitionIndex = 6668;

	class ZipAESStream : public ::System::Security::Cryptography::CryptoStream
	{
	public:
		// static const ::System::Int32 AUTH_CODE_LENGTH = 0xA; // 0x0
		// static const ::System::Int32 CRYPTO_BLOCK_SIZE = 0x10; // 0x0
		::System::IO::Stream* _stream; // 0x60
		::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform* _transform; // 0x68
		::Il2CppArray<::System::Byte>* _slideBuffer; // 0x70
		::System::Int32 _slideBufFreePos; // 0x78
		::System::Int32 _slideBufStartPos; // 0x7C
		::System::Int32 _blockAndAuth; // 0x80

		::System::Void _ctor(::System::IO::Stream* stream, ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform* transform, ::System::Security::Cryptography::CryptoStreamMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*, ::System::Security::Cryptography::CryptoStreamMode))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESSTREAM__CTOR_OFFSET))(this, stream, transform, mode);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* outBuffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESSTREAM_READ_OFFSET))(this, outBuffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}
	};
}
