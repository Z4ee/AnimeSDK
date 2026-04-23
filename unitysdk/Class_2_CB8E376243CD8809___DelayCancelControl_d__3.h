#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_CB8E376243CD8809;

#define CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90793A0)
#define CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9079450)
#define CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90794B0)
#define CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9079460)
#define CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9079390)
#define CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x9079090)

inline static constexpr unsigned int Class_2_CB8E376243CD8809___DelayCancelControl_d__3_TypeDefinitionIndex = 53762;

class Class_2_CB8E376243CD8809___DelayCancelControl_d__3 : public ::System::Object
{
public:
	::Class_2_CB8E376243CD8809* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Nullable_1<::UnityEngine::Quaternion> rotation; // 0x20
	::System::Nullable_1<::UnityEngine::Vector3> position; // 0x34
	::System::Int32 __1__state; // 0x44

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB8E376243CD8809___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
