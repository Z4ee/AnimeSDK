#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509Extension; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1E7198D0)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1E719720)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1E7195B0)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1E71A030)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E719D90)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E71A2E0)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E71A8B0)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1E6FE590)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E719C60)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1E71A050)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1E719DB0)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1E71A420)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1E71A6A0)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E71A560)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E71A7F0)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E719380)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7192E0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509ExtensionCollection_TypeDefinitionIndex = 2303;

	class X509ExtensionCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Boolean readOnly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Int32 Add(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_ADD_OFFSET))(this, extension);
		}

		::System::Void AddRange(::Il2CppArray<::Mono::Security::X509::X509Extension*>* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Mono::Security::X509::X509Extension*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_ADDRANGE_OFFSET))(this, extension);
		}

		::System::Void AddRange_1(::Mono::Security::X509::X509ExtensionCollection* collection)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509ExtensionCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_ADDRANGE_1_OFFSET))(this, collection);
		}

		::System::Boolean Contains(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_CONTAINS_OFFSET))(this, extension);
		}

		::System::Boolean Contains_1(::System::String* oid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_CONTAINS_1_OFFSET))(this, oid);
		}

		::System::Void CopyTo(::Il2CppArray<::Mono::Security::X509::X509Extension*>* extensions, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Mono::Security::X509::X509Extension*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_COPYTO_OFFSET))(this, extensions, index);
		}

		::System::Int32 IndexOf(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_INDEXOF_OFFSET))(this, extension);
		}

		::System::Int32 IndexOf_1(::System::String* oid)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_INDEXOF_1_OFFSET))(this, oid);
		}

		::System::Void Insert(::System::Int32 index, ::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_INSERT_OFFSET))(this, index, extension);
		}

		::System::Void Remove(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_REMOVE_OFFSET))(this, extension);
		}

		::System::Void Remove_1(::System::String* oid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_REMOVE_1_OFFSET))(this, oid);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::Mono::Security::X509::X509Extension* get_Item(::System::Int32 index)
		{
			return ((::Mono::Security::X509::X509Extension*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::Mono::Security::X509::X509Extension* get_Item_1(::System::String* oid)
		{
			return ((::Mono::Security::X509::X509Extension*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_GET_ITEM_1_OFFSET))(this, oid);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_GETBYTES_OFFSET))(this);
		}
	};
}
