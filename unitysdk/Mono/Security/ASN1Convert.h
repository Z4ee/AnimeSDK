#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_ASN1CONVERT_FROMDATETIME_OFFSET UNITYSDK_OFFSET(0x1BD80B50)
#define MONO_SECURITY_ASN1CONVERT_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1BD80E80)
#define MONO_SECURITY_ASN1CONVERT_FROMOID_OFFSET UNITYSDK_OFFSET(0x1BD81010)
#define MONO_SECURITY_ASN1CONVERT_FROMUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1BD810A0)
#define MONO_SECURITY_ASN1CONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1BD814F0)
#define MONO_SECURITY_ASN1CONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x1BD81170)
#define MONO_SECURITY_ASN1CONVERT_TOOID_OFFSET UNITYSDK_OFFSET(0x1BD81280)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1Convert_TypeDefinitionIndex = 2273;

	class ASN1Convert : public ::System::Object
	{
	public:
		static ::Mono::Security::ASN1* FromDateTime(::System::DateTime dt)
		{
			return ((::Mono::Security::ASN1*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMDATETIME_OFFSET))(dt);
		}

		static ::Mono::Security::ASN1* FromInt32(::System::Int32 value)
		{
			return ((::Mono::Security::ASN1*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMINT32_OFFSET))(value);
		}

		static ::Mono::Security::ASN1* FromOid(::System::String* oid)
		{
			return ((::Mono::Security::ASN1*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMOID_OFFSET))(oid);
		}

		static ::Mono::Security::ASN1* FromUnsignedBigInteger(::Il2CppArray<::System::Byte>* big)
		{
			return ((::Mono::Security::ASN1*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMUNSIGNEDBIGINTEGER_OFFSET))(big);
		}

		static ::System::Int32 ToInt32(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Int32(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TOINT32_OFFSET))(asn1);
		}

		static ::System::String* ToOid(::Mono::Security::ASN1* asn1)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TOOID_OFFSET))(asn1);
		}

		static ::System::DateTime ToDateTime(::Mono::Security::ASN1* time)
		{
			return ((::System::DateTime(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TODATETIME_OFFSET))(time);
		}
	};
}
