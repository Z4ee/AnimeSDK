#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A8B98A73D524413D.h"
#include "unitysdk/System/Object.h"

class Class_1_D45ADB5492AB938B;
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_946637E2EE927FA0_ADD_OFFSET UNITYSDK_OFFSET(0x1E5B5EA0)
#define CLASS_1_946637E2EE927FA0_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E5B6020)
#define CLASS_1_946637E2EE927FA0_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E5B6100)
#define CLASS_1_946637E2EE927FA0_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E5B64E0)
#define CLASS_1_946637E2EE927FA0_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E5B5DB0)
#define CLASS_1_946637E2EE927FA0_METHOD_1_4B5B0B4E28D31F7A_OFFSET UNITYSDK_OFFSET(0x1E5B67F0)
#define CLASS_1_946637E2EE927FA0_METHOD_1_B5DE5168DE9BF0F9_OFFSET UNITYSDK_OFFSET(0x1E5B6B80)
#define CLASS_1_946637E2EE927FA0_METHOD_1_C85FA5BCB982E149_OFFSET UNITYSDK_OFFSET(0x1E5B6840)
#define CLASS_1_946637E2EE927FA0_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E5B6670)
#define CLASS_1_946637E2EE927FA0_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET UNITYSDK_OFFSET(0x1E5B6270)
#define CLASS_1_946637E2EE927FA0_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1E5B5E90)
#define CLASS_1_946637E2EE927FA0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E5B67E0)
#define CLASS_1_946637E2EE927FA0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B5BB0)
#define CLASS_1_946637E2EE927FA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B5B20)

inline static constexpr unsigned int Class_1_946637E2EE927FA0_TypeDefinitionIndex = 18526;

class Class_1_946637E2EE927FA0 : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IDictionary_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>*))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_GET_COUNT_OFFSET))(this);
	}

	::System::Boolean System_Collections_Generic_ICollection_Google_Protobuf_Extension__get_IsReadOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET))(this);
	}

	::System::Void Add(::Class_1_D45ADB5492AB938B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D45ADB5492AB938B*))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_ADD_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_CLEAR_OFFSET))(this);
	}

	::System::Boolean Contains(::Class_1_D45ADB5492AB938B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D45ADB5492AB938B*))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_CONTAINS_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_ICollection_Google_Protobuf_Extension__CopyTo(::Il2CppArray<::Class_1_D45ADB5492AB938B*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D45ADB5492AB938B*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_D45ADB5492AB938B*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_D45ADB5492AB938B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_GETENUMERATOR_OFFSET))(this);
	}

	::System::Boolean Remove(::Class_1_D45ADB5492AB938B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D45ADB5492AB938B*))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_REMOVE_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::Class_1_946637E2EE927FA0* Method_1_4B5B0B4E28D31F7A()
	{
		return ((::Class_1_946637E2EE927FA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_METHOD_1_4B5B0B4E28D31F7A_OFFSET))(this);
	}

	::System::Void Method_1_C85FA5BCB982E149(::System::Collections::Generic::IEnumerable_1<::Class_1_D45ADB5492AB938B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D45ADB5492AB938B*>*))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_METHOD_1_C85FA5BCB982E149_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B5DE5168DE9BF0F9(::System::UInt32 a1, ::System::Type* a2, ::Class_1_D45ADB5492AB938B*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Type*, ::Class_1_D45ADB5492AB938B*&))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0_METHOD_1_B5DE5168DE9BF0F9_OFFSET))(this, a1, a2, a3);
	}
};
