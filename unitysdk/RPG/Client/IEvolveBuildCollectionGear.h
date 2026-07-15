#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"

namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int IEvolveBuildCollectionGear_TypeDefinitionIndex = 60999;

	class IEvolveBuildCollectionGear
	{
	public:
	};
}
