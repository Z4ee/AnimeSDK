#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/ObjectIntPair_1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class Extension; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_1_OFFSET UNITYSDK_OFFSET(0x15ADD710)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_2_OFFSET UNITYSDK_OFFSET(0x15ADD7B0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_OFFSET UNITYSDK_OFFSET(0x15ADD590)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x15ADDAF0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CLONE_OFFSET UNITYSDK_OFFSET(0x15ADE2C0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CONTAINSINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x15ADD480)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x15ADDBD0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15ADDFB0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x15ADD390)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_REMOVE_OFFSET UNITYSDK_OFFSET(0x15ADE140)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET UNITYSDK_OFFSET(0x15ADDD40)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x15ADD470)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15ADE2B0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15ADD190)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADD100)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ExtensionRegistry_TypeDefinitionIndex = 6157;

	class ExtensionRegistry : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>* extensions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IDictionary_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>* collection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY__CTOR_1_OFFSET))(this, collection);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_Google_Protobuf_Extension__get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean ContainsInputField(::Google::Protobuf::CodedInputStream* stream, ::System::Type* target, ::Google::Protobuf::Extension*& extension)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::CodedInputStream*, ::System::Type*, ::Google::Protobuf::Extension*&))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CONTAINSINPUTFIELD_OFFSET))(this, stream, target, extension);
		}

		::System::Void Add(::Google::Protobuf::Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_OFFSET))(this, extension);
		}

		::System::Void Add_1(::Il2CppArray<::Google::Protobuf::Extension*>* newExtensions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Google::Protobuf::Extension*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_1_OFFSET))(this, newExtensions);
		}

		::System::Void Add_2(::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>* newExtensions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_2_OFFSET))(this, newExtensions);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::Google::Protobuf::Extension* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CONTAINS_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_ICollection_Google_Protobuf_Extension__CopyTo(::Il2CppArray<::Google::Protobuf::Extension*>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Google::Protobuf::Extension*>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Collections::Generic::IEnumerator_1<::Google::Protobuf::Extension*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Google::Protobuf::Extension*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Remove(::Google::Protobuf::Extension* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_REMOVE_OFFSET))(this, item);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::Google::Protobuf::ExtensionRegistry* Clone()
		{
			return ((::Google::Protobuf::ExtensionRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CLONE_OFFSET))(this);
		}
	};
}
