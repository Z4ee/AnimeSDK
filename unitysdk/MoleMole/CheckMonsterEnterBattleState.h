#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CheckEnterBattleStateBase.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_4_FFDCB461A077D183;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_CHECKMONSTERENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x13989D30)
#define MOLEMOLE_CHECKMONSTERENTERBATTLESTATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13989BE0)
#define MOLEMOLE_CHECKMONSTERENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13989D90)
#define MOLEMOLE_CHECKMONSTERENTERBATTLESTATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13989E20)

namespace MoleMole
{
	inline static constexpr unsigned int CheckMonsterEnterBattleState_TypeDefinitionIndex = 43486;

	class CheckMonsterEnterBattleState : public ::MoleMole::CheckEnterBattleStateBase
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::Class_4_FFDCB461A077D183* _enterBattleComponent; // 0x60

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
