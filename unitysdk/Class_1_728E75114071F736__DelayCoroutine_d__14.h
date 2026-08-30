#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17C9C4C0)
#define CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17C9C560)
#define CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17C9C5C0)
#define CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17C9C570)
#define CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C9C4B0)
#define CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9C460)

inline static constexpr unsigned int Class_1_728E75114071F736__DelayCoroutine_d__14_TypeDefinitionIndex = 48301;

class Class_1_728E75114071F736__DelayCoroutine_d__14 : public ::System::Object
{
public:
	::System::Action* callback; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Single seconds; // 0x20
	::System::Int32 __1__state; // 0x24

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
