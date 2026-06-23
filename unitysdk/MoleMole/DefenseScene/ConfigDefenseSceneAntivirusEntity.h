#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigChessEntity.h"
#include "unitysdk/MoleMole/ConfigChessEntity_StateMachineParamsWrapper.h"

#define MOLEMOLE_DEFENSESCENE_CONFIGDEFENSESCENEANTIVIRUSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18F4EB20)

namespace MoleMole::DefenseScene
{
	inline static constexpr unsigned int ConfigDefenseSceneAntivirusEntity_TypeDefinitionIndex = 59224;

	class ConfigDefenseSceneAntivirusEntity : public ::MoleMole::ConfigChessEntity
	{
	public:
		::MoleMole::ConfigChessEntity_StateMachineParamsWrapper RemoveStateParams; // 0x50
		::MoleMole::ConfigChessEntity_StateMachineParamsWrapper AddStateParams; // 0x78
		::System::Single AntivirusLifeTime; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEFENSESCENE_CONFIGDEFENSESCENEANTIVIRUSENTITY__CTOR_OFFSET))(this);
		}
	};
}
