#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64D890C466F37235;
class Class_1_D6681068F74FC3B8;
namespace RPG::Client { class Map; }

#define CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFF4B700)
#define CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFF4B930)
#define CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFF4B990)
#define CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFF4B940)
#define CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF4B6F0)
#define CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4B3D0)

inline static constexpr unsigned int Class_1_D6681068F74FC3B8___WaitMapRotation_d__18_TypeDefinitionIndex = 56575;

class Class_1_D6681068F74FC3B8___WaitMapRotation_d__18 : public ::System::Object
{
public:
	::RPG::Client::Map* _map_5__3; // 0x10
	::Class_1_64D890C466F37235* _mapRotationManager_5__2; // 0x18
	::System::Object* __2__current; // 0x20
	::Class_1_D6681068F74FC3B8* __4__this; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
