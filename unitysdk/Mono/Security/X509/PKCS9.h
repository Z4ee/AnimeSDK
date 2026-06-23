#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_X509_PKCS9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DAE40)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS9_TypeDefinitionIndex = 2287;

	class PKCS9 : public ::System::Object
	{
	public:
		// static const ::System::String* friendlyName; // 0x0
		// static const ::System::String* localKeyId; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS9__CTOR_OFFSET))(this);
		}
	};
}
