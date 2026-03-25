#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1613E0E0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1613E530)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1_TypeDefinitionIndex = 2294;

	class PKCS1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA512()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0xE880);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA384()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0xE888);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA256()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0xE890);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA1()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0xE898);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CCTOR_OFFSET))();
		}

		static ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::System::String* name)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET))(name);
		}
	};
}
