#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBB93220)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBC8FC0)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBC9020)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBBC8FD0)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB93210)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0xBB931E0)

inline static constexpr unsigned int Class_1_C8FAD95AE7A685F4__ProcessAllTable_d__7_TypeDefinitionIndex = 12756;

class Class_1_C8FAD95AE7A685F4__ProcessAllTable_d__7 : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* predicate; // 0x10
	::System::Action* Callback; // 0x18
	::Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1* process; // 0x20
	::System::Object* __2__current; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
