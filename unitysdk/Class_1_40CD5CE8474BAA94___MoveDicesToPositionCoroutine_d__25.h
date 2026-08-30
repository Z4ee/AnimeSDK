#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_40CD5CE8474BAA94;
class Class_1_9C8BB23B0435A836;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15859CD0)
#define CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1585A0E0)
#define CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1585A140)
#define CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1585A0F0)
#define CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15859CC0)
#define CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x1584D460)

inline static constexpr unsigned int Class_1_40CD5CE8474BAA94___MoveDicesToPositionCoroutine_d__25_TypeDefinitionIndex = 60441;

class Class_1_40CD5CE8474BAA94___MoveDicesToPositionCoroutine_d__25 : public ::System::Object
{
public:
	::Class_1_40CD5CE8474BAA94* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* targetPositions; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* dices; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* originPositions; // 0x30
	::System::Single _speed_5__2; // 0x38
	::System::Int32 __1__state; // 0x3C
	::System::Single _ratio_5__3; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
