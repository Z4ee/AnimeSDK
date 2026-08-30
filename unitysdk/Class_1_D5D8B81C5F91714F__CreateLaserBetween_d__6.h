#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D5D8B81C5F91714F;
namespace UnityEngine { class GameObject; }

#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x172C4DD0)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x172C5470)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x172C54D0)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x172C5480)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172C4DC0)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x172C3290)

inline static constexpr unsigned int Class_1_D5D8B81C5F91714F__CreateLaserBetween_d__6_TypeDefinitionIndex = 78069;

class Class_1_D5D8B81C5F91714F__CreateLaserBetween_d__6 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_D5D8B81C5F91714F* __4__this; // 0x18
	::UnityEngine::GameObject* startGameObject; // 0x20
	::UnityEngine::Vector3 position1; // 0x28
	::System::Int32 __1__state; // 0x34
	::System::Boolean needCreateNewEffect; // 0x38
	::System::Single _waitProtectTime_5__4; // 0x3C
	::UnityEngine::Vector3 position2; // 0x40
	::System::Single _moveDuration_5__2; // 0x4C
	::System::Single _currentMoveTime_5__3; // 0x50

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6__CTOR_OFFSET))(this, a1);
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
