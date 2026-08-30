#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedPrepareStageStep.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedStageType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5CDDB4EAEBED3121_METHOD_1_BEA08973D58DCDDE_OFFSET UNITYSDK_OFFSET(0x1BF92E20)
#define CLASS_1_5CDDB4EAEBED3121__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF92E30)

inline static constexpr unsigned int Class_1_5CDDB4EAEBED3121_TypeDefinitionIndex = 40384;

class Class_1_5CDDB4EAEBED3121 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChimeraDuelTurnBasedPrepareStageStep ELPLIEIMKLP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CDDB4EAEBED3121__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType Method_1_BEA08973D58DCDDE()
	{
		return ((::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CDDB4EAEBED3121_METHOD_1_BEA08973D58DCDDE_OFFSET))(this);
	}
};
