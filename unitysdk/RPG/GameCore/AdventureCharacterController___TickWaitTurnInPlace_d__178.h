#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE4DDC60)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE4DE130)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE4DE190)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE4DE140)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4DDC50)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D0B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterController___TickWaitTurnInPlace_d__178_TypeDefinitionIndex = 57189;

	class AdventureCharacterController___TickWaitTurnInPlace_d__178 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* predicate; // 0x18
		::RPG::GameCore::AdventureCharacterController* __4__this; // 0x20
		::System::Boolean _bRecoverToDefaultState_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__178_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
