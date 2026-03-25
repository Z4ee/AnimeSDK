#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0C96443BB60BAC09;

#define CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1196F950)
#define CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1196FA00)
#define CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1196FA60)
#define CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1196FA10)
#define CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1196F940)
#define CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1196F660)

inline static constexpr unsigned int Class_2_0C96443BB60BAC09___DelayCancelControl_d__3_TypeDefinitionIndex = 47030;

class Class_2_0C96443BB60BAC09___DelayCancelControl_d__3 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_2_0C96443BB60BAC09* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::Nullable_1<::UnityEngine::Quaternion> rotation; // 0x24
	::System::Nullable_1<::UnityEngine::Vector3> position; // 0x38

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
