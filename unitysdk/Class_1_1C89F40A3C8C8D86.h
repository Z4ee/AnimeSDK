#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedBattleStageStep.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedStageType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1C89F40A3C8C8D86_METHOD_1_BEA08973D58DCDDE_OFFSET UNITYSDK_OFFSET(0x1BAA93B0)
#define CLASS_1_1C89F40A3C8C8D86__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA93C0)

inline static constexpr unsigned int Class_1_1C89F40A3C8C8D86_TypeDefinitionIndex = 40385;

class Class_1_1C89F40A3C8C8D86 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChimeraDuelTurnBasedBattleStageStep ELPLIEIMKLP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C89F40A3C8C8D86__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType Method_1_BEA08973D58DCDDE()
	{
		return ((::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C89F40A3C8C8D86_METHOD_1_BEA08973D58DCDDE_OFFSET))(this);
	}
};
