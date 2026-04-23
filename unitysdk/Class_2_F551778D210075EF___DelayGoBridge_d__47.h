#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F551778D210075EF;

#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11AF7BB0)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11AF7C40)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11AF7CA0)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11AF7C50)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AF7BA0)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF7700)

inline static constexpr unsigned int Class_2_F551778D210075EF___DelayGoBridge_d__47_TypeDefinitionIndex = 52835;

class Class_2_F551778D210075EF___DelayGoBridge_d__47 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_2_F551778D210075EF* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::Boolean goBridge; // 0x24
	::System::Single delay; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
