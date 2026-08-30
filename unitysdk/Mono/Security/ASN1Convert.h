#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_ASN1CONVERT_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1D23ABF0)
#define MONO_SECURITY_ASN1CONVERT_FROMOID_OFFSET UNITYSDK_OFFSET(0x1D23AF70)
#define MONO_SECURITY_ASN1CONVERT_FROMUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1D23B000)
#define MONO_SECURITY_ASN1CONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1D23B3F0)
#define MONO_SECURITY_ASN1CONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x1D23B0C0)
#define MONO_SECURITY_ASN1CONVERT_TOOID_OFFSET UNITYSDK_OFFSET(0x1D23B1D0)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1Convert_TypeDefinitionIndex = 2258;

	class ASN1Convert : public ::System::Object
	{
	public:
		static ::Mono::Security::ASN1* FromInt32(::System::Int32 a1)
		{
			return ((::Mono::Security::ASN1*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMINT32_OFFSET))(a1);
		}

		static ::Mono::Security::ASN1* FromOid(::System::String* a1)
		{
			return ((::Mono::Security::ASN1*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMOID_OFFSET))(a1);
		}

		static ::Mono::Security::ASN1* FromUnsignedBigInteger(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Mono::Security::ASN1*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMUNSIGNEDBIGINTEGER_OFFSET))(a1);
		}

		static ::System::Int32 ToInt32(::Mono::Security::ASN1* a1)
		{
			return ((::System::Int32(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TOINT32_OFFSET))(a1);
		}

		static ::System::String* ToOid(::Mono::Security::ASN1* a1)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TOOID_OFFSET))(a1);
		}

		static ::System::DateTime ToDateTime(::Mono::Security::ASN1* a1)
		{
			return ((::System::DateTime(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TODATETIME_OFFSET))(a1);
		}
	};
}
