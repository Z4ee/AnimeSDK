#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB583440)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB5839C0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB583A20)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB5839D0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB583430)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174__CTOR_OFFSET UNITYSDK_OFFSET(0xB57C670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterController___TickWaitTurnInPlace_d__174_TypeDefinitionIndex = 52553;

	class AdventureCharacterController___TickWaitTurnInPlace_d__174 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* predicate; // 0x10
		::RPG::GameCore::AdventureCharacterController* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Boolean _bRecoverToDefaultState_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__174_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
