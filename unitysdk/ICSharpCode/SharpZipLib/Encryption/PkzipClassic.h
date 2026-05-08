#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSIC_GENERATEKEYS_OFFSET UNITYSDK_OFFSET(0x1C4ECD90)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4ED400)

namespace ICSharpCode::SharpZipLib::Encryption
{
	inline static constexpr unsigned int PkzipClassic_TypeDefinitionIndex = 6663;

	class PkzipClassic : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSIC__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* GenerateKeys(::Il2CppArray<::System::Byte>* seed)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSIC_GENERATEKEYS_OFFSET))(seed);
		}
	};
}
