#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Encryption/PkzipClassic.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class KeySizes; }

#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1C437890)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1C437830)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1C437380)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1C4375E0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1C437280)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C437420)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_LEGALBLOCKSIZES_OFFSET UNITYSDK_OFFSET(0x1C437390)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_LEGALKEYSIZES_OFFSET UNITYSDK_OFFSET(0x1C4372F0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_SET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1C437290)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1C4376A0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4378F0)

namespace ICSharpCode::SharpZipLib::Encryption
{
	inline static constexpr unsigned int PkzipClassicManaged_TypeDefinitionIndex = 6667;

	class PkzipClassicManaged : public ::ICSharpCode::SharpZipLib::Encryption::PkzipClassic
	{
	public:
		::Il2CppArray<::System::Byte>* key_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED__CTOR_OFFSET))(this);
		}

		::System::Int32 get_BlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_BLOCKSIZE_OFFSET))(this);
		}

		::System::Void set_BlockSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_SET_BLOCKSIZE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* get_LegalKeySizes()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::KeySizes*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_LEGALKEYSIZES_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GENERATEIV_OFFSET))(this);
		}

		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* get_LegalBlockSizes()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::KeySizes*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_LEGALBLOCKSIZES_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_SET_KEY_OFFSET))(this, value);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GENERATEKEY_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_CREATEENCRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_CREATEDECRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}
	};
}
