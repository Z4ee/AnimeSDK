#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D5D8B81C5F91714F;
namespace UnityEngine { class GameObject; }

#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1038C0C0)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1038C7F0)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1038C850)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1038C800)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1038C0B0)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1038A590)

inline static constexpr unsigned int Class_1_D5D8B81C5F91714F__CreateLaserBetween_d__6_TypeDefinitionIndex = 63990;

class Class_1_D5D8B81C5F91714F__CreateLaserBetween_d__6 : public ::System::Object
{
public:
	::UnityEngine::GameObject* startGameObject; // 0x10
	::System::Object* __2__current; // 0x18
	::Class_1_D5D8B81C5F91714F* __4__this; // 0x20
	::System::Single _moveDuration_5__2; // 0x28
	::System::Int32 __1__state; // 0x2C
	::System::Single _currentMoveTime_5__3; // 0x30
	::UnityEngine::Vector3 position1; // 0x34
	::UnityEngine::Vector3 position2; // 0x40
	::System::Boolean needCreateNewEffect; // 0x4C
	::System::Single _waitProtectTime_5__4; // 0x50

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
