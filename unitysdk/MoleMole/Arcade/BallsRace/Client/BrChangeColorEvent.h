#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrMaterialCfg.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BrChangeColorEvent_TypeDefinitionIndex = 83902;

	struct alignas(8) BrChangeColorEvent
	{
		::Il2CppArray<::MoleMole::Arcade::BallsRace::Client::BrMaterialCfg>* TargetColors; // 0x10
		::UnityEngine::Color NapColor; // 0x18
		::System::Single ChangeTime; // 0x28
		::System::Single Duration; // 0x2C
	};
}
