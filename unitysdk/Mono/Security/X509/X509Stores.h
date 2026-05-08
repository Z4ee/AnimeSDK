#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509Store; }
namespace System { class String; }

#define MONO_SECURITY_X509_X509STORES_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C484D70)
#define MONO_SECURITY_X509_X509STORES_GET_INTERMEDIATECA_OFFSET UNITYSDK_OFFSET(0x1C484BF0)
#define MONO_SECURITY_X509_X509STORES_GET_OTHERPEOPLE_OFFSET UNITYSDK_OFFSET(0x1C484B80)
#define MONO_SECURITY_X509_X509STORES_GET_PERSONAL_OFFSET UNITYSDK_OFFSET(0x1C484B10)
#define MONO_SECURITY_X509_X509STORES_GET_TRUSTEDROOT_OFFSET UNITYSDK_OFFSET(0x1C484C70)
#define MONO_SECURITY_X509_X509STORES_GET_UNTRUSTED_OFFSET UNITYSDK_OFFSET(0x1C484CF0)
#define MONO_SECURITY_X509_X509STORES_OPEN_OFFSET UNITYSDK_OFFSET(0x1C484ED0)
#define MONO_SECURITY_X509_X509STORES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C484B00)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Stores_TypeDefinitionIndex = 2307;

	class X509Stores : public ::System::Object
	{
	public:
		::Mono::Security::X509::X509Store* _untrusted; // 0x10
		::Mono::Security::X509::X509Store* _intermediate; // 0x18
		::Mono::Security::X509::X509Store* _other; // 0x20
		::System::String* _storePath; // 0x28
		::Mono::Security::X509::X509Store* _personal; // 0x30
		::Mono::Security::X509::X509Store* _trusted; // 0x38
		::System::Boolean _newFormat; // 0x40

		::System::Void _ctor(::System::String* path, ::System::Boolean newFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES__CTOR_OFFSET))(this, path, newFormat);
		}

		::Mono::Security::X509::X509Store* get_Personal()
		{
			return ((::Mono::Security::X509::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_GET_PERSONAL_OFFSET))(this);
		}

		::Mono::Security::X509::X509Store* get_OtherPeople()
		{
			return ((::Mono::Security::X509::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_GET_OTHERPEOPLE_OFFSET))(this);
		}

		::Mono::Security::X509::X509Store* get_IntermediateCA()
		{
			return ((::Mono::Security::X509::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_GET_INTERMEDIATECA_OFFSET))(this);
		}

		::Mono::Security::X509::X509Store* get_TrustedRoot()
		{
			return ((::Mono::Security::X509::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_GET_TRUSTEDROOT_OFFSET))(this);
		}

		::Mono::Security::X509::X509Store* get_Untrusted()
		{
			return ((::Mono::Security::X509::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_GET_UNTRUSTED_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_CLEAR_OFFSET))(this);
		}

		::Mono::Security::X509::X509Store* Open(::System::String* storeName, ::System::Boolean create)
		{
			return ((::Mono::Security::X509::X509Store*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_OPEN_OFFSET))(this, storeName, create);
		}
	};
}
