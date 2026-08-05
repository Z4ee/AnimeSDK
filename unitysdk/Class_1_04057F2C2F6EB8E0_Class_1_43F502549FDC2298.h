#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_04057F2C2F6EB8E0;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C6756B0)
#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C6756C0)
#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_HASHSET_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C6758E0)
#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_HASHSET_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C675870)
#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C675960)
#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C6758D0)
#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C675880)
#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C675690)
#define CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298__CTOR_OFFSET UNITYSDK_OFFSET(0x1C675670)

inline static constexpr unsigned int Class_1_04057F2C2F6EB8E0_Class_1_43F502549FDC2298_TypeDefinitionIndex = 29320;

class Class_1_04057F2C2F6EB8E0_Class_1_43F502549FDC2298 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*> Field_1_4; // 0x18
	::Class_1_04057F2C2F6EB8E0* Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_MOVENEXT_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* System_Collections_Generic_IEnumerator_System_Collections_Generic_HashSet_System_UInt32___get_Current()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_HASHSET_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>* System_Collections_Generic_IEnumerable_System_Collections_Generic_HashSet_System_UInt32___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_HASHSET_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_CLASS_1_43F502549FDC2298_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
