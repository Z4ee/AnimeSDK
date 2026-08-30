#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_415;

#define RPG_GAMECORE_GAMEENTITY___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE64F980)
#define RPG_GAMECORE_GAMEENTITY___C__DISPLAYCLASS58_0__DEATHRATTLE_B__0_OFFSET UNITYSDK_OFFSET(0xE651B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity___c__DisplayClass58_0_TypeDefinitionIndex = 53772;

	class GameEntity___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* pFlags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Deathrattle_b__0(::Class_0_16E4307DCC419505_415* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY___C__DISPLAYCLASS58_0__DEATHRATTLE_B__0_OFFSET))(this, a1);
		}
	};
}
