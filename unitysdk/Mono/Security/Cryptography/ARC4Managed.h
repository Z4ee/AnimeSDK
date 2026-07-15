#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/RC4.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x1B648C10)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1B648B20)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1B648B00)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B648620)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B6485B0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1B648B40)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1B648830)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1B648BE0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1B648BF0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B6486E0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1B648C00)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1B648E60)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_KEYSETUP_OFFSET UNITYSDK_OFFSET(0x1B6489F0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1B6488B0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1B648D40)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1B649040)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B648450)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int ARC4Managed_TypeDefinitionIndex = 2292;

	class ARC4Managed : public ::Mono::Security::Cryptography::RC4
	{
	public:
		::Il2CppArray<::System::Byte>* state; // 0x48
		::Il2CppArray<::System::Byte>* key; // 0x50
		::System::Boolean m_disposed; // 0x58
		::System::Byte x; // 0x59
		::System::Byte y; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_DISPOSE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_SET_KEY_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEENCRYPTOR_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEDECRYPTOR_OFFSET))(this, a1, a2);
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

		::System::Void KeySetup(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_KEYSETUP_OFFSET))(this, a1);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CHECKINPUT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMBLOCK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_INTERNALTRANSFORMBLOCK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMFINALBLOCK_OFFSET))(this, a1, a2, a3);
		}
	};
}
