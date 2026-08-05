#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CheckEnterBattleStateBase.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_4_AD99097E9C0ABD9C;

#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x1A491D30)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A491C00)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A491D80)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A491E10)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAvatarEnterBattleState_TypeDefinitionIndex = 85350;

	class CheckAvatarEnterBattleState : public ::MoleMole::CheckEnterBattleStateBase
	{
	public:
		::Class_4_AD99097E9C0ABD9C* _enterBattleComponent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Config::EnterBattleState GetCurrentEnterBattleState()
		{
			return ((::MoleMole::Config::EnterBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
