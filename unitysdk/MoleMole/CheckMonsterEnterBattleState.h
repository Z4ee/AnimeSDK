#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CheckEnterBattleStateBase.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_4_C2BA23F5AA27FA67;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_CHECKMONSTERENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x16292500)
#define MOLEMOLE_CHECKMONSTERENTERBATTLESTATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x162923C0)
#define MOLEMOLE_CHECKMONSTERENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16292560)
#define MOLEMOLE_CHECKMONSTERENTERBATTLESTATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x162925F0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckMonsterEnterBattleState_TypeDefinitionIndex = 81482;

	class CheckMonsterEnterBattleState : public ::MoleMole::CheckEnterBattleStateBase
	{
	public:
		::Class_4_C2BA23F5AA27FA67* _enterBattleComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKMONSTERENTERBATTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKMONSTERENTERBATTLESTATE_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Config::EnterBattleState GetCurrentEnterBattleState()
		{
			return ((::MoleMole::Config::EnterBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKMONSTERENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKMONSTERENTERBATTLESTATE___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
