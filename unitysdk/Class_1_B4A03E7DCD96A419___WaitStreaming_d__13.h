#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4A03E7DCD96A419;
namespace RPG::Client { class Stage; }

#define CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17686AD0)
#define CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17686CB0)
#define CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17686D10)
#define CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17686CC0)
#define CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17686AC0)
#define CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x17686110)

inline static constexpr unsigned int Class_1_B4A03E7DCD96A419___WaitStreaming_d__13_TypeDefinitionIndex = 57816;

class Class_1_B4A03E7DCD96A419___WaitStreaming_d__13 : public ::System::Object
{
public:
	::RPG::Client::Stage* _stage_5__2; // 0x10
	::Class_1_B4A03E7DCD96A419* __4__this; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A03E7DCD96A419___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
