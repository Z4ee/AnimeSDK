#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"

class Class_1_2FD7A51524ECE2E7;
class Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x114CC2D0)
#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x114CC810)
#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x114CC7A0)
#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x114CC890)
#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x114CC800)
#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x114CC7B0)
#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114CC130)
#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x114CADF0)
#define CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x114CC210)

inline static constexpr unsigned int Class_1_2FD7A51524ECE2E7__PSOWarmupTicker_d__15_TypeDefinitionIndex = 38290;

class Class_1_2FD7A51524ECE2E7__PSOWarmupTicker_d__15 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>*>* warmupPSOs; // 0x10
	::System::Collections::IEnumerator* __7__wrap3; // 0x18
	::Class_1_2FD7A51524ECE2E7* __4__this; // 0x20
	::System::Object* __2__current; // 0x28
	::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>*>* __3__warmupPSOs; // 0x30
	::System::Int32 _warmupCntRemain_5__3; // 0x38
	::System::Int32 __1__state; // 0x3C
	::System::Int32 __l__initialThreadId; // 0x40
	::System::Int32 _warmupCntRemainDuringTick_5__2; // 0x44

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15___M__FINALLY1_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__PSOWARMUPTICKER_D__15_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
