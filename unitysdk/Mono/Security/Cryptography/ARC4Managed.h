#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/RC4.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x1613B4D0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1613B380)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1613B360)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1613ADE0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1613AD70)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1613B3D0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1613B000)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1613B4A0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1613B4B0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1613AE80)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1613B4C0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1613B720)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_KEYSETUP_OFFSET UNITYSDK_OFFSET(0x1613B1F0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1613B0B0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1613B600)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1613B960)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1613AC10)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int ARC4Managed_TypeDefinitionIndex = 2287;

	class ARC4Managed : public ::Mono::Security::Cryptography::RC4
	{
	public:
		::Il2CppArray<::System::Byte>* state; // 0x48
		::Il2CppArray<::System::Byte>* key; // 0x50
		::System::Byte y; // 0x58
		::System::Boolean m_disposed; // 0x59
		::System::Byte x; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_DISPOSE_OFFSET))(this, disposing);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_SET_KEY_OFFSET))(this, value);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgvIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEENCRYPTOR_OFFSET))(this, rgbKey, rgvIV);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgvIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEDECRYPTOR_OFFSET))(this, rgbKey, rgvIV);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEIV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEKEY_OFFSET))(this);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Void KeySetup(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_KEYSETUP_OFFSET))(this, key);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CHECKINPUT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_INTERNALTRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}
	};
}
