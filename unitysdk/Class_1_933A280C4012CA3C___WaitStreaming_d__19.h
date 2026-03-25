#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_933A280C4012CA3C;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class Stage; }

#define CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11920040)
#define CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11920480)
#define CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x119204E0)
#define CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11920490)
#define CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11920030)
#define CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1191EC60)

inline static constexpr unsigned int Class_1_933A280C4012CA3C___WaitStreaming_d__19_TypeDefinitionIndex = 49042;

class Class_1_933A280C4012CA3C___WaitStreaming_d__19 : public ::System::Object
{
public:
	::RPG::Client::FiveDimGameInstance* _targetInstance_5__2; // 0x10
	::RPG::Client::Stage* _stage_5__3; // 0x18
	::Class_1_933A280C4012CA3C* __4__this; // 0x20
	::System::Object* __2__current; // 0x28
	::System::Int32 _i_5__4; // 0x30
	::System::Int32 __1__state; // 0x34

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933A280C4012CA3C___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
