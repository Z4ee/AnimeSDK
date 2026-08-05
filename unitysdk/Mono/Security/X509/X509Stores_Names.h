#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_X509_X509STORES_NAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x1FADA900)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Stores_Names_TypeDefinitionIndex = 2307;

	class X509Stores_Names : public ::System::Object
	{
	public:
		// static const ::System::String* Personal; // 0x0
		// static const ::System::String* OtherPeople; // 0x0
		// static const ::System::String* IntermediateCA; // 0x0
		// static const ::System::String* TrustedRoot; // 0x0
		// static const ::System::String* Untrusted; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_NAMES__CTOR_OFFSET))(this);
		}
	};
}
