#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5DAAF78A77D2F3AC.h"
#include "unitysdk/System/Object.h"

class Class_1_D45ADB5492AB938B;
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A4E5799D48BBAD1F_ADD_OFFSET UNITYSDK_OFFSET(0x1F4ED280)
#define CLASS_1_A4E5799D48BBAD1F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F4ED400)
#define CLASS_1_A4E5799D48BBAD1F_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F4ED4E0)
#define CLASS_1_A4E5799D48BBAD1F_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F4ED8D0)
#define CLASS_1_A4E5799D48BBAD1F_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F4ED190)
#define CLASS_1_A4E5799D48BBAD1F_METHOD_1_1F10DEEBBACAD387_OFFSET UNITYSDK_OFFSET(0x1F4EDC30)
#define CLASS_1_A4E5799D48BBAD1F_METHOD_1_4B5B0B4E28D31F7A_OFFSET UNITYSDK_OFFSET(0x1F4EDBE0)
#define CLASS_1_A4E5799D48BBAD1F_METHOD_1_AEA5D9156A6BAED4_OFFSET UNITYSDK_OFFSET(0x1F4EDF80)
#define CLASS_1_A4E5799D48BBAD1F_REMOVE_OFFSET UNITYSDK_OFFSET(0x1F4EDA60)
#define CLASS_1_A4E5799D48BBAD1F_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET UNITYSDK_OFFSET(0x1F4ED650)
#define CLASS_1_A4E5799D48BBAD1F_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1F4ED270)
#define CLASS_1_A4E5799D48BBAD1F_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F4EDBD0)
#define CLASS_1_A4E5799D48BBAD1F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4ECF90)
#define CLASS_1_A4E5799D48BBAD1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4ECF00)

inline static constexpr unsigned int Class_1_A4E5799D48BBAD1F_TypeDefinitionIndex = 19127;

class Class_1_A4E5799D48BBAD1F : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::Struct_2_5DAAF78A77D2F3AC<::System::Type*>, ::Class_1_D45ADB5492AB938B*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IDictionary_2<::Struct_2_5DAAF78A77D2F3AC<::System::Type*>, ::Class_1_D45ADB5492AB938B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::Struct_2_5DAAF78A77D2F3AC<::System::Type*>, ::Class_1_D45ADB5492AB938B*>*))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_GET_COUNT_OFFSET))(this);
	}

	::System::Boolean System_Collections_Generic_ICollection_Google_Protobuf_Extension__get_IsReadOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET))(this);
	}

	::System::Void Add(::Class_1_D45ADB5492AB938B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D45ADB5492AB938B*))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_ADD_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_CLEAR_OFFSET))(this);
	}

	::System::Boolean Contains(::Class_1_D45ADB5492AB938B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D45ADB5492AB938B*))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_CONTAINS_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_ICollection_Google_Protobuf_Extension__CopyTo(::Il2CppArray<::Class_1_D45ADB5492AB938B*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D45ADB5492AB938B*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_D45ADB5492AB938B*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_D45ADB5492AB938B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_GETENUMERATOR_OFFSET))(this);
	}

	::System::Boolean Remove(::Class_1_D45ADB5492AB938B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D45ADB5492AB938B*))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_REMOVE_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::Class_1_A4E5799D48BBAD1F* Method_1_4B5B0B4E28D31F7A()
	{
		return ((::Class_1_A4E5799D48BBAD1F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_METHOD_1_4B5B0B4E28D31F7A_OFFSET))(this);
	}

	::System::Void Method_1_1F10DEEBBACAD387(::System::Collections::Generic::IEnumerable_1<::Class_1_D45ADB5492AB938B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D45ADB5492AB938B*>*))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_METHOD_1_1F10DEEBBACAD387_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AEA5D9156A6BAED4(::System::UInt32 a1, ::System::Type* a2, ::Class_1_D45ADB5492AB938B*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Type*, ::Class_1_D45ADB5492AB938B*&))((::PBYTE)hIl2Cpp + CLASS_1_A4E5799D48BBAD1F_METHOD_1_AEA5D9156A6BAED4_OFFSET))(this, a1, a2, a3);
	}
};
