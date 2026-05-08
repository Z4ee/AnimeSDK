#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_X509_PKCS5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C19D430)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS5_TypeDefinitionIndex = 2287;

	class PKCS5 : public ::System::Object
	{
	public:
		// static const ::System::String* pbeWithMD2AndDESCBC; // 0x0
		// static const ::System::String* pbeWithMD5AndDESCBC; // 0x0
		// static const ::System::String* pbeWithMD2AndRC2CBC; // 0x0
		// static const ::System::String* pbeWithMD5AndRC2CBC; // 0x0
		// static const ::System::String* pbeWithSHA1AndDESCBC; // 0x0
		// static const ::System::String* pbeWithSHA1AndRC2CBC; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS5__CTOR_OFFSET))(this);
		}
	};
}
