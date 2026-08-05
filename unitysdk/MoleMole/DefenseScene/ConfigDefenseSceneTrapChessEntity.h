#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigChessEntity.h"
#include "unitysdk/MoleMole/ConfigChessEntity_StateMachineParamsWrapper.h"

#define MOLEMOLE_DEFENSESCENE_CONFIGDEFENSESCENETRAPCHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A004AA0)

namespace MoleMole::DefenseScene
{
	inline static constexpr unsigned int ConfigDefenseSceneTrapChessEntity_TypeDefinitionIndex = 70855;

	class ConfigDefenseSceneTrapChessEntity : public ::MoleMole::ConfigChessEntity
	{
	public:
		::MoleMole::ConfigChessEntity_StateMachineParamsWrapper AddStateParams; // 0x50
		::MoleMole::ConfigChessEntity_StateMachineParamsWrapper RemoveStateParams; // 0x78
		::System::Single TrapLifeTime; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEFENSESCENE_CONFIGDEFENSESCENETRAPCHESSENTITY__CTOR_OFFSET))(this);
		}
	};
}
