#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_8177312907A46482___USEOBJECT_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11936870)
#define CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11936A60)
#define CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x119369F0)
#define CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11936AE0)
#define CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11936A50)
#define CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11936A00)
#define CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11936860)
#define CLASS_1_8177312907A46482___USEOBJECT_D__40__CTOR_OFFSET UNITYSDK_OFFSET(0x11935690)

inline static constexpr unsigned int Class_1_8177312907A46482___UseObject_d__40_TypeDefinitionIndex = 48271;

class Class_1_8177312907A46482___UseObject_d__40 : public ::System::Object
{
public:
	::System::Object* item; // 0x10
	::System::Object* __3__item; // 0x18
	::System::Func_1<::System::String*>* __3__argFunc; // 0x20
	::System::Object* __2__current; // 0x28
	::System::Func_1<::System::String*>* argFunc; // 0x30
	::System::Int32 __l__initialThreadId; // 0x38
	::System::Int32 _timeStart_5__2; // 0x3C
	::System::Int32 __1__state; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEOBJECT_D__40__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEOBJECT_D__40_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___USEOBJECT_D__40_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
