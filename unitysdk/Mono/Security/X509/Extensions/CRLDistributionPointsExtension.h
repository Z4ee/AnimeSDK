#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509Extension.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509::Extensions { class CRLDistributionPointsExtension_DistributionPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1FBD6030)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_GET_DISTRIBUTIONPOINTS_OFFSET UNITYSDK_OFFSET(0x1FBD6290)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FBD6250)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBD62A0)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBD6010)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FBD6020)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD5F90)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int CRLDistributionPointsExtension_TypeDefinitionIndex = 2329;

	class CRLDistributionPointsExtension : public ::Mono::Security::X509::X509Extension
	{
	public:
		::System::Collections::Generic::List_1<::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_DistributionPoint*>* dps; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DECODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_DistributionPoint*>* get_DistributionPoints()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_DistributionPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_GET_DISTRIBUTIONPOINTS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
