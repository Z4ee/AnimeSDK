#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A3A2B28DB41BA84A;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBC48060)
#define CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBC481A0)
#define CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBC48110)
#define CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBC48220)
#define CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBC48170)
#define CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBC48120)
#define CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC48050)
#define CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90__CTOR_OFFSET UNITYSDK_OFFSET(0xBC48030)

inline static constexpr unsigned int Class_1_A3A2B28DB41BA84A__EnumerateSkillLevels_d__90_TypeDefinitionIndex = 52273;

class Class_1_A3A2B28DB41BA84A__EnumerateSkillLevels_d__90 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* __7__wrap2; // 0x10
	::Class_1_A3A2B28DB41BA84A* __4__this; // 0x18
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> __2__current; // 0x20
	::System::Int32 __7__wrap3; // 0x28
	::System::UInt32 _level_5__2; // 0x2C
	::System::Int32 __l__initialThreadId; // 0x30
	::System::Int32 __1__state; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> System_Collections_Generic_IEnumerator_System_ValueTuple_System_UInt32_System_UInt32___get_Current()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_UInt32_System_UInt32___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__ENUMERATESKILLLEVELS_D__90_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
