#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_309;
class Class_3_66AFDE798AC015C5;

#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11B9D990)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B9DA20)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B9DA80)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11B9DA30)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B9D980)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B9D060)

inline static constexpr unsigned int Class_3_66AFDE798AC015C5__MainAsync_d__0_TypeDefinitionIndex = 45575;

class Class_3_66AFDE798AC015C5__MainAsync_d__0 : public ::System::Object
{
public:
	::Struct_2_23A3535C3AD26D5F goalNode; // 0x10
	::Struct_2_23A3535C3AD26D5F startNode; // 0x20
	::Class_3_66AFDE798AC015C5* __4__this; // 0x30
	::Class_0_16E4307DCC419505_309* container; // 0x38
	::System::Nullable_1<::System::Boolean> __2__current; // 0x40
	::System::Single G; // 0x44
	::System::Int32 __1__state; // 0x48

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> System_Collections_Generic_IEnumerator_System_Boolean___get_Current()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
