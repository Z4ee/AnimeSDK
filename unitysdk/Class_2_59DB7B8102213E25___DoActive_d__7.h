#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_59DB7B8102213E25;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }

#define CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD145BF0)
#define CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD146010)
#define CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD146070)
#define CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD146020)
#define CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD145BD0)
#define CLASS_2_59DB7B8102213E25___DOACTIVE_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0xD145920)

inline static constexpr unsigned int Class_2_59DB7B8102213E25___DoActive_d__7_TypeDefinitionIndex = 45996;

class Class_2_59DB7B8102213E25___DoActive_d__7 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _entity_5__2; // 0x10
	::Class_2_59DB7B8102213E25* __4__this; // 0x18
	::System::Object* __2__current; // 0x20
	::RPG::GameCore::NPCComponent* _cmpt_5__3; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25___DOACTIVE_D__7__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25___DOACTIVE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
