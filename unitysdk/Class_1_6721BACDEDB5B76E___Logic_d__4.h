#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_357;
class Class_1_6721BACDEDB5B76E;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB02B0D0)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB02B4A0)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB02B500)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB02B4B0)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB02B0C0)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xB02B0B0)

inline static constexpr unsigned int Class_1_6721BACDEDB5B76E___Logic_d__4_TypeDefinitionIndex = 56906;

class Class_1_6721BACDEDB5B76E___Logic_d__4 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_6721BACDEDB5B76E* __4__this; // 0x18
	::System::Action_1<::Class_0_16E4307DCC419505_357*>* onBeforeDispose; // 0x20
	::System::Single delaySeconds; // 0x28
	::System::Int32 __1__state; // 0x2C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
