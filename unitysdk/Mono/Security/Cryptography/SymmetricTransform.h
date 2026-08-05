#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"

namespace System::Security::Cryptography { class RandomNumberGenerator; }
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CBC_OFFSET UNITYSDK_OFFSET(0x1F938190)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CFB_OFFSET UNITYSDK_OFFSET(0x1F938330)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x1F938730)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CTS_OFFSET UNITYSDK_OFFSET(0x1F9386E0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F937FC0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALDECRYPT_OFFSET UNITYSDK_OFFSET(0x1F939290)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALENCRYPT_OFFSET UNITYSDK_OFFSET(0x1F938EE0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F937EA0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F938020)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1F938010)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1F938030)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_KEEPLASTBLOCK_OFFSET UNITYSDK_OFFSET(0x1F938AB0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1F938040)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1F938AD0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_OFB_OFFSET UNITYSDK_OFFSET(0x1F938690)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_RANDOM_OFFSET UNITYSDK_OFFSET(0x1F938CA0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F937F10)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_THROWBADPADDINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F938D70)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1F938860)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1F9395B0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F938050)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F937B30)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricTransform_TypeDefinitionIndex = 2472;

	class SymmetricTransform : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* temp; // 0x10
		::Il2CppArray<::System::Byte>* temp2; // 0x18
		::Il2CppArray<::System::Byte>* workout; // 0x20
		::Il2CppArray<::System::Byte>* workBuff; // 0x28
		::System::Security::Cryptography::SymmetricAlgorithm* algo; // 0x30
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x38
		::System::Boolean encrypt; // 0x40
		::System::Boolean lastBlock; // 0x41
		::System::Boolean m_disposed; // 0x42
		::System::Int32 BlockSizeByte; // 0x44
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
