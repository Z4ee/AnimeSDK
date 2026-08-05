#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection_X509CertificateEnumerator; }
namespace System::Collections { class IEnumerator; }

#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1F8EA070)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1F8E9E40)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1F8EA5C0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F8EAE60)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F8EA700)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1F8EABD0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F8EACA0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8EADB0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1F8EA3C0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1F8EA720)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1F8EAEC0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1F8EAF90)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1F8EA4F0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F8EACF0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8E9D90)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F8E9FC0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E9CF0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509CertificateCollection_TypeDefinitionIndex = 2298;

	class X509CertificateCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::Mono::Security::X509::X509Certificate*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Mono::Security::X509::X509Certificate*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::Mono::Security::X509::X509Certificate* get_Item(::System::Int32 index)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::Mono::Security::X509::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::Mono::Security::X509::X509Certificate* value)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::Il2CppArray<::Mono::Security::X509::X509Certificate*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Mono::Security::X509::X509Certificate*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Mono::Security::X509::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::Mono::Security::X509::X509Certificate* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::Mono::Security::X509::X509Certificate*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Mono::Security::X509::X509Certificate*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_COPYTO_OFFSET))(this, array, index);
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

		::System::Int32 IndexOf(::Mono::Security::X509::X509Certificate* value)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::Mono::Security::X509::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::Mono::Security::X509::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_REMOVE_OFFSET))(this, value);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Byte>* array1, ::Il2CppArray<::System::Byte>* array2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_COMPARE_OFFSET))(this, array1, array2);
		}
	};
}
