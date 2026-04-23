#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F6460165989C3EF;
class Class_1_64D890C466F37235;
namespace RPG::Client { class Map; }

#define CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91CECE0)
#define CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91CEF10)
#define CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91CEF70)
#define CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91CEF20)
#define CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91CECC0)
#define CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x91CE9D0)

inline static constexpr unsigned int Class_1_3F6460165989C3EF___WaitMapRotation_d__18_TypeDefinitionIndex = 55820;

class Class_1_3F6460165989C3EF___WaitMapRotation_d__18 : public ::System::Object
{
public:
	::RPG::Client::Map* _map_5__3; // 0x10
	::System::Object* __2__current; // 0x18
	::Class_1_64D890C466F37235* _mapRotationManager_5__2; // 0x20
	::Class_1_3F6460165989C3EF* __4__this; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F6460165989C3EF___WAITMAPROTATION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
