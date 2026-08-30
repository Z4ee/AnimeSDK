#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_1_983D987E7505927D;

#define CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18977B70)
#define CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189781E0)
#define CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18978240)
#define CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x189781F0)
#define CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18977B60)
#define CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x18977480)

inline static constexpr unsigned int Class_1_983D987E7505927D___SwitchAnchor_d__2_TypeDefinitionIndex = 60877;

class Class_1_983D987E7505927D___SwitchAnchor_d__2 : public ::System::Object
{
public:
	::Class_1_983D987E7505927D* __4__this; // 0x10
	::Class_1_64D890C466F37235* _mapRotationManager_5__4; // 0x18
	::System::Object* __2__current; // 0x20
	::UnityEngine::Vector3 _switchAnchorPosition_5__2; // 0x28
	::System::Int32 __1__state; // 0x34
	::UnityEngine::Quaternion _switchAnchorRotation_5__3; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D___SWITCHANCHOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
