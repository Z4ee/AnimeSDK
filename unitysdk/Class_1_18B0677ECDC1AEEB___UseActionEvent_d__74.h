#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18B0677ECDC1AEEB;
class Class_1_C530CE1C0A4E2133;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9871BF0)
#define CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9871D90)
#define CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9871D20)
#define CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9871E10)
#define CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9871D80)
#define CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9871D30)
#define CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9871BE0)
#define CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74__CTOR_OFFSET UNITYSDK_OFFSET(0x986BB00)

inline static constexpr unsigned int Class_1_18B0677ECDC1AEEB___UseActionEvent_d__74_TypeDefinitionIndex = 54940;

class Class_1_18B0677ECDC1AEEB___UseActionEvent_d__74 : public ::System::Object
{
public:
	::Class_1_C530CE1C0A4E2133* __3__actionEvent; // 0x10
	::Class_1_C530CE1C0A4E2133* actionEvent; // 0x18
	::System::Object* __2__current; // 0x20
	::System::String* _lastEventName_5__2; // 0x28
	::Class_1_18B0677ECDC1AEEB* __4__this; // 0x30
	::System::Boolean _isItemAction_5__3; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C
	::System::Int32 __1__state; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___USEACTIONEVENT_D__74_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
