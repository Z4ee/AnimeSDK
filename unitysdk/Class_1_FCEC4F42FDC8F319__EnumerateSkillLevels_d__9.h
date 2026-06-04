#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_FCEC4F42FDC8F319;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFFBE0E0)
#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFFBE2D0)
#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFFBE240)
#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFFBE330)
#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFFBE2A0)
#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFFBE250)
#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFBE0C0)
#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0xFFBDA30)
#define CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xFFBE0D0)

inline static constexpr unsigned int Class_1_FCEC4F42FDC8F319__EnumerateSkillLevels_d__9_TypeDefinitionIndex = 58738;

class Class_1_FCEC4F42FDC8F319__EnumerateSkillLevels_d__9 : public ::System::Object
{
public:
	::Class_1_FCEC4F42FDC8F319* __4__this; // 0x10
	::System::Collections::Generic::Dictionary_2_Enumerator<::System::UInt32, ::System::UInt32> __7__wrap1; // 0x18
	::System::Int32 __l__initialThreadId; // 0x38
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> __2__current; // 0x3C
	::System::Int32 __1__state; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9___M__FINALLY1_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> System_Collections_Generic_IEnumerator_System_ValueTuple_System_UInt32_System_UInt32___get_Current()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_UInt32_System_UInt32___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
