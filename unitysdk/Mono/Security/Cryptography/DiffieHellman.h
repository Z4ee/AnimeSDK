#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/DHParameters.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricAlgorithm.h"

namespace System { class String; }
namespace System::Security { class SecurityElement; }

#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E6FB910)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6FB860)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FB9D0)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_GETNAMEDPARAM_OFFSET UNITYSDK_OFFSET(0x1E6FB990)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FBE00)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FC1F0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DiffieHellman_TypeDefinitionIndex = 2453;

	class DiffieHellman : public ::System::Security::Cryptography::AsymmetricAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::DiffieHellman* Create()
		{
			return ((::Mono::Security::Cryptography::DiffieHellman*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_CREATE_OFFSET))();
		}

		static ::Mono::Security::Cryptography::DiffieHellman* Create_1(::System::String* algName)
		{
			return ((::Mono::Security::Cryptography::DiffieHellman*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_CREATE_1_OFFSET))(algName);
		}

		::Il2CppArray<::System::Byte>* GetNamedParam(::System::Security::SecurityElement* se, ::System::String* param)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::SecurityElement*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_GETNAMEDPARAM_OFFSET))(this, se, param);
		}

		::System::Void FromXmlString(::System::String* xmlString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_FROMXMLSTRING_OFFSET))(this, xmlString);
		}

		::System::String* ToXmlString(::System::Boolean includePrivateParameters)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMAN_TOXMLSTRING_OFFSET))(this, includePrivateParameters);
		}
	};
}
