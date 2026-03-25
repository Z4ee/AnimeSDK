#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapMissionData; }
namespace RPG::Client { class MapOutControlTeamLeaderData; }
namespace RPG::Client { class MapTeleportData; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int ICartography2D_TypeDefinitionIndex = 61247;

	class ICartography2D
	{
	public:
	};
}
