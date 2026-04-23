#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19022E40)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19058760)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x190587C0)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19058770)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19022E30)
#define CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x19022E00)

inline static constexpr unsigned int Class_1_C8FAD95AE7A685F4__ProcessAllTable_d__7_TypeDefinitionIndex = 14641;

class Class_1_C8FAD95AE7A685F4__ProcessAllTable_d__7 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Func_1<::System::Boolean>* predicate; // 0x18
	::Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1* process; // 0x20
	::System::Action* Callback; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__PROCESSALLTABLE_D__7__CTOR_OFFSET))(this, __1__state);
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
