#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BBFD0E52E2E016C9;

#define CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x169A06B0)
#define CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x169A07F0)
#define CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x169A0850)
#define CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x169A0800)
#define CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169A06A0)
#define CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1699FDD0)

inline static constexpr unsigned int Class_2_BBFD0E52E2E016C9___ListenDieFunc_d__13_TypeDefinitionIndex = 50053;

class Class_2_BBFD0E52E2E016C9___ListenDieFunc_d__13 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_2_BBFD0E52E2E016C9* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9___LISTENDIEFUNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
