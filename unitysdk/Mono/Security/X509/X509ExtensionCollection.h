#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace Mono::Security { class ASN1; }
namespace System::Collections { class IEnumerator; }

#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BB40470)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB3E340)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB40420)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509ExtensionCollection_TypeDefinitionIndex = 2271;

	class X509ExtensionCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Boolean readOnly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
