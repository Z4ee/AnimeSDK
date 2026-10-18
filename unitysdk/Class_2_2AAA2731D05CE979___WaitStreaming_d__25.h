#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2AAA2731D05CE979;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class Stage; }

#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD769DA0)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD76A200)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD76A260)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD76A210)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD769D90)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0xD768190)

inline static constexpr unsigned int Class_2_2AAA2731D05CE979___WaitStreaming_d__25_TypeDefinitionIndex = 60554;

class Class_2_2AAA2731D05CE979___WaitStreaming_d__25 : public ::System::Object
{
public:
	::RPG::Client::FiveDimGameInstance* _targetInstance_5__2; // 0x10
	::RPG::Client::Stage* _stage_5__3; // 0x18
	::System::Object* __2__current; // 0x20
	::Class_2_2AAA2731D05CE979* __4__this; // 0x28
	::System::Int32 _i_5__4; // 0x30
	::System::Int32 __1__state; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
