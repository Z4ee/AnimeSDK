#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrMaterialColorCfg.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrMaterialFloatCfg.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BrMaterialCfg_TypeDefinitionIndex = 93432;

	struct alignas(8) BrMaterialCfg
	{
		::UnityEngine::Material* Material; // 0x10
		::UnityEngine::Color BaseColor; // 0x18
		::UnityEngine::Color CenterColor; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Arcade::BallsRace::Client::BrMaterialColorCfg>* ColorCfgs; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Arcade::BallsRace::Client::BrMaterialFloatCfg>* FloatCfgs; // 0x40
	};
}
