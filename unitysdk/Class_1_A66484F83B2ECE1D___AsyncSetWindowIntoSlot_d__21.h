#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_33;
class Class_1_A66484F83B2ECE1D;
class Class_2_B9E8C2EEAA5C96EC;

#define CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1221CAA0)
#define CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1221D470)
#define CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1221D4D0)
#define CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1221D480)
#define CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1221CA80)
#define CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x1221C310)

inline static constexpr unsigned int Class_1_A66484F83B2ECE1D___AsyncSetWindowIntoSlot_d__21_TypeDefinitionIndex = 76430;

class Class_1_A66484F83B2ECE1D___AsyncSetWindowIntoSlot_d__21 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_A66484F83B2ECE1D* __4__this; // 0x18
	::Class_2_B9E8C2EEAA5C96EC* _windowControllerEntity_5__2; // 0x20
	::Class_2_B9E8C2EEAA5C96EC* _slot_5__5; // 0x28
	::Class_2_B9E8C2EEAA5C96EC* _window_5__4; // 0x30
	::Class_1_43BD383C98B4C0C5_33* _state_5__3; // 0x38
	::System::Int32 slotIndex; // 0x40
	::System::Single _distance_5__7; // 0x44
	::UnityEngine::Vector3 _targetPos_5__6; // 0x48
	::UnityEngine::Vector3 _curPos_5__9; // 0x54
	::System::Int32 windowIndex; // 0x60
	::System::Single _duration_5__8; // 0x64
	::System::Int32 __1__state; // 0x68
	::System::Single _curDistance_5__10; // 0x6C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66484F83B2ECE1D___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
