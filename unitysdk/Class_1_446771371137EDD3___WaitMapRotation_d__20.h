#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_446771371137EDD3;
class Class_1_64D890C466F37235;
namespace RPG::Client { class Map; }

#define CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11B033F0)
#define CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B03600)
#define CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B03660)
#define CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11B03610)
#define CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B033E0)
#define CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0x11B02F50)

inline static constexpr unsigned int Class_1_446771371137EDD3___WaitMapRotation_d__20_TypeDefinitionIndex = 60635;

class Class_1_446771371137EDD3___WaitMapRotation_d__20 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_446771371137EDD3* __4__this; // 0x18
	::RPG::Client::Map* _map_5__3; // 0x20
	::Class_1_64D890C466F37235* _mapRotationManager_5__2; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446771371137EDD3___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
