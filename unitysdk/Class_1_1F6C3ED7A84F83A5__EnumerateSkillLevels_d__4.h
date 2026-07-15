#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1F6C3ED7A84F83A5;
class Class_1_C85C4DAB350DD5FC;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x179F0EB0)
#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x179F1180)
#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x179F10F0)
#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x179F1200)
#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x179F1150)
#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x179F1100)
#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179F0E90)
#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x179F0E70)
#define CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x179F0EA0)

inline static constexpr unsigned int Class_1_1F6C3ED7A84F83A5__EnumerateSkillLevels_d__4_TypeDefinitionIndex = 60011;

class Class_1_1F6C3ED7A84F83A5__EnumerateSkillLevels_d__4 : public ::System::Object
{
public:
	::Class_1_1F6C3ED7A84F83A5* __4__this; // 0x10
	::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::UInt32, ::Class_1_C85C4DAB350DD5FC*> __7__wrap1; // 0x18
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> __2__current; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4___M__FINALLY1_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> System_Collections_Generic_IEnumerator_System_ValueTuple_System_UInt32_System_UInt32___get_Current()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_UInt32_System_UInt32___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
