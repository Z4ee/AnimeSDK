#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_322;
class Class_3_FD36B8E7B341BBE0;

#define CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAB6FA90)
#define CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB6FB20)
#define CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB6FB80)
#define CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAB6FB30)
#define CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB6FA80)
#define CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6F160)

inline static constexpr unsigned int Class_3_FD36B8E7B341BBE0__MainAsync_d__0_TypeDefinitionIndex = 46158;

class Class_3_FD36B8E7B341BBE0__MainAsync_d__0 : public ::System::Object
{
public:
	::Class_3_FD36B8E7B341BBE0* __4__this; // 0x10
	::Class_0_16E4307DCC419505_322* container; // 0x18
	::Struct_2_A143022D1701BC76 goalNode; // 0x20
	::Struct_2_A143022D1701BC76 startNode; // 0x30
	::System::Int32 __1__state; // 0x40
	::System::Nullable_1<::System::Boolean> __2__current; // 0x44
	::System::Single G; // 0x48

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> System_Collections_Generic_IEnumerator_System_Boolean___get_Current()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD36B8E7B341BBE0__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
