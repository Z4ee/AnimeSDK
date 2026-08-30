#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_446771371137EDD3;
namespace RPG::Client { class Stage; }

#define CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11B03680)
#define CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B03860)
#define CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B038C0)
#define CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11B03870)
#define CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B03670)
#define CLASS_1_446771371137EDD3___WAITSTREAMING_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x11B02C30)

inline static constexpr unsigned int Class_1_446771371137EDD3___WaitStreaming_d__13_TypeDefinitionIndex = 60636;

class Class_1_446771371137EDD3___WaitStreaming_d__13 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_446771371137EDD3* __4__this; // 0x18
	::RPG::Client::Stage* _stage_5__2; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITSTREAMING_D__13__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
