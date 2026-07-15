#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2AAA2731D05CE979;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class Stage; }

#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18C902F0)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18C90750)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18C907B0)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18C90760)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C902E0)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8E570)

inline static constexpr unsigned int Class_2_2AAA2731D05CE979___WaitStreaming_d__23_TypeDefinitionIndex = 57833;

class Class_2_2AAA2731D05CE979___WaitStreaming_d__23 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_2_2AAA2731D05CE979* __4__this; // 0x18
	::RPG::Client::Stage* _stage_5__3; // 0x20
	::RPG::Client::FiveDimGameInstance* _targetInstance_5__2; // 0x28
	::System::Int32 __1__state; // 0x30
	::System::Int32 _i_5__4; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
