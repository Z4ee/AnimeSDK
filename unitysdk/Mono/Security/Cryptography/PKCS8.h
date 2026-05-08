#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/PKCS8_KeyInfo.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1B777B60)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8__CTOR_OFFSET UNITYSDK_OFFSET(0x1B777B50)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_TypeDefinitionIndex = 2463;

	class PKCS8 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::PKCS8_KeyInfo GetType(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Mono::Security::Cryptography::PKCS8_KeyInfo(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_GETTYPE_OFFSET))(data);
		}
	};
}
