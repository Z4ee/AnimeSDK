#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_502;
class Class_1_EF473D2C04B400D1;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EF473D2C04B400D1___LOGIC_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC1A5150)
#define CLASS_1_EF473D2C04B400D1___LOGIC_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC1A56D0)
#define CLASS_1_EF473D2C04B400D1___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC1A5730)
#define CLASS_1_EF473D2C04B400D1___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC1A56E0)
#define CLASS_1_EF473D2C04B400D1___LOGIC_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1A5140)
#define CLASS_1_EF473D2C04B400D1___LOGIC_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xC1A5130)

inline static constexpr unsigned int Class_1_EF473D2C04B400D1___Logic_d__4_TypeDefinitionIndex = 60883;

class Class_1_EF473D2C04B400D1___Logic_d__4 : public ::System::Object
{
public:
	::Class_1_EF473D2C04B400D1* __4__this; // 0x10
	::System::Action_1<::Class_0_16E4307DCC419505_502*>* onBeforeDispose; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Int32 __1__state; // 0x28
	::System::Single delaySeconds; // 0x2C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1___LOGIC_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1___LOGIC_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1___LOGIC_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1___LOGIC_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
