#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigChessEntity.h"
#include "unitysdk/MoleMole/ConfigChessEntity_StateMachineParamsWrapper.h"

#define MOLEMOLE_DEFENSESCENE_CONFIGDEFENSESCENEVIRUSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x17E548B0)

namespace MoleMole::DefenseScene
{
	inline static constexpr unsigned int ConfigDefenseSceneVirusEntity_TypeDefinitionIndex = 56646;

	class ConfigDefenseSceneVirusEntity : public ::MoleMole::ConfigChessEntity
	{
	public:
		::MoleMole::ConfigChessEntity_StateMachineParamsWrapper AddStateParams; // 0x50
		::MoleMole::ConfigChessEntity_StateMachineParamsWrapper RemoveStateParams; // 0x78
		::System::Single VirusLifeTime; // 0xA0
		::System::Single VirusDestroyDuration; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEFENSESCENE_CONFIGDEFENSESCENEVIRUSENTITY__CTOR_OFFSET))(this);
		}
	};
}
