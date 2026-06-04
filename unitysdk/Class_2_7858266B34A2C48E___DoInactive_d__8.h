#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7858266B34A2C48E;
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12AC3550)
#define CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12AC3BF0)
#define CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12AC3C50)
#define CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12AC3C00)
#define CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AC3530)
#define CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x12AC2DE0)

inline static constexpr unsigned int Class_2_7858266B34A2C48E___DoInactive_d__8_TypeDefinitionIndex = 53358;

class Class_2_7858266B34A2C48E___DoInactive_d__8 : public ::System::Object
{
public:
	::Class_2_7858266B34A2C48E* __4__this; // 0x10
	::RPG::GameCore::GameEntity* _monsterEntity_5__2; // 0x18
	::System::Object* __2__current; // 0x20
	::RPG::Client::MonoEffectManager* __MonoEffectManager_5__3; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
