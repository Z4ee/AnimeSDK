#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_365;
class Class_2_E08C4A9CFB467C17;
class Class_2_E08C4A9CFB467C17___c__DisplayClass3_0;

#define CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD262A40)
#define CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD2630C0)
#define CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD263120)
#define CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD2630D0)
#define CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD262A30)
#define CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0xD2622A0)

inline static constexpr unsigned int Class_2_E08C4A9CFB467C17__MainAsync_d__3_TypeDefinitionIndex = 49358;

class Class_2_E08C4A9CFB467C17__MainAsync_d__3 : public ::System::Object
{
public:
	::Class_2_E08C4A9CFB467C17___c__DisplayClass3_0* __8__1; // 0x10
	::Class_0_16E4307DCC419505_365* container; // 0x18
	::Struct_2_A143022D1701BC76 goalNode; // 0x20
	::Struct_2_A143022D1701BC76 startNode; // 0x30
	::Class_2_E08C4A9CFB467C17* __4__this; // 0x40
	::System::Nullable_1<::System::Boolean> __2__current; // 0x48
	::System::Single H; // 0x4C
	::System::Single G; // 0x50
	::System::Int32 __1__state; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> System_Collections_Generic_IEnumerator_System_Boolean___get_Current()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
