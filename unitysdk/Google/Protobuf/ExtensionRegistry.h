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

#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_1_OFFSET UNITYSDK_OFFSET(0x19038B20)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_2_OFFSET UNITYSDK_OFFSET(0x19038BA0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_OFFSET UNITYSDK_OFFSET(0x19038910)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x19039050)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CLONE_OFFSET UNITYSDK_OFFSET(0x19039AE0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CONTAINSINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x190387A0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19039180)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19039690)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19038660)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_REMOVE_OFFSET UNITYSDK_OFFSET(0x190398D0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET UNITYSDK_OFFSET(0x19039380)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19038790)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19039AD0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19038430)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x190383A0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ExtensionRegistry_TypeDefinitionIndex = 5376;

	class ExtensionRegistry : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>* extensions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IDictionary_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_Google_Protobuf_Extension__get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean ContainsInputField(::Google::Protobuf::CodedInputStream* a1, ::System::Type* a2, ::Google::Protobuf::Extension*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::CodedInputStream*, ::System::Type*, ::Google::Protobuf::Extension*&))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CONTAINSINPUTFIELD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Add(::Google::Protobuf::Extension* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_OFFSET))(this, a1);
		}

		::System::Void Add_1(::Il2CppArray<::Google::Protobuf::Extension*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Google::Protobuf::Extension*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_1_OFFSET))(this, a1);
		}

		::System::Void Add_2(::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Extension*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_ADD_2_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::Google::Protobuf::Extension* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_ICollection_Google_Protobuf_Extension__CopyTo(::Il2CppArray<::Google::Protobuf::Extension*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Google::Protobuf::Extension*>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::Google::Protobuf::Extension*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Google::Protobuf::Extension*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Remove(::Google::Protobuf::Extension* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY_REMOVE_OFFSET))(this, a1);
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
