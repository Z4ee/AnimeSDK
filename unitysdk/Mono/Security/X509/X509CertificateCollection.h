#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection_X509CertificateEnumerator; }
namespace System::Collections { class IEnumerator; }

#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1777A000)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1777AFB0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17785980)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x177857C0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17785910)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x177762C0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509CertificateCollection_TypeDefinitionIndex = 2257;

	class X509CertificateCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION__CTOR_OFFSET))(this);
		}

		::Mono::Security::X509::X509Certificate* get_Item(::System::Int32 index)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 Add(::Mono::Security::X509::X509Certificate* value)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADD_OFFSET))(this, value);
		}

		::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator* GetEnumerator()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET))(this);
		}
	};
}
