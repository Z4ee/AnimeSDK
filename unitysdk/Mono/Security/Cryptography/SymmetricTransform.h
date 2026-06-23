#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"

namespace System::Security::Cryptography { class RandomNumberGenerator; }
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CBC_OFFSET UNITYSDK_OFFSET(0x1E547F70)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CFB_OFFSET UNITYSDK_OFFSET(0x1E548100)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x1E5484F0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CTS_OFFSET UNITYSDK_OFFSET(0x1E5484A0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E547D90)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALDECRYPT_OFFSET UNITYSDK_OFFSET(0x1E549040)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALENCRYPT_OFFSET UNITYSDK_OFFSET(0x1E548CA0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E547C70)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E547DF0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1E547DE0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1E547E00)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_KEEPLASTBLOCK_OFFSET UNITYSDK_OFFSET(0x1E548870)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1E547E10)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1E548890)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_OFB_OFFSET UNITYSDK_OFFSET(0x1E548450)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_RANDOM_OFFSET UNITYSDK_OFFSET(0x1E548A60)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E547CE0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_THROWBADPADDINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E548B30)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1E548620)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1E549360)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E547E20)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E547900)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricTransform_TypeDefinitionIndex = 2472;

	class SymmetricTransform : public ::System::Object
	{
	public:
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x10
		::Il2CppArray<::System::Byte>* temp; // 0x18
		::System::Security::Cryptography::SymmetricAlgorithm* algo; // 0x20
		::Il2CppArray<::System::Byte>* workout; // 0x28
		::Il2CppArray<::System::Byte>* temp2; // 0x30
		::Il2CppArray<::System::Byte>* workBuff; // 0x38
		::System::Int32 BlockSizeByte; // 0x40
		::System::Boolean encrypt; // 0x44
		::System::Boolean lastBlock; // 0x45
		::System::Boolean m_disposed; // 0x46
		::System::Int32 FeedBackByte; // 0x48
		::System::Security::Cryptography::PaddingMode padmode; // 0x4C

		::System::Void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, ::System::Boolean encryption, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::SymmetricAlgorithm*, ::System::Boolean, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM__CTOR_OFFSET))(this, symmAlgo, encryption, rgbIV);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALIZE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANREUSETRANSFORM_OFFSET))(this);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Void Transform(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORM_OFFSET))(this, input, output);
		}

		::System::Void CBC(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CBC_OFFSET))(this, input, output);
		}

		::System::Void CFB(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CFB_OFFSET))(this, input, output);
		}

		::System::Void OFB(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_OFB_OFFSET))(this, input, output);
		}

		::System::Void CTS(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CTS_OFFSET))(this, input, output);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CHECKINPUT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::System::Boolean get_KeepLastBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_KEEPLASTBLOCK_OFFSET))(this);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_INTERNALTRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::System::Void Random(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_RANDOM_OFFSET))(this, buffer, start, length);
		}

		::System::Void ThrowBadPaddingException(::System::Security::Cryptography::PaddingMode padding, ::System::Int32 length, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_THROWBADPADDINGEXCEPTION_OFFSET))(this, padding, length, position);
		}

		::Il2CppArray<::System::Byte>* FinalEncrypt(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALENCRYPT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::Il2CppArray<::System::Byte>* FinalDecrypt(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALDECRYPT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}
	};
}
