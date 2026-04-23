#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95F843019E01BB5E;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class Stage; }

#define CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x127EF2C0)
#define CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x127EF6B0)
#define CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x127EF710)
#define CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x127EF6C0)
#define CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127EF2B0)
#define CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x127EDDF0)

inline static constexpr unsigned int Class_1_95F843019E01BB5E___WaitStreaming_d__21_TypeDefinitionIndex = 55837;

class Class_1_95F843019E01BB5E___WaitStreaming_d__21 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::RPG::Client::FiveDimGameInstance* _targetInstance_5__2; // 0x18
	::RPG::Client::Stage* _stage_5__3; // 0x20
	::Class_1_95F843019E01BB5E* __4__this; // 0x28
	::System::Int32 _i_5__4; // 0x30
	::System::Int32 __1__state; // 0x34

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F843019E01BB5E___WAITSTREAMING_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
