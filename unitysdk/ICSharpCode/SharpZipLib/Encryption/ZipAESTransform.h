#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class HMACSHA1; }
namespace System::Security::Cryptography { class ICryptoTransform; }

#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED0E650)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GETAUTHCODE_OFFSET UNITYSDK_OFFSET(0x1ED0E540)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1ED0E640)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1ED0E630)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1ED0E610)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1ED0E620)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_PWDVERIFIER_OFFSET UNITYSDK_OFFSET(0x1ED0E530)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1ED0E240)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1ED0E5C0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED0DE20)

namespace ICSharpCode::SharpZipLib::Encryption
{
	inline static constexpr unsigned int ZipAESTransform_TypeDefinitionIndex = 6804;

	class ZipAESTransform : public ::System::Object
	{
	public:
		// static const ::System::Int32 PWD_VER_LENGTH = 0x2; // 0x0
		// static const ::System::Int32 KEY_ROUNDS = 0x3E8; // 0x0
		// static const ::System::Int32 ENCRYPT_BLOCK = 0x10; // 0x0
		::System::Security::Cryptography::ICryptoTransform* _encryptor; // 0x10
		::System::Security::Cryptography::HMACSHA1* _hmacsha1; // 0x18
		::Il2CppArray<::System::Byte>* _encryptBuffer; // 0x20
		::Il2CppArray<::System::Byte>* _pwdVerifier; // 0x28
		::Il2CppArray<::System::Byte>* _counterNonce; // 0x30
		::System::Int32 _blockSize; // 0x38
		::System::Boolean _finalised; // 0x3C
		::System::Boolean _writeMode; // 0x3D
		::System::Int32 _encrPos; // 0x40

		::System::Void _ctor(::System::String* key, ::Il2CppArray<::System::Byte>* saltBytes, ::System::Int32 blockSize, ::System::Boolean writeMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM__CTOR_OFFSET))(this, key, saltBytes, blockSize, writeMode);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_TRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::Il2CppArray<::System::Byte>* get_PwdVerifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_PWDVERIFIER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetAuthCode()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GETAUTHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_GET_CANREUSETRANSFORM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_ZIPAESTRANSFORM_DISPOSE_OFFSET))(this);
		}
	};
}
