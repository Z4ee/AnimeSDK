#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MONO_SECURITY_X509_X509EXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1615A400)
#define MONO_SECURITY_X509_X509EXTENSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1615A410)
#define MONO_SECURITY_X509_X509EXTENSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1615A550)
#define MONO_SECURITY_X509_X509EXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1615ACB0)
#define MONO_SECURITY_X509_X509EXTENSION_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1615A5E0)
#define MONO_SECURITY_X509_X509EXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x16159F60)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Extension_TypeDefinitionIndex = 2258;

	class X509Extension : public ::System::Object
	{
	public:
		::Mono::Security::ASN1* extnValue; // 0x10
		::System::String* extnOid; // 0x18
		::System::Boolean extnCritical; // 0x20

		::System::Void _ctor(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION__CTOR_OFFSET))(this, asn1);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_DECODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteLine(::System::Text::StringBuilder* sb, ::System::Int32 n, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_WRITELINE_OFFSET))(this, sb, n, pos);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
