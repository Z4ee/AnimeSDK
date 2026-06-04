#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_8177312907A46482___USEEVENT_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA937030)
#define CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA937180)
#define CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA937110)
#define CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA937200)
#define CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA937170)
#define CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA937120)
#define CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA937020)
#define CLASS_1_8177312907A46482___USEEVENT_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0xA9362C0)

inline static constexpr unsigned int Class_1_8177312907A46482___UseEvent_d__36_TypeDefinitionIndex = 55749;

class Class_1_8177312907A46482___UseEvent_d__36 : public ::System::Object
{
public:
	::System::String* message; // 0x10
	::System::String* __3__message; // 0x18
	::System::String* name; // 0x20
	::System::String* __3__name; // 0x28
	::System::Object* __2__current; // 0x30
	::System::Int32 __l__initialThreadId; // 0x38
	::System::Int32 __1__state; // 0x3C
	::System::Int32 _timeStart_5__2; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEEVENT_D__36__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEEVENT_D__36_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEEVENT_D__36_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
