#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2AAA2731D05CE979;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class Stage; }

#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD7F97F0)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD7F9C50)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD7F9CB0)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD7F9C60)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7F97D0)
#define CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F7B40)

inline static constexpr unsigned int Class_2_2AAA2731D05CE979___WaitStreaming_d__24_TypeDefinitionIndex = 60653;

class Class_2_2AAA2731D05CE979___WaitStreaming_d__24 : public ::System::Object
{
public:
	::RPG::Client::Stage* _stage_5__3; // 0x10
	::System::Object* __2__current; // 0x18
	::Class_2_2AAA2731D05CE979* __4__this; // 0x20
	::RPG::Client::FiveDimGameInstance* _targetInstance_5__2; // 0x28
	::System::Int32 _i_5__4; // 0x30
	::System::Int32 __1__state; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAA2731D05CE979___WAITSTREAMING_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
